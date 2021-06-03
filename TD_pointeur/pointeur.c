int longueur(char *s)
{
    int res = 0;
    while (*s++)
    {
        res++;
    }
    return res;
}