#include "snake.h"

Snake::Snake(Point tail, int length, Direction _direction)
{
    direction = _direction;
    for (int i = 0; i < length; i++){
        Point p(tail);
        p.Move(i, direction);
        pList.push_back(p);
    }
}

void Snake::Move(){
    Point tail = pList.front();
    pList.pop_front();
    Point head = GetNextPoint();
    pList.push_back(head);
    tail.Clear();
    head.Draw();
}

Point Snake::GetNextPoint(){
    Point head = pList.back();
    Point nextPoint(head);
    nextPoint.Move(1, direction);
    return nextPoint;
}

