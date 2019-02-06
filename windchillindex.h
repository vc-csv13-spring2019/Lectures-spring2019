//
// Created by aknight on 1/31/19.
//

#ifndef LECTURE_WINDCHILLINDEX_H
#define LECTURE_WINDCHILLINDEX_H
#include "class.h"

const double PI = 3.14159;

CSV13_NAMESPACE_BEGIN
double computeWindChillIndex(double temp, double velocity);
CSV13_NAMESPACE_END

#endif //LECTURE_WINDCHILLINDEX_H
