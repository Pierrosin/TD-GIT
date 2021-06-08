#include "date.h"

Date *create_date(int day, int month, int year)
{
    Date *res = maaloc(sizeof(Date));
    res->d = day;
    res->m = month;
    res->y = year;
    return res;
}

void print_date(Date *date)
{
    printf("%d/%d/%d\n", date->d, date->m, date->y);
}