#include <iostream>
#include <math.h>

#include "phonenumber.h"

using namespace std;

int main(int argc, char *argv[]) {
    PhoneNumber pn(1, 213, 965, 2070);
    std::cout << pn.getDialString() << std::endl;

    PhoneNumber pn2;

    PhoneNumber scotty(1, 213, 964, 1843);
    std::cout << scotty.getDialString() << std::endl;
}