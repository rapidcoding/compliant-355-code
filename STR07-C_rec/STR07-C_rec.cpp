#include <iostream>
#include <cstring>

void complain(const char *msg)
{
    errno_t err;
    static const char prefix[] = "Error: ";
    static const char suffix[] = "\n";
    char buf[BUFSIZ];

    err = strcpy_s(buf, sizeof(buf), prefix);
    if (err != 0)
    {
        /* Handle error */
        std::cerr << "Error in strcpy_s: " << err << std::endl;
        return;
    }

    err = strcat_s(buf, sizeof(buf), msg);
    if (err != 0)
    {
        /* Handle error */
        std::cerr << "Error in strcat_s: " << err << std::endl;
        return;
    }

    err = strcat_s(buf, sizeof(buf), suffix);
    if (err != 0)
    {
        /* Handle error */
        std::cerr << "Error in strcat_s: " << err << std::endl;
        return;
    }

    fputs(buf, stderr);
}

int main()
{
    const char *message = "Something went wrong!";
    complain(message);
    return 0;
}
