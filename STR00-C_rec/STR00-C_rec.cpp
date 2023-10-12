#include <iostream>

// This code initializes several variables and prints them all out
// This follows the recommendation STR00-C because each variable has its correct type
int main()
{
    // Using char for character data from a limited character set
    char myChar = 'C';

    // Using wchar_t for wide characters (e.g., for natural-language character data)
    // We must set the specific locale for wide character support
    std::locale loc("en_US.UTF-8");
    // We must set the global locale
    std::locale::global(loc);
    std::wcout.imbue(loc);
    wchar_t myWideChar = L'Ω';

    // Using signed char for small integer values
    signed char mySignedChar = 65; // ASCII code for 'A'

    // Using unsigned char for small integer values
    unsigned char myUnsignedChar = 66; // ASCII code for 'B'

    // Using int for EOF or character data
    int myEOF = EOF; // Represents end-of-file

    // Display the characters
    std::cout << "Character (char): " << myChar << "\n";
    std::wcout << L"Wide Character (wchar_t): " << myWideChar << "\n";
    std::cout << "Signed Char (signed char): " << mySignedChar << "\n";
    std::cout << "Unsigned Char (unsigned char): " << myUnsignedChar << "\n";
    std::cout << "EOF (int): " << myEOF << "\n";

    return 0;
}
