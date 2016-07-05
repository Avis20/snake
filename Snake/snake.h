#ifndef SNAKE_H
#define SNAKE_H
#include "figure.h"
#include "direction.h"
#include <list>

class Snake: public Figure
{
public:
    Snake(Point, int, Direction);
};

#endif // SNAKE_H
