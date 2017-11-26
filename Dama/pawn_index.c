#include "dama.h"

int pawn_index(Player P,int x,int y){
    // ritorna l'indice della pedina del Player P
    // che si trova in posizione x,y
    int i;
    for(i=0;i<PP;i++)
        if(P.x[i]==x && P.y[i]==y)
            return i;
    return -1;
}
