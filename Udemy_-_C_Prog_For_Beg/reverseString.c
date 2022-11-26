#include <stdio.h>
#include <string.h>

int main(){
	char str[50];
	char rstr[50];

	printf("\n---- String Reversal Program ----\n\n");

	printf("Enter string to be reversed: ");
	scanf("%s", str);

	int len = strlen(str);
	int index = 0;

	for(int i = (len - 1); i >= 0; --i){
		rstr[index] = str[i];
		index++;
	}

	printf("Reversed string: %s\n", rstr);

	printf("\n");

	return 0;
}
