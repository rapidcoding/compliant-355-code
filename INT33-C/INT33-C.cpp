#include <iostream>
#include <limits>

// This function takes takes in two numbers, a numerator and a denominator, and divides them by each other and outputs the quotient and remainder
// This safely follows rule INT33-C as we are ensuring that dividing by zero does not occur
void divideAndRemainder(int numerator, int denominator)
{
    int quotient;
    int remainder;

    if (denominator == 0)
    {
        std::cerr << "Error: Divide by zero is not allowed."
                  << "\n";
    }
    else
    {
        quotient = numerator / denominator;
        remainder = numerator % denominator;

        std::cout << "Quotient: " << quotient << "\n";
        std::cout << "Remainder: " << remainder << "\n";
    }
}

int main()
{
    // Test that our function works
    divideAndRemainder(21, 5);

    // Test that our function catches the divide by zero case
    divideAndRemainder(10, 0);

    return 0;
}
