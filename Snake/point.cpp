#include "point.h"

Point::Point(int _x, int _y, char _sym)
{
    x = _x;
    y = _y;
    sym = _sym;
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
