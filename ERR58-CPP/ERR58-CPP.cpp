#include <iostream>
#include <string>

// This ensures that we are following rule ERR58-CPP as we are creating a global string like this as opposed to std::string which will result no exceptions during startup or termination of the program
static const char *global = "Hello";

// Simple program that asks for your name and then greets you utilzing the gloabl string
int main()
{
    std::cout << "Enter your name: ";
    std::string name;
    std::cin >> name;
    std::cout << global << ", " << name << "!\n";
    return 0;
}
