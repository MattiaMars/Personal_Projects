#include "dama.h"

char *board_update( Player p,char *m){

    int i=0;
    int x,y;
    for(i=0;i<PP;i++)
    {
        x=p.x[i];// get current x position
        y=p.y[i];// get current y position
        if(x>=0 && y>=0)
        {
            m[x*NN+y]=p.sym+ p.isDama[i]*('A'-'a');
        }
    }
    return m;
}
