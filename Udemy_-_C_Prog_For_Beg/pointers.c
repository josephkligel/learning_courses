#include <stdio.h>

int main(){
	int* ptr = NULL;
	int num = 27;

	ptr = &num;

	printf("The address of pointer is %p\n", &ptr);
	printf("The address of value pointed to is %p\n", ptr);
	printf("The address of variable num is %p\n", &num);
	printf("The value of the pointer is %d\n", *ptr);

	return 0;
}
