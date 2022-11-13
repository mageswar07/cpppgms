#include <iostream>
#include <memory>

class X {
    private:
        int data_member;
    public:
        X(int i = 0):data_member{i} {
            std::cout <<"In constructor data_member = " << data_member << std::endl;
        }
        int member_function(int i) {
            int old_data_member = data_member;
            data_member = i;
            return old_data_member;
        }
};
X obj{7};

int user(X var, X* ptr) {
int x = var.member_function(7); // access using . (dot)
int y = ptr−>member_function(9); // access using -> (arrow)
//int z = var.data_member; // error : cannot access private member
return 0;
}

int main() {
    #if 0
    // X obj(4);
    int old1 = obj.member_function(5);
    std::cout << "old1 = " << old1 << std::endl;

    int old2 = obj.member_function(10);
    std::cout << "old2 = " << old2 << std::endl;
    #endif
    X *ptr_obj = new(X);
    int ret = user(obj, ptr_obj);

    return 0;
}