#include "dama.h"

char *board_init(char *m){
        int i=0;
        int j=0;

        for (i=0;i<NN;i++)
            for (j=0;j<NN;j++)
                m[i*NN+j]='-';
        return m;
}
