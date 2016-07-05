#ifndef POINT_H
#define POINT_H
#include <iostream>
#include <windows.h>
#include "direction.h"

using namespace std;

class Point
{
public:
    int x;
    int y;
    char sym;
public:
    Point(int, int, char);
    Point(const Point &);
    void Draw();
    void gotoxy(int x, int y);
    void Move(int, Direction);
    void Clear();
};

#endif // POINT_H
