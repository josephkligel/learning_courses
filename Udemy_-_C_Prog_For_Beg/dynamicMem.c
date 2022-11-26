#include <stdio.h>
#include <stdlib.h>

int main(){
	int limit;
	char* str = NULL;

	printf("Enter the limit size of string: ");
	scanf("%d", &limit);

	str = (char*) malloc(limit * sizeof(char));

	if(str != NULL){
		printf("Enter a string: ");
		scanf(" %s", str);;
		printf("\nYou put %s\n", str);
	}


	free(str);

	return 0;
}
