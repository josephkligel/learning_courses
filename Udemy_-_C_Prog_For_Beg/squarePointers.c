#include <stdio.h>

int square(int* numPtr){
	return *numPtr * *numPtr;
}

int main(){

	int num = 10;
	
	int* ptr = &num;
	
	printf("The square of %d is %d\n", *ptr, square(ptr));
}
