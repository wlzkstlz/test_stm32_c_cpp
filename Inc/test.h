#ifndef __test_H
#define __test_H

#include <vector>
using namespace std;

class Point2f
{
public:
    Point2f();
    ~Point2f();
public:
    float x;
    float y;
    vector<float> datas_;
    float distance();
};

#endif
