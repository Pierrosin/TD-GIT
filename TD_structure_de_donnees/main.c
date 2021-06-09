#include <stdio.h>
#include "date.h"

void main()
{
    Date *date1 = create_date(12, 10, 2000);
    print_date(date1);
    Date *date2 = create_date(14, 8, 2000);
    print_date(date2);
    Person *pierrick = create_person("Dossin", "Pierrick", date2);
    print_person(pierrick);
    printf("%d %d\n", compare_date(date1, date2), compare_date(date1, date1));
}