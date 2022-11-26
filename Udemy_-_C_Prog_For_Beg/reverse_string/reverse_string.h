#ifndef _REVERSE_STRING_H
#define _REVERSE_STRING_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "error_test.h"

char* reverseString(const char* s){
	int len = strlen(s);
	int index = 0;
	int end = len - 1;

	char* rstr = (char*) malloc(len * sizeof(char));

	for(int i = end; i >= 0; --i){
		rstr[index] = s[i];
		++index;
	}

	return rstr;

}

#endif
