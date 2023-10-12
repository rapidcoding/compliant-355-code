#include <iostream>
#include <cstring>

// Function that sanitizes string data by whitelisting valid characters
// This follows the recommendation STR02-C as we are santizing the data that we are passing through
void sanitizeData(char *input)
{
    static const char ok_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890_-.@";
    char *cp = input; // Cursor into the string

    while (*cp)
    {
        if (strchr(ok_chars, *cp) == nullptr)
        {
            // Replace invalid characters with an underscore
            *cp = '_';
        }
        cp++;
    }
}

int main()
{
    // Data received from an untrusted source
    char user_data[] = "Bad char 1:} Bad char 2:{";

    // Sanitize the data
    sanitizeData(user_data);

    // Display the sanitized data
    std::cout << "Sanitized Data: " << user_data << std::endl;

    return 0;
}
