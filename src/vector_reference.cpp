#include <iostream>
#include <vector>

void my_func(std::vector<int> &local_vec) {
    std::cout << "local_vec[0] = " << local_vec[0] << std::endl;
}

int main() {
    std::vector<int> my_vec;

    my_vec.push_back(12);
    my_func(my_vec);

    return 0;
}