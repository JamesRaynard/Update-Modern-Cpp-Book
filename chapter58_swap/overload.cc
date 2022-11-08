#include <iostream>

class BufferManager {
  private:
    // Class data members
    int size;
    char *buffer;
  public:
    // Special member functions
    BufferManager(int size) : size(size),
                   buffer(new char[size]) {}
    BufferManager(const BufferManager& arg)
    {
        size = arg.size;
        buffer = new char[size];
        for (int i = 0; i < size; ++i)
            buffer[i] = arg.buffer[i];
    }
    BufferManager& operator = (const BufferManager& arg)
    {
        if (this != &arg) {
            delete [] buffer;
            size = arg.size;
            buffer = new char[size];
            for (int i = 0; i < size; ++i)
                buffer[i] = arg.buffer[i];
        }
        return *this;
    }

    ~BufferManager() { delete [] buffer; }

    // Declare overloaded swap()
    // as a friend of this class
    friend void swap(BufferManager& l,
                     BufferManager& r) noexcept;

    // Function to display class members
    void print()
    {
        std::cout << "BufferManager with size ";
        std::cout << size;
        std::cout << ", buffer address is: ";
        std::cout << static_cast<void *>(buffer);
    }
};

// Definition of friend function
inline void swap(BufferManager& l,
                 BufferManager& r) noexcept
{
    // Important!
    using std::swap;

    swap(l.size, r.size);
    swap(l.buffer, r.buffer);
}

int main()
{
    // Create two BufferManager objects
    // and swap their date
    BufferManager a(5), b(6);
    std::cout << "Before swapping\n";
    std::cout << "a is ";
    a.print();
    std::cout << "\nb is ";
    b.print();
    std::cout << "\n";

    swap(a, b);

    std::cout << "After swapping\n";
    std::cout << "a is ";
    a.print();
    std::cout << "\nb is ";
    b.print();
    std::cout << "\n";
}
