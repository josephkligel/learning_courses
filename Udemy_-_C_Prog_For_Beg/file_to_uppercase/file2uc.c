#include <stdio.h>
#include <ctype.h>

#define FILENAME "sample.txt"

int checkFile(FILE* f){
	if(f == NULL)
		return 1;
}

void readFile(FILE* f, char* ch){
	char c;
	printf("\nPrinting file...\n");
	puts("----------------");
	while( (c = fgetc(f)) != EOF){
		printf("%c", c);
	}
}

void writeFile(FILE* f, char ch){
	putc(ch, f);
}

int main(){
	char in;
	FILE* fr = fopen(FILENAME, "r");
	FILE* fw = fopen("upper.txt", "w+");

	checkFile(fr);

	while( (in = fgetc(fr)) != EOF){
		if(islower(in))
			writeFile(fw, in-32);
		else
			writeFile(fw, in);
	}

	fclose(fr);
	fclose(fw);

	remove("sample.txt");
	rename("upper.txt", "sample.txt");
	
	fr = fopen(FILENAME, "r");
	readFile(fr, &in);

	return 0;
}
