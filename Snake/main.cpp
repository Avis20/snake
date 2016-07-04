#include <QCoreApplication>
#include "point.h"
#include "horizontalline.h"

void gotoxy(int, int);
void Draw(int, int, char);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Point p1(1, 3, '*');
    p1.Draw();

    Point p2(4, 5, '#');
    p2.Draw();

    HorizontalLine p(5, 10, 3, '+');
    p.Draw();

    return a.exec();
}
