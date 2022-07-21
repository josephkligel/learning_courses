#include <stdio.h>

void getChoice(int player, int choice, char spaces[10]){
	if(player == 1){
		player++;
		printf("Player 1: ");
		scanf("%d", &choice);
		spaces[choice] = 'x';
	} else if(player == 2) {
		player--;
		printf("Player 2: ");
		scanf("%d", &choice);
		spaces[choice] = 'o';
	} 

}
