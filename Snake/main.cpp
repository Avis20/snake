#include <QCoreApplication>
#include "point.h"
#include "horizontalline.h"
#include "verticalline.h"
#include "snake.h"
#include "direction.h"
#include <windows.h>
#include <conio.h>

void setWindow();

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    setWindow();

    //Рисуем рамочку
    HorizontalLine upLine(0, 78, 0, '+');
    HorizontalLine downLine(0, 78, 24, '+');
    VerticalLine leftLine(0, 24, 0, '+');
    VerticalLine rightLine(0, 24, 78, '+');
    upLine.Draw();
    downLine.Draw();
    leftLine.Draw();
    rightLine.Draw();

    Point p1(4, 5, '*');
    p1.Draw();
    Snake snake(p1, 4, RIGHT);
    snake.Draw();
    snake.Move();

    return a.exec();
}

void setWindow(){
    HANDLE hWnd = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD bufferSize = {80, 25};
    SetConsoleScreenBufferSize(hWnd, bufferSize);
}
