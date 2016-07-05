#include "figure.h"

Figure::Figure()
{

}

void Figure::Draw(){
    for (auto p : pList){
        p.Draw();
    }
}


