#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sort(char** words);

int main(){
	int length = 0;

	printf("Enter the number of words: ");
	scanf("%d", &length);

	char words[length][64];

	for(int i = 0; i < length; i++){
		scanf("%s", words[i]);
	}
	
	//sort(words);
	printf("\nReversed strings\n");
	for(int j = 0; j < length; ++j)
		printf("%s\n", words[j]);
	
	return 0;
}

/*
void sort(char** words){
	char* swap;

	int i = 0;

	while(*words != '\0'){
		if(strcmp(words[i][0], words[i+1][0]) > 0){
			swap = (char*) malloc(strlen(words[i]) + 1);
			strcpy(swap, words[i]);
			strcpy(words[i], words[i+1]);
			strcpy(words[i+1], swap);
		}
		++i;
	}

}
*/
