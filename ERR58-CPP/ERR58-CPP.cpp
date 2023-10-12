#include <iostream>
#include <stdexcept>

struct S
{
    S() noexcept(false)
    {
        // Simulate an exception during construction
        throw std::runtime_error("Exception during construction");
    }
};

// Declare a global object
S globalObject;

int main()
try
{
    std::cout << "Main function started" << std::endl;

    std::cout << "Main function continues" << std::endl;

    return 0;
}
catch (const std::exception &ex)
{
    std::cerr << "Exception caught during initialization: " << ex.what() << std::endl;
    return 1; // Handle the error gracefully or terminate the application as needed
}
