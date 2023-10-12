#include <iostream>
#include <limits>

// This function adds two positive integers
// This follows rule INT32-C as we are checking if the addition will overflow with std::numeric_limits
int add_safely(int a, int b)
{
    // Check if the addition will overflow
    if ((b > 0 && a > std::numeric_limits<int>::max() - b) ||
        (b < 0 && a < std::numeric_limits<int>::min() - b))
    {
        // Report error by returning -1 if it overflows
        return -1;
    }
    else
    {
        // Preform the addition safely
        return a + b;
    }
}

int main()
{
    // Test that the function works
    int result = add_safely(100, 200);

    if (result != -1)
    {
        std::cout << "Result: " << result << std::endl;
    }
    else
    {
        std::cerr << "Error: Addition would overflow." << std::endl;
    }

    // Test that the catch works if we try to overflow addition
    int output = add_safely(2000000000, 2000000000);

    if (output != -1)
    {
        std::cout << "Result: " << output << std::endl;
    }
    else
    {
        std::cerr << "Error: Addition would overflow." << std::endl;
    }

    return 0;
}
