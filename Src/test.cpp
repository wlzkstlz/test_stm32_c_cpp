#include "test.h"
#include <math.h>

Point2f::Point2f() {}
Point2f::~Point2f() {}
float Point2f::distance()
{
    return 0.3*sqrt(x * x + y * y);
}