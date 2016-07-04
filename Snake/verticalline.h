#ifndef VERTICALLINE_H
#define VERTICALLINE_H
#include "point.h"
#include <list>

class VerticalLine
{
public:
    list<Point> pList;
    VerticalLine(int, int, int, char);
    void Draw();
};

#endif // VERTICALLINE_H
