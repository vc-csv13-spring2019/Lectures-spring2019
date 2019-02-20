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

    std::string& getName() { return _name; }
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

Dog *makeDog(std::string name) {
    Dog *newDog = new Dog(name);
    if (name.length() <= 0) {
        newDog = nullptr;
    }

    return newDog;
}

int main(int argc, char *argv[]) {
    std::cout << "Before contstructing..." << std::endl;

    Dog *happy = nullptr;//new Dog("Happy");
    Dog rocky("Rocky");
                        // (*happy).getName()
    std::cout << "Name: " << happy->getName() << std::endl;

    //= makeDog("Happy");
    std::cout << "happy ptr: " << happy << std::endl;

    delete happy;

    happy = makeDog("Happy");
    std::cout << "happy ptr: " << happy << std::endl;

    std::cout << "After constructing..." << std::endl;

}