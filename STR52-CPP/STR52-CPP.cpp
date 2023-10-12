#include <string>
#include <iostream>

// Function to convert all semi colons to space in a text such as an email
// This safely follows the rule STR52-CPP as we are using a range based loop which avoids explicit iterators or references to characters
void function(const std::string &input)
{
    std::string email;

    std::cout << input << " is the example email with semi colons\n";

    for (char c : input)
    {
        email.push_back(c != ';' ? c : ' ');
    }

    std::cout << email << " is the example email after safely removing the semi colons\n";
}

int main()
{
    std::string text = "example;email;with;semicolons";
    function(text);
    return 0;
}
