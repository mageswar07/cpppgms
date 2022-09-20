#include <iostream>
#include <cstdlib>

int main() {
	std::cout << "Hello From CPP!" << std::endl;
	int ret = std::system("/home/magesh/mypgm/test.sh");
	//int ret = std::system("./test.sh");
	std::cout << "Script returns : " << ret << std::endl;
	return 0;
}
