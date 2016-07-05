#include "point.h"

Point::Point(int _x, int _y, char _sym)
{
    x = _x;
    y = _y;
    sym = _sym;
}

Point::Point(const Point &p){
    x = p.x;
    y = p.y;
    sym = p.sym;
}

void Point::Move(int offset, Direction direction){
    if (direction == RIGHT)
        x += offset;
    else if (direction == LEFT)
        x -= offset;
    else if (direction == UP)
        y += offset;
    else if (direction == DOWN)
        y -= offset;
}

void Point::Clear(){
    sym = ' ';
    Draw();
}

void Point::Draw(){
    gotoxy(x,y);
    cout << sym;
}

void Point::gotoxy(int x, int y){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
