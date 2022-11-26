#ifndef _BUBBLE_SORT_H
#define _BUBBLE_SORT_H

#include "swap.h"
#include <string.h>
#include "../error_test.h"

void bubble_sort(char arr[25][50], int n){
	int end = n - 1;

	for(int i = 0; i < end; ++i){
		
		if(strcmp(arr[i], arr[i+1]) > 0){
			swap_strings(arr[i], arr[i+1]);
		}
	}
}

#endif
