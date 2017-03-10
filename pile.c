
#include "pile.h"
#include "helper.h"

Pile pile_initialiser(int taille)
{
    Pile p = NULL;
    malcx(p, sizeof(pile_t), "Impossible d'allouer la pile")

    p->max = taille;
    p->size = 0;

    malcx(p->data, sizeof(int) * taille, "Impossible d'allouer la lc de la pile")

    return p;
}

void pile_liberer(Pile p)
{
    free(p->data);
    free(p);
}

void pile_empiler(Pile p, int val){
    p->data[p->size] = val;
    p->size++;
}
int pile_depiler(Pile p)
{
    p->size--;
    return p->data[p->size];
}

int pile_sommet(Pile p)
{
    return p->data[p->size - 1];
}
int pile_est_vide(Pile p)
{
    return (p->size <= 0);
}
int pile_est_plein(Pile p)
{
    return (p->size >= p->max);
}

void pile_afficher_pile(Pile p)
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