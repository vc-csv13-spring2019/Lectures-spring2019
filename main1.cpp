#include <iostream>
#include <math.h>

#include "phonenumber.h"

using namespace std;

class Dog{
private:
    // This data member stores the name of the Dog instance
    std::string _name;

public:
    // This is a constructor that names a dog instance. We are
    // initializing the name in the initialization list
    Dog(std::string name) : _name(name) {
        std::cout << "Inside the constructor" << std::endl;
    }

    ~Dog() {
        std::cout << "Inside the destructor" << std::endl;

    }
};

struct Floobits {
public:
    // The default constructor must use the initialization list
    // to call the necessary constructor for its dog instances.
    Floobits() : _clifford("Clifford"), _jeffrey("Jeffrey") {
    }

private:
    Dog _clifford;
    Dog _jeffrey;

};

int *bar() {
    int x = 10;
    return &x;
}

int main(int argc, char *argv[]) {
    int x = 10;
    int *xptr = &x;
    int **xptrptr = &xptr;

    std::cout << **xptrptr << std::endl;

    char *str = "hello";
    for(char *c_str = str; *c_str != 0; *(c_str++) += 2) {
        std::cout << (int)*c_str << std::endl;
    }

    std::cout << str << std::endl;
}