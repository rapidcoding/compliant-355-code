#include <iostream>
#include <vector>
#include <algorithm>

// Function that iterates through a container and outputs each element
// This follows rule CTR55-CPP as it utilizes a for loop to ensure that the bounds of the container are not overflowed
// Utilizing the for loop also removes the need for the additive operator
void function(const std::vector<int> &c)
{
    const std::vector<int>::size_type maxSize = 20;
    for (auto i = c.begin(), e = i + std::min(maxSize, c.size()); i != e; ++i)
    {
        std::cout << *i << std::endl;
    }
}

int main()
{
    // Create container and input it into our function
    std::vector<int> myVector = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    function(myVector);
    return 0;
}