#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverse_string(char* str){
	int length = strlen(str);

	char* reverse_str = malloc(length + 1);

	int j = 0;
	
	for(int i = (length - 1); i >= 0; --i){
		reverse_str[j] = str[i];
		++j;
	}

	return reverse_str;	
}

int main(){
	char str[64] = {};

	printf("Enter string: ");
	scanf("%s", str);

	char* rev_str = reverse_string(str);

	printf("The reverse of %s is %s\n", str, rev_str);	

	return 0;
}
