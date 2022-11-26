#ifndef _SWAP_H
#define _SWAP_H

#include <string.h>
#include "../error_test.h"

int swap_strings(char* str1, char* str2){
	char temp[50];
	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);
	return 0;
}

#endif
