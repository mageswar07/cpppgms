#include <iostream>


class myclass {
    int a;
    public:
    void set_a(int x) {
        a = x;
    }
    int get_a(void) {
        return a;
    }
};

int main() {
myclass obj;
obj.set_a(10);
std::cout << "a = " << obj.get_a() << std::endl;
    return 0;
}