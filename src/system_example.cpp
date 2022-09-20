#include <cstdlib>
#include <fstream>
#include <iostream>
 
int main()
{
	int ret = 0;
	ret = std::system("ls -l >test.txt"); // execute the UNIX command "ls -l >test.txt"
	std::cout << "ret = " << ret << std::endl << std::ifstream("test.txt").rdbuf();
}
