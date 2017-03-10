//
// Created by Benjamin Rozière on 03/03/2017.
//

#ifndef PROJECT_PILE_H
#define PROJECT_PILE_H

typedef int * pile_data_t;

typedef struct pile
{
    int             max;
    int             size;
    pile_data_t   * data;
}pile_t, * Pile;

Pile            pile_initialiser(int);
void            pile_liberer(Pile);

void            pile_empiler(Pile, pile_data_t);
pile_data_t     pile_depiler(Pile);

pile_data_t     pile_sommet(Pile);
int             pile_est_vide(Pile);
int             pile_est_pleine(Pile);

void            pile_afficher_pile(Pile p);

#endif //PROJECT_PILE_H
