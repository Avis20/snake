#ifndef POINT_H
#define POINT_H
#include <iostream>
#include <windows.h>

using namespace std;

class Point
{
public:
    int x;
    int y;
    char sym;
public:
    Point();
    void Draw();
    void gotoxy(int x, int y);
};

#endif // POINT_H
