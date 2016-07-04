#include "verticalline.h"

VerticalLine::VerticalLine(int yUp, int yDown, int x, char sym)
{
    for (int y = yUp; y <= yDown; y++){
        Point p(x,y,sym);
        pList.push_back(p);
    }
}

void VerticalLine::Draw(){
    for (auto p : pList){
        p.Draw();
    }
}


