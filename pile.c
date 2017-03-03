//
// Created by Benjamin Rozière on 03/03/2017.
//

#include "pile.h"
#include "helper.h"

Pile initialiser(int taille)
{
    Pile p = null;
    malcx(p, sizeof(pile_t), "Impossible d'allouer la pile")

    p->max = taille;
    p->size = 0;

    malcx(p->data, sizeof(int) * taille, "Impossible d'allouer la lc de la pile")

    return p;
}

void liberer(Pile p)
{
    free(p->data);
    free(p);
}

void empiler(Pile p, int val){
    p->data[p->size] = val;
    p->size++;
}
int depiler(Pile p)
{
    p->size--;
    return p->data[p->size];
}

int sommet(Pile p)
{
    return p->data[p->size - 1];
}
int estVide(Pile p)
{
    return (p->size <= 0);
}
int estPlein(Pile p)
{
    return (p->size >= p->max);
}

void afficherPile(Pile p)
{
    puts("-- Debug Pile --");
    printf("\tSize %d - Max : %d\n", p->size, p->max);
    printf("\tData : ");
    int i;
    for(i=0;i < p->size; i++)
    {
        printf("%d ", p->data[i]);
    }
    printf("<= Head\n");
}