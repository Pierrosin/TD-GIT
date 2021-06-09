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

int compare_date(Date *date1, Date *date2)
{
    int res = 0;
    if (date1->y > date2->y)
    {
        res = 1;
    }
    else if (date1->y < date2->y)
    {
        res = -1;
    }
    else
    {
        if (date1->m > date2->m)
        {
            res = 1;
        }
        else if (date1->m < date2->m)
        {
            res = -1;
        }
        else
        {
            if (date1->d > date2->d)
            {
                res = 1;
            }
            else if (date1->d < date2->d)
            {
                res = -1;
            }
            else
            {
                res = 0;
            }
        }
    }
    return res;
}

Date *dupliquer_date(Date *date)
{
    Date *date2 = create_date(date->d, date->m, date->y);
    return date2;
}

Person *dupliquer_person(Person *person)
{
    Person *person2 = create_person(person->nom, person->prenom, person->date);
    return person2;
}

List *create_list(Date *date)
{
    List *list = malloc(sizeof(List));
    list->head = date;
    list->next = NULL;
    return list;
}

List *insert(Date *date, List *list)
{
    List *list2 = create_list(date);
    list2->next = list;
    return list2;
}

void print_list(List *list)
{
    Date *date = list->head;
    printf("[ %d/%d/%d ", date->d, date->m, date->y);
    list = list->next;
    while (list)
    {
        Date *date = list->head;
        printf(", %d/%d/%d ", date->d, date->m, date->y);
        list = list->next;
    }
    printf("]\n");
}