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

Pile initialiser(int);
void liberer(Pile);

void empiler(Pile, int);
int depiler(Pile);

int sommet(Pile);
int estVide(Pile);
int estPlein(Pile);

#endif //PROJECT_PILE_H
