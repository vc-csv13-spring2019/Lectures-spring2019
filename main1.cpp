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
    float _radius;

public:
    Circle() {
        _radius = 1;
    }

    Circle(float radius) {
        if (radius > 0) {
            _radius = radius;
        }
    }

    float getRadius() { return _radius; }
//    void setRadius(float r) {
//    }

    float calculateCircumference() {
        return 2 * _radius * M_PI;
    }

    float calculateArea() {
        return _radius * _radius * M_PI;
    }
};

using namespace std;

int main(int argc, char *argv[]) {
    Circle c1;
    Circle c2(4.0);

    std::cout << c1.getRadius() << std::endl;
    std::cout << c2.getRadius() << std::endl;
}