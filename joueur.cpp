#include "joueur.h"
#include <QPainter>

joueur::joueur(QString l,QString coul,QWidget *parent) :
   QLabel(parent), lettre(l)
{
   setText(l);
   nbJeton=3;
   couleur=coul;
   QPixmap lePixmap(":/Images/"+coul);
   setPixmap(lePixmap);
   sonCurseurNormal=new QCursor(lePixmap);
   QPixmap lePixmap2(":/Images/green");
   sonCurseurOk=new QCursor(lePixmap2);
}

QString joueur::getLettre()
{
   return(lettre);
}
void joueur::setLettre(QString l)
{
   lettre=l;
}

