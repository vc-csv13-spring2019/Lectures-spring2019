#include <iostream>
#include <math.h>

namespace math {
    const float PI = 3.14159;
}

float calculateCircumference(int &radius, int x) {
    return 2.0 * radius * math::PI;
}
namespace edu {
    namespace vcccd {
        namespace vc {
            namespace csv13 {
                class string {
                    ;
                };
            }
        }
    }
}

using std::cout;
using std::endl;
//using edu::vcccd::vc::csv13::string;

class Circle {
private:
    float radius;

public:
    float getRadius() { return radius; }
    void setRadius(float r) {
        if (r > 0) {
            radius = r;
        }
    }

    float calculateCircumference() {
        return 2 * radius * M_PI;
    }

    float calculateArea() {
        return radius * radius * M_PI;
    }
};

using namespace std;

int main(int argc, char *argv[]) {
    Circle c1;
    Circle c2;
    c1.setRadius(3.0);
    c2.setRadius(4.0);
    std::cout << c1.getRadius() << std::endl;
    std::cout << c2.getRadius() << std::endl;
}