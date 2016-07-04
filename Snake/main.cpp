#include <QCoreApplication>
#include "point.h"
#include <list>

void gotoxy(int, int);
void Draw(int, int, char);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Point p1(1, 3, '*');
    p1.Draw();

    Point p2(4, 5, '#');
    p2.Draw();

    list<int> li;
    li.push_back(0);
    li.push_back(1);
    li.push_back(2);

    foreach (int i, li) {
        cout << i;
    }

    li.pop_front();

    list<Point> pList;
    pList.push_back(p1);
    pList.push_back(p2);

    return a.exec();
}
