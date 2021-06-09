#include "date.h"
#include <stdio.h>
#include <stdlib.h>

Date *create_date(int day, int month, int year)
{
    Date *res = malloc(sizeof(Date));
    res->d = day;
    res->m = month;
    res->y = year;
    return res;
}

void print_date(Date *date)
{
    printf("%d/%d/%d\n", date->d, date->m, date->y);
}

Person *create_person(char *nom, char *prenom, Date *date)
{
    Person *p = malloc(sizeof(Person));
    p->nom = nom;
    p->prenom = prenom;
    p->date = date;
    return p;
}

void print_person(Person *person)
{
    printf("Je m'appelle %s %s et je suis né le ", person->prenom, person->nom);
    print_date(person->date);
}