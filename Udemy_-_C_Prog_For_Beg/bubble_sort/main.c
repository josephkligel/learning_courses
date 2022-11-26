#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"
#include "../error_test.h"

int main(){
	int n;

	printf("How many strings to enter? ");
	scanf("%d", &n);

	char arr[25][50];

	for(int i = 0; i < n; ++i){
		printf("Enter string %d: ", i + 1);
		scanf("%s", arr[i]);
	}

	for(int i = 0; i < n; ++i){
		bubble_sort(arr, n);
	}

	for(int j = 0; j < n; ++j){
		printf("%s\n", arr[j]);
	}

	return 0;
}
