//
// Created by Benjamin Rozière on 03/03/2017.
//

#ifndef PROJECT_PILE_H
#define PROJECT_PILE_H

typedef struct pile {
    int max;
    int size;
    int * data;
}pile_t, *Pile;

Pile pile_initialiser(int);
void pile_liberer(Pile);

void pile_empiler(Pile, int);
int pile_depiler(Pile);

int pile_sommet(Pile);
int pile_est_vide(Pile);
int pile_est_plein(Pile);

void pile_afficher_pile(Pile p);

#endif //PROJECT_PILE_H
