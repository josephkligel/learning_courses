#include <stdio.h>
#include <stdlib.h>

void drawboard(char spaces[10]){
	system("clear");
	printf("\n\nTic Tac Toe\n\n");

	printf("Player 1 (X) Player 2 (O)\n\n\n");

	printf("   |   |   \n");
	printf(" %c | %c | %c \n", spaces[1], spaces[2], spaces[3]);
	
	printf("___|___|___\n");
	
	printf("   |   |   \n");
	printf(" %c | %c | %c \n", spaces[4], spaces[5], spaces[6]);
	
	printf("___|___|___\n");

	printf("   |   |   \n");
	printf(" %c | %c | %c \n", spaces[7], spaces[8], spaces[9]);

	printf("   |   |   \n\n");
}
