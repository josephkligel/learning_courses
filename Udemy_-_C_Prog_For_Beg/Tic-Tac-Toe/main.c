#include <stdio.h>
#include "drawboard.h"
#include "checkForWin.h"
#include "markBoard.h"

int player, choice;
char spaces[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
char mark;
int gameStatus;

int main(){

	player = 1;
	choice = 1;

	do {
		player = (player % 2) ? 1 : 2;

		drawboard(spaces);

		printf("Player %d: ", player);
		scanf("%d", &choice);
		markBoard(mark, player, spaces, choice);

		gameStatus = checkForWin(spaces);

		if(!gameStatus) drawboard(spaces);

		presentWinMsg(player);

		++player;
	} while(gameStatus);

	return 0;
}
