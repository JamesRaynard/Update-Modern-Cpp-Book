#ifndef DATE_H
#define DATE_H

#include <memory>

class Date_impl;

// The "interface" class
class Date {
  private:
    std::unique_ptr<Date_impl> pimpl;

  public:
    Date(int day, int month, int year);

    // We need to implement
    // these special member functions
    ~Date() noexcept;
    Date(Date&&) noexcept;
    Date& operator=(Date&&) noexcept;

    // The interface to Date
    void set_day(int day);
    void print();
};

#endif // DATE_H
