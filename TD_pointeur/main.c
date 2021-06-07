#include <stdio.h>
#include "pointeur.h"

void main()
{
    printf("longueur('abc')=%d\n", longueur("abc"));
    char c[3] = "abc";
    int *p = allouer_char(c);
    while (*p)
    {
        printf("%c", *p++);
        printf("\n");
    }
}