#include <iostream>
#include <string>

// Function that reads an input from the user and prints it back to them
// This safely follows rule STR50-CPP as it utilizes std::string input which automatically 
// adjusts to the size that the user inputs which ensures we don't overflow
std::string readInput()
{
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;
    return input;
}

int main()
{
    std::string output = readInput();
    std::cout << "Your input is: " << output << "\n";
    return 0;
}
