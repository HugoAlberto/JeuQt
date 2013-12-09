#include "emplacement.h"

#include <QDebug>
#include <QPainter>
#include <QStatusBar>
#include <QMouseEvent>

emplacement::emplacement(MainWindow * maman,QWidget *parent) :
   QLabel(parent)
{
   mum=maman;
   leJoueur=NULL;
   setPixmap(mum->pixmapEmptyEmplacement);
   setAutoFillBackground(false);
   QString style = "border-image: url(:/Images/soMadWithoutBackground.png);";
   setStyleSheet(style);
}
bool emplacement::estVide()
{
   return leJoueur==NULL;
}
void emplacement::vider()
{
   setPixmap(mum->pixmapEmptyEmplacement);
   leJoueur=NULL;
}
void emplacement::setJoueur(joueur * j)
{
   leJoueur=j;
   if (leJoueur!=NULL)
       setPixmap(*leJoueur->pixmap());
   else
       setPixmap(mum->pixmapEmptyEmplacement);
}

void emplacement::mousePressEvent(QMouseEvent *)
{
   if(!mum->partieTerminee)
       if(estVide())
       {
           if(mum->joueurActif->getNbJeton()>0)
           {
               if((mum->joueurActif==mum->joueurHumain && mum->serveur==true) || (mum->joueurActif==mum->joueurOrdi && mum->serveur==false) || (mum->jvj==true))
               {
                   setJoueur(mum->joueurActif);
                   mum->joueurActif->diminueNbJeton();
                   QString coord = QString::number(this->ligne)+":"+QString::number(this->col);
                   mum->laSocket->write(coord.toLatin1());
                   if(!mum->dejaGagne(mum->joueurActif))
                   {
                       mum->changement();
                   }
               }
           }
        }
        else
       {
            if (leJoueur==mum->joueurActif && mum->joueurActif->getNbJeton()<=0)
            {
                if((mum->joueurActif==mum->joueurHumain && mum->serveur==true) || (mum->joueurActif==mum->joueurOrdi && mum->serveur==false) || (mum->jvj==true))
                    if(!mum->estCoince(this))
                    {
                        mum->setCurseur(*mum->joueurActif->getSonCurseur("normal"));
                        mum->setEmplacementDeplace(this);
                    }
            }
       }
}

void emplacement::mouseMoveEvent(QMouseEvent *ev)
{
   if((mum->joueurActif==mum->joueurHumain && mum->serveur==true) || (mum->joueurActif==mum->joueurOrdi && mum->serveur==false) || (mum->jvj==true))
       if(mum->emplacementDeplace!=NULL)
       {
           QPoint lePointSurvole=mapToParent(ev->pos());
           emplacement* emplacementSurvole=(emplacement *)mum->childAt(lePointSurvole);
           if(emplacementSurvole!=NULL && emplacementSurvole->inherits("emplacement") && emplacementSurvole->estVide() && jouxte(emplacementSurvole) && mum->joueurActif->getNbJeton()<=0)
               mum->setCurseur(*mum->joueurActif->getSonCurseur("ok"));
           else
               mum->setCurseur(*mum->joueurActif->getSonCurseur("normal"));
       }
}

void emplacement::mouseReleaseEvent(QMouseEvent *ev)
{
    if((mum->joueurActif==mum->joueurHumain && mum->serveur==true) || (mum->joueurActif==mum->joueurOrdi && mum->serveur==false) || (mum->jvj==true))
    {
        QPoint lePointSurvole=mapToParent(ev->pos());
        emplacement* emplacementRelache=(emplacement *)mum->childAt(lePointSurvole);
        if(emplacementRelache!=NULL && emplacementRelache->inherits("emplacement") && emplacementRelache->estVide()&& jouxte(emplacementRelache) && mum->joueurActif->getNbJeton()<=0)
           if(mum->emplacementDeplace!=NULL)
           {
               emplacementRelache->setJoueur(mum->emplacementDeplace->leJoueur);
               QString coord = QString::number(this->ligne)+":"+QString::number(this->col)+"|"+QString::number(emplacementRelache->ligne)+":"+QString::number(emplacementRelache->col);
               mum->laSocket->write(coord.toLatin1());
               mum->emplacementDeplace->vider();
               mum->emplacementDeplace=NULL;
               if(! mum->dejaGagne(mum->joueurActif)) mum->changement();
           }
        mum->resetCurseur();
    }
}

bool emplacement::jouxte(emplacement *e)
{
   bool resultat;
   resultat=(ligne==e->ligne && abs(col-e->col)==1) ||(col==e->col && abs(ligne-e->ligne)==1)||(abs(col-e->col)==1 && abs(ligne-e->ligne)==1&&((e->ligne==1 && e->col==1)||(col==1 && ligne==1)));
   return resultat;
}

void emplacement::jeuAdverse()
{
    setJoueur(mum->joueurActif);
    mum->joueurActif->diminueNbJeton();
    if(!mum->dejaGagne(mum->joueurActif))
        mum->changement();
}

void emplacement::jeuAdverseMove()
{
    setJoueur(mum->joueurActif);
    if(!mum->dejaGagne(mum->joueurActif))
        mum->changement();
}
