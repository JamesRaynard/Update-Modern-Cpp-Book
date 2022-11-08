#include <iostream>

class Bignum {
    const char *data;
  public:
    Bignum(const char *str) : data(str)
    {
        std::cout << "Creating Bignum with value "
                  << str << '\n';
    }
    void print() const
    {
        std::cout << data << '\n';
    }
};

Bignum operator "" _Big(const char *str)
{
    return Bignum(str);
}

void print_bignum(const Bignum& bignum)
{
    bignum.print();
}

int main()
{
    std::cout << "Printing a Bignum: ";
    print_bignum(12345678901234567890_Big);
}
