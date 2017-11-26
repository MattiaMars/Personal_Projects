#include "dama.h"


Player player_init( Player p, char name,char symbol,int direction){

    int i;
    int j=0;
    int offset;
    p.sym=symbol;
    p.name=name;
    p.direction=direction;
    if(p.direction==1)
        offset=0;
    else
        offset=NN-3;

    for(i=0;i<PP;i++){
        p.isDama[i]=0;// nessuna dama all'inizio della partita
        if(i>=NN/2*(j+1))
            j++;
        if(direction==1)
            p.x[i]=i*2-j*NN+j%2;
        else
            p.x[i]=i*2-j*NN+(j+1)%2;
        p.y[i]=j+offset;
    }
    return p;
};
