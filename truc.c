//
// Created by Benjamin Rozière on 10/03/2017.
//

#include <stdio.h>
#include <memory.h>
#include "truc.h"
#include "pile.h"
#include "helper.h"

void recursive_truc(int i, int n, int *T)
{
    int j, temp;

    if (i == n)
    {
        for(j=0; j<n; j++)
        {
            printf("%d", T[j]);
        }
        puts("");
    }
    else
    {
        for(j = i; j < n; j++)
        {
            temp = T[i];
            T[i] = T[j];
            T[j] = temp;
            recursive_truc(i+1, n, T);
            temp = T[i];
            T[i] = T[j];
            T[j] = temp;
        }
    }
}

void truc(int n, int *T)
{
    Pile p = pile_initialiser(20);
    int i = 0;
    int j = 0;
    int * storeT;
    int temp;

    while (i < n)
    {
        for(j = i; j < n; j++)
        {
            temp = T[i];
            T[i] = T[j];
            T[j] = temp;
            malcx(storeT, sizeof(int) * n, "Impossible d'allouer le storeT")
            memcpy(storeT, T, sizeof(int)*n);
            pile_empiler(p, storeT);
            temp = T[i];
            T[i] = T[j];
            T[j] = temp;
        }
        T = pile_sommet(p);
       // pile_afficher_pile(p);
        i++;
    }

    while (!pile_est_vide(p))
    {
        T = (int *)pile_depiler(p);

        for (j = 0; j < n; ++j) {
            printf("%d", T[j]);
        }
        puts("");
    }

}