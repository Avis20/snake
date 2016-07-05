#ifndef SNAKE_H
#define SNAKE_H
#include "figure.h"
#include "direction.h"
#include <list>

class Snake: public Figure
{
public:
    Direction direction;
    Snake(Point, int, Direction);
    void Move();
    Point GetNextPoint();
};

#endif // SNAKE_H
