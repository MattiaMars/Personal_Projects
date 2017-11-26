#include "dama.h"

bool player_defeated(Player p){
    int i=0;
    bool out=true;
    for(i=0;i<PP;i++)
        if(p.x[i]>0 && p.y[i]>0)
            out=false;
    return out;
}
