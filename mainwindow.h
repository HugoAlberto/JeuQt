#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "joueur.h"
#include "emplacement.h"
#include <QStatusBar>
#include <QTimer>
#include <QTextCodec>
#include <QStyle>
#include <QInputDialog>
#include <QTcpServer>
#include <QTcpSocket>

namespace Ui {
class MainWindow;
}
class emplacement;
class MainWindow : public QMainWindow
{
   Q_OBJECT

public:
   explicit MainWindow(QWidget *parent = 0);
   ~MainWindow();
   joueur * joueurActif;
   joueur * joueurServer;
   bool ligne(int no);
   bool col(int no);
   bool diag(int no);
   emplacement* emplacementDeplace;
   void setEmplacementDeplace(emplacement* e);
   void resetCurseur();
   bool dejaGagne(joueur * unJoueur);
   void changement();
   joueur * joueurHumain;
   joueur * joueurOrdi;
   QPixmap pixmapEmptyEmplacement;
   bool partieTerminee;
   QTimer * timerTour;
   QTcpServer * server;
   QTcpSocket* laSocket;
   bool serveur;
   bool jvj;
   bool iaOn;


private:
   Ui::MainWindow *ui;
   QCursor normal;
   void tirage();
   emplacement*  tabEmplacement[3][3];

public slots:
   bool estCoince(emplacement*);
   bool accessible(emplacement* e1,emplacement* e2);
   void setCurseur(QCursor & cuseur);
   void commencePartie();
   void receptionDonnees();
   void changementEtatSocket(QAbstractSocket::SocketState etat);

private slots:
   void raffraichirBarreProgression();
   void on_pushButtonNouvellePartie_clicked();
   void initialiseJeu();
   void on_pushButton_2_clicked();
   void on_pushButtonSolo_clicked();
   void on_pushButtonServeur_clicked();
   void on_pushButtonClient_clicked();
   void on_pushButtonSoloIa_clicked();
};

#endif // MAINWINDOW_H
