#include "dama.h"

void board_display(char *m){
        printf("\n\n\n\n\n");
        printf("\n   1 2 3 4 5 6 7 8");
        printf("\n   ---------------");
        int i=0;
        int j=0;
        for (i=0;i<NN;i++)
        {
            printf("\n");

            for (j=-1;j<NN;j++)
            {
                if(j<0 )
                    printf("%c| ",('A')+i);
                else
                    printf("%c ", m[i*NN+j]);
            }
        }
            printf("\n");
    }
