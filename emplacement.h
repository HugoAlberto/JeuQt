#ifndef EMPLACEMENT_H
#define EMPLACEMENT_H

#include <QLabel>
#include "mainwindow.h"
#include "joueur.h"
class MainWindow;

class emplacement : public QLabel
{
   Q_OBJECT
private:
   MainWindow* mum;
public:
   explicit emplacement(MainWindow * maman,QWidget *parent = 0);
   int ligne;
   int col;
   joueur* leJoueur;
signals:

public slots:
    bool estVide();
    bool jouxte(emplacement* e);
    void setJoueur(joueur*);
    void vider();
    void jeuAdverse();
    void jeuAdverseMove();

private slots:
   void mousePressEvent(QMouseEvent *ev);
   void mouseReleaseEvent(QMouseEvent *ev);
   void mouseMoveEvent(QMouseEvent *ev);


};

#endif // EMPLACEMENT_H


