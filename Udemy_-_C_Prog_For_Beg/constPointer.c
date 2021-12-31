#include <stdio.h>


int main(void){
	int number = 2;
	// Const identifier must be initialized. The address it points to during its initializatiis permenant, causing the value of the pointer to be the value at the provided address.
	const int *ptr = &number;

	printf("%d\n", number);


	return 0;
}
