#include <stdio.h>
#include "date.h"

void main()
{
    Date *date1 = create_date(12, 10, 2010);
    print_date(date1);
}