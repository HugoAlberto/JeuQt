#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//! \include joueur.h
#include "joueur.h"
//! \include emplacement.h
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
/*!
 *  \brief          Classe MainWindow : public QMainWindow
 *  \author       Alberto Hugo
 *  \version      0.9
 *  \date          2013-2014
 *  \pre           Initialise l'application
 *  \copyright  GNU Public License.
 */
class MainWindow : public QMainWindow
{
   Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    //! Le destructeur
    /*! Détruit la mémoire allouée par le programme */
    ~MainWindow();
    //! Le joueur qui est entrain de jouer
    /*!
    * Comporte, soit le joueur humain (joueur 1), soit le joueur ordi (joueur 2)
    * \return Le joueur courrant
    */
    joueur * joueurActif;
    /*!
    * Le joueur humain, et aussi le joueur 1
    * \return Le joueur 1
    */
    joueur * joueurHumain;
    /*!
    * Le joueur Ordi, et aussi le joueur 2
    * \return Le joueur 2
    */
    joueur * joueurOrdi;
    //! Le pion déplacé
    emplacement* emplacementDeplace;
    //! L'image du pion vide
    QPixmap pixmapEmptyEmplacement;
    //! Le temps pour chaque tour (sablier).
    QTimer * timerTour;
    void setEmplacementDeplace(emplacement* e);
    //! Remise du curseur d'origine
    void resetCurseur();
    //! Changement du joueur en cours
    void changement();
    //! Ligne du plateau de jeu (numéro de la ligne)
    /*!
    * Retourne true ou false en fonction de la ligne
    * \return true si la ligne est pleine par un même joueur
    * \return false si la ligne est vide ou pleine par plus d'un joueur
    */
    bool ligne(int no);
    //! Colonne du plateau de jeu (numéro de la colonne)
    /*!
    * Retourne true ou false en fonction de la colonne
    * \return true si la colonne est pleine par un même joueur
    * \return false si la colonne est vide ou pleine par plus d'un joueur
    */
    bool col(int no);
    //! Diagonale du plateau de jeu (numéro de la diagonale)
    /*!
    * Retourne true ou false en fonction de la diagonale
    * \return true si la diagonale est pleine par un même joueur
    * \return false si la diagonaleest vide ou pleine par plus d'un joueur
    */
    bool diag(int no);
    //! Si le joueur à déjà gagné (le joueur)
    /*!
    * \return true si la partie à déjà été gagné par un joueur
    * \return false si la partie n'est pas encore gagné
    */
    bool dejaGagne(joueur * unJoueur);
    //! Si la partie est déjà terminée
    /*!
    * \return true si la partie est terminé
    * \return false si la partie n'est pas terminé
    */
    bool partieTerminee;
    //! Si l'application est un serveur
    /*!
    * \return true si l'application est un serveur
    * \return false si l'application n'est pas un serveur
    */
    bool serveur;
    //! Si l'application est un joueur contre un joueur
    /*!
    * \return true si l'application est un joueur contre un joueur
    * \return false si l'application n'est pas un joueur contre un joueur
    */
    bool jvj;
    //! Si l'application est contre un ordinateur
    /*!
    * \return true si l'application est contre un ordinateur
    * \return false si l'application n'est pas contre un ordinateur
    */
    bool iaOn;
    //! Socket serveur
    QTcpServer * server;
    //! Socket client
    QTcpSocket* laSocket;

private:
    //! Interface utilisateur de l'application
    Ui::MainWindow *ui;
    /*! Plateau de jeu de 3x3 dans lequel sont les pions des joueurs */
    emplacement*  tabEmplacement[3][3];
    //! Curseur normal
    /*! Stocke le curseur de la souris avant de le changer (Normalement le pointeur) */
     QCursor normal;
    //! Tirage
    /*! Sélectionne le joueur qui commence la partie aléatoirement */
    void tirage();

public slots:
    //! Si le pion est coincé et ne peut être déplcacé
    bool estCoince(emplacement*);
    //! Si l'emplacement est accéssible par le pion
    /*! \return l'emplacement est vide, et il est jouxte au pion qui est entrain d'être joué */
    bool accessible(emplacement* e1,emplacement* e2);
    /*! Modifie le curseur courant par le curseur qui va bien */
    void setCurseur(QCursor & cuseur);
    /*! Commence une partie en réseau quand un client à trouvé un serveur */
    void commencePartie();
    //! Réception des données
    /*! Échange des données entre le serveur et le client */
    void receptionDonnees();
    //! Fonctionnalité à développer
    void changementEtatSocket(QAbstractSocket::SocketState etat);

private slots:
    //! Raffraichi la barre de progression
    void raffraichirBarreProgression();
    //! Quand le bouton 'Nouvelle partie' est cliqué
    void on_pushButtonNouvellePartie_clicked();
    //! Initialise le jeu
    /*! Met ou remet le jeu à zéro */
    void initialiseJeu();
    void on_pushButton_Quitter_clicked();
    void on_pushButtonSolo_clicked();
    void on_pushButtonServeur_clicked();
    void on_pushButtonClient_clicked();
    void on_pushButtonSoloIa_clicked();
};

#endif // MAINWINDOW_H
