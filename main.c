//
// Created by Benjamin Rozière on 03/03/2017.
//

#include <stdio.h>
#include "main.h"
#include "pile.h"
#include "truc.h"

int main(int argc, char ** argv)
{
    int T[3] = {1, 2, 3};
    recursive_truc(0, 3, T);
    puts("Non recursif");
    truc(3, T);

}