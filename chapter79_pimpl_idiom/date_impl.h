#ifndef DATE_IMPL_H
#define DATE_IMPL_H

// The implementation class
class Date_impl {
  private:
    int day;
    int month;
    int year;

  public:
    Date_impl(int day, int month, int year);
    void set_day(int day);
    void print();
};

#endif // DATE_IMPL_H
