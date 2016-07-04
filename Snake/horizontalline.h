#ifndef HORIZONTALLINE_H
#define HORIZONTALLINE_H
#include "point.h"
#include <list>

class HorizontalLine
{
public:
    list<Point> pList;
    HorizontalLine(int, int, int, char);
    void Draw();
};

#endif // HORIZONTALLINE_H
