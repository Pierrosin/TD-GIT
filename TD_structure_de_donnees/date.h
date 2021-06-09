#ifndef DATE_H
#define DATE_H

typedef struct _Date
{
    int d;
    int m;
    int y;
} Date;

Date *create_date(int day, int month, int year);

void print_date(Date *date);

typedef struct _Person
{
    char *nom;
    char *prenom;
    Date *date;
} Person;

Person *create_person(char *nom, char *prenom, Date *date);

void print_person(Person *person);

int compare_date(Date *date1, Date *date2);

#endif