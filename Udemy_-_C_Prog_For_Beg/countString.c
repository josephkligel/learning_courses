#include <stdio.h>

int get_length(const char* str){
	int counter = 0;
	
	while(*str != '\0'){
		++counter;
		++str;
	}

	return counter;
}

int main(){

	const char* str = "Something";

	int len = get_length(str);

	printf("The length of string is %d\n", len);

	return 0;
}
