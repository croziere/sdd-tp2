//
// Created by Benjamin Rozière on 09/02/2017.
//

#ifndef TP2_HELPER_H
#define TP2_HELPER_H

#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

#define malcx(ptr, size, error_msg) if((ptr = (__typeof__(ptr))malloc(size)) == NULL) { perror(error_msg);exit(errno); }

#define clrscr printf("\033[H\033[2J")

#endif //TP2_HELPER_H
