#include <QCoreApplication>
#include <iostream>
#include <windows.h>

using namespace std;

void gotoxy(int, int);
void Draw(int, int, char);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int x1 = 1, y1 = 3;
    char sym1 = '*';

    Draw(x1,y1,sym1);

    int x2 = 4, y2 = 5;
    char sym2 = '#';

    Draw(x2,y2,sym2);

    return a.exec();
}

void Draw(int x, int y, char sym){
    gotoxy(x,y);
    cout << sym;
}

void gotoxy(int x, int y){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
