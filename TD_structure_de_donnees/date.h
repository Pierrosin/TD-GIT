#ifndef DATE_H
#define DATE_H
Date *create_date(int day, int month, int year);
void print_date(Date *date);
typedef struct _Date
{
    int d;
    int m;
    int y;
} Date;
#endif