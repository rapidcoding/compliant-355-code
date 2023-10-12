#include <stdexcept>
#include <string>
#include <iostream>

// Function that attempts to locate the character at index 2 of a string and changes that character to a 1
// This safely follows the rule STR53-CPP as we a using a try catch statement to ensure we are in the range of the string
void function(std::string input)
{
    std::string text = input;

    std::size_t index = 2;

    try
    {

        std::cout << text << " is the text before safely modifying the text\n";

        // Use std::string::at() for safe element access
        text.at(index) = '1'; // Modify the character at the specified index

        std::cout << text << " is the text after safely modifying the text\n";
    }
    catch (std::out_of_range &ex)
    {
        // Handle the out-of-range error here
        std::cerr << "Out-of-range error: " << ex.what() << "\n";
    }
}

int main()
{
    function("01234567");
    return 0;
}
