#include <iostream>
#include <cstddef>

// Define a function that takes in an array and it's size explicitly and sets all values in array to 0
// This follow the recommendation ARR01-C because we ask for the size of the array explicilty through a parameter as opposed to using the sizeof operator
void clear(int array[], size_t len)
{
    for (size_t i = 0; i < len; i++)
    {
        array[i] = 0;
    }
}

int main()
{
    const size_t arrSize = 12; // Specify the size of the array
    int dis[arrSize];          // Declare an integer array of the specified size

    // Call the clear function, passing the array and its size explicitly
    clear(dis, arrSize);

    // Print the elements of the array to verify they are cleared
    for (size_t i = 0; i < arrSize; i++)
    {
        std::cout << dis[i] << ' ';
    }

    std::cout << "\n";

    return 0;
}
