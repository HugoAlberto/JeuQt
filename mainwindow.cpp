#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "emplacement.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
   QMainWindow(parent),
   ui(new Ui::MainWindow)
{
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("utf8"));
    ui->setupUi(this);
    laSocket=new QTcpSocket(this);
    pixmapEmptyEmplacement=QPixmap(":Images/grey");
    qsrand(time(NULL));
    serveur=false;
    jvj=false;
    joueurHumain=new joueur("a","red",this);
    ui->horizontalLayoutJoueurs->addStretch();
    ui->horizontalLayoutJoueurs->addWidget(joueurHumain);
    ui->horizontalLayoutJoueurs->addStretch();
    joueurOrdi=new joueur("b","blue",this);
    ui->horizontalLayoutJoueurs->addWidget(joueurOrdi);
    ui->horizontalLayoutJoueurs->addStretch();
    for(int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            tabEmplacement[i][j]=new emplacement(this,this);
            tabEmplacement[i][j]->ligne=i;
            tabEmplacement[i][j]->col=j;
            ui->gridLayoutJeu->addWidget(tabEmplacement[i][j],i,j,Qt::AlignHCenter);
        }
    }
    timerTour=new QTimer(this);
    connect(timerTour,SIGNAL(timeout()),this,SLOT(raffraichirBarreProgression()));
    tirage();
    emplacementDeplace=NULL;
    normal=cursor();
    partieTerminee=false;
    ui->pushButtonNouvellePartie->setEnabled(false);
}

void MainWindow::setCurseur(QCursor & curseur)
{
   setCursor(curseur);
}

void MainWindow::resetCurseur()
{
    setCursor(normal);
}

MainWindow::~MainWindow()
{
    //laSocket->close();
    //server->close();
    delete ui;
}

void MainWindow::tirage()
{
   if(qrand()%2==0)
   {
        joueurActif=joueurHumain;
        ui->labelJoueur1->setText("<html><head/><body><p><span style='font-weight:600;'>Player 1's turn!</span></p></body></html>");
        ui->labelJoueur2->setText("<html><head/><body><p>Player 2</p></body></html>");
    }
    else
    {
        joueurActif=joueurOrdi;
        ui->labelJoueur2->setText("<html><head/><body><p><span style='font-weight:600;'>Player 2's turn!</span></p></body></html>");
        ui->labelJoueur1->setText("<html><head/><body><p>Player 1</p></body></html>");
   }
}

bool MainWindow::ligne(int no)
{
    return(!tabEmplacement[no][0]->estVide() && tabEmplacement[no][0]->leJoueur==tabEmplacement[no][1]->leJoueur&& tabEmplacement[no][1]->leJoueur==tabEmplacement[no][2]->leJoueur);
}

bool MainWindow::col(int no)
{
    return(!tabEmplacement[0][no]->estVide() && tabEmplacement[0][no]->leJoueur==tabEmplacement[1][no]->leJoueur&& tabEmplacement[1][no]->leJoueur==tabEmplacement[2][no]->leJoueur);
}

bool MainWindow::diag(int no)
{
    if(no==0) return(!tabEmplacement[0][0]->estVide() && tabEmplacement[0][0]->leJoueur==tabEmplacement[1][1]->leJoueur&& tabEmplacement[1][1]->leJoueur==tabEmplacement[2][2]->leJoueur);
    else return(!tabEmplacement[0][2]->estVide() && tabEmplacement[0][2]->leJoueur==tabEmplacement[1][1]->leJoueur&& tabEmplacement[1][1]->leJoueur==tabEmplacement[2][0]->leJoueur);
}

void MainWindow::setEmplacementDeplace(emplacement* e)
{
    emplacementDeplace=e;
}

bool MainWindow::dejaGagne(joueur *leJoueur)
{
   bool gagne=ligne(0) || ligne(1) || ligne(2) || col(0) || col(1) || col(2) || diag(0) || diag(1);
   if(gagne)
   {
       QMessageBox msgBox;
       msgBox.setText("The Player "+leJoueur->getCouleur()+" won!");
       msgBox.exec();
       partieTerminee=true;
       timerTour->stop();
       ui->pushButtonNouvellePartie->setEnabled(true);
   }
   return(gagne);
}

void MainWindow::changement()
{
   if (joueurActif==joueurOrdi)
   {
       joueurActif=joueurHumain;
       ui->labelJoueur1->setText("<html><head/><body><p><span style='font-weight:600;'>Player 1's turn!</span></p></body></html>");
       ui->labelJoueur2->setText("<html><head/><body><p>Player 2</p></body></html>");
   }
   else
   {
       joueurActif=joueurOrdi;
       ui->labelJoueur2->setText("<html><head/><body><p><span style='font-weight:600;'>Player 2's turn!</span></p></body></html>");
       ui->labelJoueur1->setText("<html><head/><body><p>Player 1</p></body></html>");
   }
   ui->progressBarTour->setValue(0);
}

