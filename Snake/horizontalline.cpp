#include "horizontalline.h"

HorizontalLine::HorizontalLine(int xLeft, int xRight, int y, char sym)
{
    for (int x = xLeft; x <= xRight; x++){
        Point p(x,y,sym);
        pList.push_back(p);
    }
}

void HorizontalLine::Draw(){
    for (auto p : pList){
        p.Draw();
    }
}

