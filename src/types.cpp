#include <iostream>

int main() {
    unsigned char ch;
    ch = 97;
    std::cout << "ch = " << ch << std::endl;

    ch = 254;
    std::cout << "ch = " << ch << std::endl;

    ch = 255;
    std::cout << "ch = " << ch << std::endl;

    ch = (255+97);
    std::cout << "ch = " << ch << std::endl;

    ch = 0;
    std::cout << " ch = " << ~ch << std::endl;
    return 0;
}