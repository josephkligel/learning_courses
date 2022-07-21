#include <stdio.h>

int gameStatus = 1; //0 means the game is over and the 1 means it is not over 

int checkForWin(char spaces[10]){
	if(spaces[1] == spaces[2] && spaces[2] == spaces[3])
		gameStatus = 0;
	else if(spaces[4] == spaces[5] && spaces[5] == spaces[6])
		gameStatus = 0;
	else if(spaces[7] == spaces[8] && spaces[8] == spaces[9])
		gameStatus = 0;
	else if(spaces[1] == spaces[4] && spaces[4] == spaces[7])
		gameStatus = 0;
	else if(spaces[2] == spaces[5] && spaces[5] == spaces[8])
		gameStatus = 0;
	else if(spaces[3] == spaces[6] && spaces[6] == spaces[9])
		gameStatus = 0;
	else if(spaces[3] == spaces[5] && spaces[5] == spaces[7])
		gameStatus = 0;
	else if(spaces[1] == spaces[5] && spaces[5] == spaces[9])
		gameStatus = 0;
	else
		gameStatus = 1;

	return gameStatus;
}

void presentWinMsg(int player){
	if(gameStatus == 0)
		printf("\n\nPlayer %d wins!\n\n", player);
	else
		printf("\n\nPlayer %d wins!\n\n", player);

}
