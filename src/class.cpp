#include <iostream>


class myclass {
    int a=1;
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
    std::cout << "a = " << obj.get_a() << std::endl;
    obj.set_a(10);
    std::cout << "a = " << obj.get_a() << std::endl;
    obj.set_a(11);
    std::cout << "a = " << obj.get_a() << std::endl;

    return 0;
}