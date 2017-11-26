#ifndef DAMA_H_INCLUDED
#define DAMA_H_INCLUDED

int NN;// numero di caselle per lato scacchiera
int PP;// numero di pedine per giocatore

// BOARD
void board_display(char* m);// show the matrix m
char *board_init(char *m);


#endif // DAMA_H_INCLUDED
