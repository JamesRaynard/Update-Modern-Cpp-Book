#include "date_impl.h"
#include <iostream>

Date_impl::Date_impl(int day, int month, int year)
           : day(day), month(month), year(year) {}

void Date_impl::set_day(int d)
{
    day = d;
}

void Date_impl::print()
{
    std::cout << day << '/' << month
              << '/' << year << '\n';
}
