#include <stdio.h>
#include <string.h>
#include "reverse_string.h"
#include "error_test.h"

int main(void){
	char inputStr[50];
	char rstr[50];

	puts("\n---- String Reverse Program ----\n\n");

	printf("Enter string to be reversed: ");
	scanf("%s", inputStr);

	strcpy(rstr, reverseString(inputStr));
	printf("Reversed string: %s\n\n", rstr);

	return 0;
}
