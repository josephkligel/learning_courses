#include <stdio.h>
#include "error_test.h"

int main(){
	int c;
	int lines = 0;
	
	FILE* fh = fopen("sample.txt", "w");

	if(fh == NULL){
		perror("Error in opening file");
		return -1;
	}

	for(int i = 1; i <= 100; ++i){
		fprintf(fh, "%d\n", i);
	}

	fclose(fh);

	FILE* fr = fopen("sample.txt", "r");

	while( (c = fgetc(fr)) != EOF){
		if(c == '\n') ++lines;
	}


	printf("The number of lines in the file are %d\n", 
			lines);

	fclose(fr);
	
	return 0;
}
