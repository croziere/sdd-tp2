//
// Created by Benjamin Rozière on 03/03/2017.
//

#ifndef PROJECT_PILE_H
#define PROJECT_PILE_H

typedef struct pile {
    int max;
    int size;
    void ** data;
}pile_t, *Pile;

Pile initialiser(int);
void liberer(Pile, void (*)(void *));

void empiler(Pile, void *);
void * depiler(Pile);

void * sommet(Pile);
int estVide(Pile);
int estPlein(Pile);

#endif //PROJECT_PILE_H
