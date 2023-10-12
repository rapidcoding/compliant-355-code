#include <string>
#include <iostream>

// Function to convert all spaces to underscores in a text such as an email
// This safely follows the rule STR52-CPP as we are using a range based loop which avoids explicit iterators or references to characters
void function(const std::string &input)
{
    std::string email;

    std::cout << input << " is the example email with spaces\n";

    for (char c : input)
    {
        email.push_back(c != ' ' ? c : '_');
    }

    std::cout << email << " is the example email after safely removing the spaces\n";
}

int main()
{
    std::string text = "example email test@gmail.com";
    function(text);
    return 0;
}
