#include <iostream>
#include <utility>

int main(int argc, char *argv[]) {
    int identity[][3] = {{1,0,0}, {0,1,0}, {0,0,1}};
    int **identityPtr = new int *[3];
    identityPtr[0] = new int[3];
    identityPtr[1] = new int[3];
    identityPtr[2] = new int[3];
std::cout << identityPtr[1][1];

    return 0;
}