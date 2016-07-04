#include <QCoreApplication>
#include "point.h"

void gotoxy(int, int);
void Draw(int, int, char);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Point p1;
    p1.x = 1;
    p1.y = 3;
    p1.sym = '*';
    p1.Draw();


    Point p2;
    p2.x = 4;
    p2.y = 5;
    p2.sym = '#';
    p2.Draw();

    return a.exec();
}
