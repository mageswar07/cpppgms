#include <iostream>

int main()
{
    int x = 1;
    std::cout << "+x = " << +x << std::endl;
    int y = +x;
    std::cout << "y = " << y << std::endl;
    return 0;
}