#include <iostream>
#include <utility>

struct Implicit {

};

struct Class {
    int *val;
public:
    explicit Class(int i): val(new int) { *val = i; }
    Class(const Class &other) {
        *this = other;
    }

    Class& operator =(const Class &rhs) {
        if (this != &rhs) { // Always check for self assignment
            delete this->val;
            this->val = new int;
            *this->val = *rhs.val;
        }
        return *this;
    }

};

int main(int argc, char *argv[]) {

    Class c1(1);
    Class c2(2);

    c2 = c1;
    *c1.val = 3;

    c2 = Class(5);

    Implicit i;
    Implicit i2(i);
    Implicit i3(std::move(i));

    i2 = i3; // Memory leak?

    i = std::move(i3);

    std::cout << *c2.val << std::endl;

    return 0;
}