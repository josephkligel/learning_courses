#include <stdio.h>

void markBoard(char mark, int player, char spaces[10], int choice){
	mark = (player == 1) ? 'X' : 'O';
	spaces[choice] = mark;
}
