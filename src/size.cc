#include <iostream>

int main() {
	std::cout << "All size output are in byte(s)" << std::endl;
	std::cout << "size of char = " << sizeof(char) << std::endl;
	std::cout << "size of int = " << sizeof(int) << std::endl;
	std::cout << "size of float = " << sizeof(float) << std::endl;
	std::cout << "size of double = " << sizeof(double) << std::endl;
	// std::cout << "size of void = " << sizeof(void) << std::endl;
	std::cout << "size of bool = " << sizeof(bool) << std::endl;
	std::cout << "size of wchar_t = " << sizeof(wchar_t) << std::endl;

	std::cout << "size of signed int = " << sizeof(signed int) << std::endl;
	std::cout << "size of unsigned int = " << sizeof(unsigned int) << std::endl;

	std::cout << "size of long = " << sizeof(long) << std::endl;
	std::cout << "size of long int = " << sizeof(long int) << std::endl;
	std::cout << "size of signed long int = " << sizeof(signed long int) << std::endl;
	std::cout << "size of unsigned long int = " << sizeof(unsigned long int) << std::endl;

	std::cout << "size of short = " << sizeof(short) << std::endl;
	std::cout << "size of short int = " << sizeof(short int) << std::endl;
	std::cout << "size of signed short int = " << sizeof(signed short int) << std::endl;
	std::cout << "size of unsigned short int = " << sizeof(unsigned short int) << std::endl;


	std::cout << "size of long double = " << sizeof(long double) << std::endl;
	// std::cout << "size of short double = " << sizeof(short double) << std::endl; // Cannot specify short with double
	return 0;
}
