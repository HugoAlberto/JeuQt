#ifndef JOUEUR_H
#define JOUEUR_H

#include <QLabel>

/*!
 *  \brief          Classe joueur : public QLabel
 *  \author       Alberto Hugo
 *  \version      0.9
 *  \date          2013-2014
 *  \pre           Initialise la classe joueur
 *  \copyright  GNU Public License.
 */
class joueur : public QLabel
{
   Q_OBJECT

public:
    explicit joueur(QString l,QString stringCouleur, QWidget *parent = 0);
    //! Met une lettre dans un QString
    void setLettre(QString);
    //! Récupère la lettre du joueur
    QString getLettre();
    //! Récupère le curseur du joueur actif
    QCursor* getSonCurseur(QString lequel){if(lequel=="normal") return sonCurseurNormal;else return sonCurseurOk;};
    //! Récupère le nombre de jetons
    /*! \return nombre de jeton */
    int getNbJeton(){return nbJeton;};
    //! Initialise les jetons du joueur
    /*! \return Le nombre de jeton reçoit 3 */
    void resetJeton(){nbJeton=3;};
    //! Diminue le nombre de jeton par 1
    void diminueNbJeton(){nbJeton--;};
    //! Récupère la couleur d'un joueur
    /*! \return couleur */
    QString getCouleur(){return couleur;};

private:
    //! Nombre de jeton (int)
    int nbJeton;
    //! Lettre
    QString lettre;
    //! Curseur normal avant déplacement
    QCursor* sonCurseurNormal;
    //! Si l'emplacement survolé est ok
    QCursor* sonCurseurOk;
    //! Couleur du curseur
    QString couleur;
};

#endif // JOUEUR_H


