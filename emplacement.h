#ifndef EMPLACEMENT_H
#define EMPLACEMENT_H

#include <QLabel>
#include "mainwindow.h"
#include "joueur.h"
class MainWindow;

/*!
 *  \brief          Classe emplacement : public QLabel
 *  \author       Alberto Hugo
 *  \version      0.9
 *  \date          2013-2014
 *  \pre           Initialise la classe emplacement
 *  \copyright  GNU Public License.
 */
class emplacement : public QLabel
{
   Q_OBJECT
private:
   MainWindow* mum;
public:
   explicit emplacement(MainWindow * maman,QWidget *parent = 0);
   //! Ligne du plateau
   int ligne;
   //! Colonne du plateau
   int col;
   //! Joueur
   joueur* leJoueur;
signals:

public slots:
    //! Si l'emplacement est vide de pion
    bool estVide();
    //! Si l'emplacement est jouxte à celui actuel
    bool jouxte(emplacement* e);
    //! Set un joueur
    void setJoueur(joueur*);
    //! Vide l'emplacement
    void vider();
    //! Tour du joueur adverse (réseau uniquement)
    void jeuAdverse();
    //! Tour du joueur adverse sans jeton (réseau uniquement)
    void jeuAdverseMove();

private slots:
    //! Quand le clique est pressé
    void mousePressEvent(QMouseEvent *ev);
    //! Quand le clique est relaché
    void mouseReleaseEvent(QMouseEvent *ev);
    //! Quand le pointeur est bougé
    void mouseMoveEvent(QMouseEvent *ev);
};

#endif // EMPLACEMENT_H


