#include <stdio.h>
#include <stdlib.h>

char* result;
char* str1 = "Hello, World!";
char* str2 = "Joe Schmoe";

int get_length(char* str);
char* append(char* result, char* str1, char* str2);

int main(){
	printf("Length of %s is %d\n", str1, get_length(str1));
	printf("Length of %s is %d\n", str2, get_length(str2));
		
	result = append(result, str1, str2);
	printf("The concated string is %s\n", result);

	free(result);

	return 0;
}

int get_length(char* str){
	int count = 0;
	while(*str != '\0'){
		count++;
		str++;	
	}

	return count;
}

char* append(char* result, char *str1, char* str2){
	int length1 = get_length(str1);
	int length2 = get_length(str2);

	result = (char*) malloc((length1 + length2 + 1) * sizeof(char));

	int i = length1;
	
	for(int j = 0; str1[j] != '\0'; j++){
		result[j] = str1[j];
	}
	
	while(*str2 != '\0'){
		result[i] = *str2;
		str2++;
		i++;
	}
	
	result[i] = '\0';

	return result;
}
