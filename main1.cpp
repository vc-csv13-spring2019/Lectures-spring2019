#include <iostream>
#include <utility>

std::pair<uint8_t *, double> findNearestNeighbor(uint8_t *target,
                                                 uint8_t **neighbors,
                                                 size_t neighborCount,
                                                 size_t neighborSize)  {
    double nearest = 10000000;
    for (int i = 0; i < neighborCount; i++) {
        double distance = 0;
        for (int j = 0; j < neighborSize; j++) {
            float m = target[i] - neighbors[i][j];
            distance += m * m;
        }
        nearest = std::min(nearest, distance);
    }
}

int main(int argc, char *argv[]) {
    int array[][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};

    uint8_t **neighbors = new uint8_t*[1000];
    for (int i = 0; i < 1000; i++) {
        neighbors[i] = new uint8_t[6];
        neighbors[i][0] = 'a';
    }

    for (int i = 0; i < 3; i++) {
        std::cout << static_cast<int *>(neighbors[i][0]) << std::endl;
    }


}