#include "snake.h"

Snake::Snake(Point tail, int length, Direction direction)
{
    for (int i = 0; i < length; i++){
        Point p(tail);
        p.Move(i, direction);
        pList.push_back(p);
    }
}

