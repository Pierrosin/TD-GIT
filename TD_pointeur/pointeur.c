#include <stdlib.h>

int longueur(char *s)
{
    int res = 0;
    while (*s++)
    {
        res++;
    }
    return res;
}

int *allouer_char(char c[])
{
    int n = longueur(c);
    int m = n * sizeof(char) + 1;
    int *s = (int *)malloc(m);
    for (int i = 0; i < n; i++)
    {
        *(s + i) = c[i];
    }
    *(s + n) = '\0';
    return (s);
}