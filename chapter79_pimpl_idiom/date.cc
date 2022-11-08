#include "date.h"
#include "date_impl.h"

// Constructor
Date::Date(int day, int month, int year)
{
    // Initialize the unique_ptr member
    pimpl = std::make_unique<Date_impl>(day,
                 month, year);
}

// We need to implement
// these special member functions
// The defaults will be sufficient
Date::~Date() noexcept = default;
Date::Date(Date&&) noexcept = default;
Date& Date::operator=(Date&&) noexcept = default;

// Implement the interface to Date
// These delegate to Date_impl's member functions
void Date::set_day(int day)
{
    pimpl->set_day(day);
}

void Date::print() {
    pimpl->print();
}
