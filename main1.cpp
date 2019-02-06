#include <iostream>
#include <math.h>

#include "windchillindex.h"

using namespace std;

using edu::vcccd::vc::csv13::computeWindChillIndex;

int main(int argc, char *argv[]) {
    cout << computeWindChillIndex(5, 1);
}