#include <stdio.h>
#include <stdlib.h>

#define FILENAME "sample.txt"

int main(){
	int counter = 0;
	int len;
	char ch;
	FILE* fp = fopen(FILENAME, "r");

	fseek(fp, 0, SEEK_END);
	len = ftell(fp);

	while( (++counter) < len ){
		ch = fgetc(fp);
		fputc(ch, stdout);
		fseek(fp, -counter, SEEK_END);
	}

	printf("\n");	

	fclose(fp);

	return 0;
}
