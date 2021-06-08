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
#endif