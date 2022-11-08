#include "date.h"

int main()
{
    Date date(16, 11, 2022);
    date.print();

    date.set_day(17);
    date.print();
}
