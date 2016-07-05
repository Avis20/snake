#ifndef FIGURE_H
#define FIGURE_H
#include "point.h"
#include <list>

class Figure
{
public:
    list<Point> pList;
    Figure();
    void Draw();
};

#endif // FIGURE_H
