#include "point.h"

Point::Point()
{

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
