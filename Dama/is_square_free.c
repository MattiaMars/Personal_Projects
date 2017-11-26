#include "dama.h"

bool is_square_free(int x,int y,Player P){// ritorna vero se la casella x,y è libera da P

    if(x<0||x>NN || y<0||y>NN)
        return false;
    int i;
    for(i=0;i<PP;i++)
        if(P.x[i]==x&&P.y[i]==y)
            return false;
    return true;
}
