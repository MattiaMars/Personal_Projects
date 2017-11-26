#ifndef DAMA_H_INCLUDED
#define DAMA_H_INCLUDED

#include <stdbool.h>

#define NN 8
#define PP 12

//int NN;// numero di caselle per lato scacchiera
//int PP;// numero di pedine per giocatore

// TYPEDEF
typedef struct {
    int x[PP];// coordinata X
    int y[PP];// coordinata y sulla scacchiera
    bool isDama[PP];// vale true per le dame, false altrimenti
    char name;// nome inserito dal giocatore
    char sym;// carattere per la pedina
    int direction;// +1 o -1
    }Player;

// BOARD
void board_display(char* m);// show the matrix m
char *board_init(char *m);
char *board_update( Player p,char *m);// aggiorna la scacchiera con le pedine del giocatore
// PLAYER

Player player_init( Player p, char name,char symbol,int direction);// assign initial position to the players
char *display_player( Player p,char *m);// set the player positions on the matrix
bool player_defeated(Player p);// verifica se p è senza pedine in campo

bool is_square_free(int x,int y,Player P);
bool is_square_busy(int x,int y,Player P);
int pawn_index(Player P,int x,int y);
bool can_eat_more(int old_x, int old_y, int nPedina, Player PA, Player PB);
void get_possible_moves(Player PA, Player PB);

#endif // DAMA_H_INCLUDED
