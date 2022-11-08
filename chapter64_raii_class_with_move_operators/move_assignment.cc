#include <iostream>

class String {
  private:
    int size;
    char *data;
  public:
    // Constructor
    String(int size) : size(size),
                       data(new char[size]) {}

    // Copy constructor
    String(const String& other) : size(other.size)
    {
        std::cout << "Copy constructor\n";
        // Allocate the memory for the data
        data = new char[size];

        // Populate the data
        for (int i = 0; i < size; ++i)
            data[i] = other.data[i];
    }

    // Copy assignment operator
    String& operator =(const String& other)
    {
        std::cout << "Copy assignment operator\n";

        // Check for self-assignment
        if (&other != this) {
            std::cout << "Reallocating memory\n";

            // Release the original memory
            delete [] data;

            // Allocate the memory for the data
            data = new char[other.size];

            // Assign to the size member
            size = other.size;

            // Populate the data
            for (int i = 0; i < size; ++i)
                data[i] = other.data[i];
        }

       // Return the assigned-to object
       return *this;
    }

    // Move constructor
    String(String&& other) noexcept
    {
        std::cout << "Move constructor\n";
        data = other.data;
        other.data = nullptr;
        size = other.size;
        other.size = 0;
    }    

    // Move assignment operator
    String& operator =(String&& other) noexcept
    {
        std::cout << "Move assignment operator\n";

        // Check for self-assignment
        if (&other != this) {
            std::cout << "Reallocating memory\n";

            // Release the allocated memory
            delete [] data;

            // Move other's members
            data = other.data;
            other.data = nullptr;
            size = other.size;
            other.size = 0;
        }

       // Return the assigned-to object
       return *this;
    }

    // Destructor
    ~String()
    {
        std::cout << "Destructor: ";
        print();

        // Release the allocated memory
        delete [] data;
    }

    void print()
    {
        std::cout << "size = " << size << ", data = ";
        std::cout << static_cast<void *>(data) << '\n';
    }
};

int main()
{
    String a(5);
    std::cout << "a: ";
    a.print();

    {
        String b(6);
        std::cout << "b: ";
        b.print();

        std::cout << "Copy assignment of b from a\n";
        b = a;
        std::cout << "a: ";
        a.print();
        std::cout << "b: ";
        b.print();

        std::cout << "Copy construction of c from b\n";
        String c(b);
        std::cout << "b: ";
        b.print();
        std::cout << "c: ";
        c.print();

        std::cout << "Move assignment of c from a\n";
        c = std::move(a);
        std::cout << "a: ";
        a.print();
        std::cout << "c: ";
        c.print();
    }
}