bool MainWindow::estCoince(emplacement *)
{
    bool resultat=false;
    return resultat;
}

bool MainWindow::accessible(emplacement* e1,emplacement* e2)
{
    return e2->estVide()&& e1->jouxte(e2);
}

void MainWindow::initialiseJeu()
{

   joueurHumain->resetJeton();
   joueurOrdi->resetJeton();
   for(int noLigne=0;noLigne<3;noLigne++)
   {
       for (int noCol=0;noCol<3;noCol++)
       {
           tabEmplacement[noLigne][noCol]->vider();
       }
   }
   changement();
   emplacementDeplace=NULL;
   partieTerminee=false;
}

void MainWindow::on_pushButtonNouvellePartie_clicked()
{
   if(partieTerminee)
   {
       initialiseJeu();
       ui->pushButtonNouvellePartie->setEnabled(false);
   }
}

void MainWindow::raffraichirBarreProgression()
{
    ui->progressBarTour->setMaximum(20);
    int progression=1;
    ui->progressBarTour->setValue(ui->progressBarTour->value()+progression);
    if(ui->progressBarTour->value()==ui->progressBarTour->maximum())
    {
         joueur * leGagnant;
         if(joueurActif==joueurHumain)
         {
             leGagnant=joueurOrdi;
         }
         else
         {
            leGagnant=joueurHumain;
         }
         QMessageBox msgBox;
         msgBox.setText("The Player "+leGagnant->getCouleur()+" won! Time limit!");
         msgBox.exec();
         partieTerminee=true;
         timerTour->stop();
         ui->pushButtonNouvellePartie->setEnabled(true);
    }
}

void MainWindow::commencePartie()
{
    ui->stackedWidget->setCurrentIndex(1);
    timerTour->start(1000);
    laSocket=server->nextPendingConnection();
    disconnect(server);
    //Faire le reconnect
    connect(laSocket,SIGNAL(readyRead()),this,SLOT(receptionDonnees()));
    //connect(laSocket,SIGNAL(stateChanged(QAbstractSocket::SocketState)),this,SLOT(changementEtatSocket(QAbstractSocket::SocketState)));
}

void  MainWindow::changementEtatSocket(QAbstractSocket::SocketState etat)
{
   if (etat==QAbstractSocket::ConnectedState)
   {
       laSocket->write(" ");
   }
}

void MainWindow::receptionDonnees()
{
    QString donnees=laSocket->readAll();
    if(donnees.at(0).digitValue()>=0 && donnees.at(0).digitValue()<=2 && donnees.at(2).digitValue()>=0 && donnees.at(2).digitValue()<=2)
    {
        QChar charLigne=donnees.at(0);
        int intLigne=charLigne.digitValue();
        QChar charCol=donnees.at(2);
        int intCol=charCol.digitValue();
        if(joueurActif->getNbJeton()<=0)
        {
            if(donnees.at(4).digitValue()>=0 && donnees.at(4).digitValue()<=2 && donnees.at(6).digitValue()>=0 && donnees.at(6).digitValue()<=2)
            {
                QChar charLigneD=donnees.at(4);
                int intLigneD=charLigneD.digitValue();
                QChar charColD=donnees.at(6);
                int intColD=charColD.digitValue();
                tabEmplacement[intLigne][intCol]->vider();
                tabEmplacement[intLigneD][intColD]->jeuAdverseMove();
            }
        }
        else if(joueurActif->getNbJeton()>0)
        {
            tabEmplacement[intLigne][intCol]->jeuAdverse();
        }
    }
    else
        if((joueurActif->getLettre()=="a" && joueurActif->getLettre()!=donnees) || (joueurActif->getLettre()=="b" && joueurActif->getLettre()!=donnees))
            changement();
}

void MainWindow::on_pushButton_2_clicked()
{
    this->close();
}

void MainWindow::on_pushButtonServeur_clicked()
{
    serveur=true;
    server=new QTcpServer(this);
    server->listen(QHostAddress::Any,6666);
    connect(server,SIGNAL(newConnection()),this,SLOT(commencePartie()));
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButtonClient_clicked()
{
    bool ok;
    QString adresse = QInputDialog::getText(this,"Client","Adresse : ",QLineEdit::Normal,"127.0.0.1",&ok);
    if(ok)
    {
        laSocket->connectToHost(adresse,6666);
        if(laSocket->waitForConnected(9000))
        {
            timerTour->start(1000);
            connect(laSocket,SIGNAL(readyRead()),this,SLOT(receptionDonnees()));
            laSocket->write(joueurActif->getLettre().toLatin1());
            ui->stackedWidget->setCurrentIndex(1);
        }
    }
    else
    {
        qDebug()<<"Nope";
    }
}

void MainWindow::on_pushButtonSolo_clicked()
{
    jvj=true;
    timerTour->start(1000);
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButtonSoloIa_clicked()
{
  iaOn=true;
  ui->stackedWidget->setCurrentIndex(1);
}
