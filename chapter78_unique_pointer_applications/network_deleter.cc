#include <iostream>
#include <memory>

/// C Networking API ///
struct destination { /* ... */ };
struct connection { /* ... */ };

// Function to open a connection
connection connect(destination dest)
{
    std::cout << "Connecting\n";
    connection conn;
    return conn;
}

// Function to close a connection
void disconnect(connection conn)
{
    std::cout << "Disconnecting\n";
}

/// End of C Networking API ///

// Custom deleter to close the network connection
auto end_connection = [](connection *conn) {
    disconnect(*conn);
};

// C++ function
// Opens the connection,
// retrieves data over the connection
// then closes the connection
void get_data(const destination& dest)
{
    // Open the connection
    connection conn = connect(dest);

    // Create a unique_ptr
    // To manage the data connection
    // through a pointer to the object

    // unique_ptr with custom deleter
    std::unique_ptr<connection, decltype(end_connection)> 
          ptr(&conn, end_connection);

    // Fetch some data
    std::cout << "Getting data...\n";

    // ptr deletes conn???
}

int main()
{
    // Call the C++ function
    destination dest;
    get_data(dest);
}
