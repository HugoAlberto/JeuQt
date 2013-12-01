#ifndef JOUEUR_H
#define JOUEUR_H

#include <QLabel>

class joueur : public QLabel
{
   Q_OBJECT
public:
   explicit joueur(QString l,QString stringCouleur, QWidget *parent = 0);
   void setLettre(QString);
   QString getLettre();
   QCursor* getSonCurseur(QString lequel){if(lequel=="normal") return sonCurseurNormal;else return sonCurseurOk;};
   int getNbJeton(){return nbJeton;};
   void resetJeton(){nbJeton=3;};
   void diminueNbJeton(){nbJeton--;};
   QString getCouleur(){return couleur;};

signals:

public slots:

private:
   QString normalStyleSheet;
   int nbJeton;
   QString lettre;
   QCursor* sonCurseurNormal;
   QCursor* sonCurseurOk;
   QString couleur;
};

#endif // JOUEUR_H


