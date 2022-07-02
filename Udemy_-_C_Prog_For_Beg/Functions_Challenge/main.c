#include <stdio.h>
#include "greatest_common_divisor.h"
#include "absolute_value.h"
#include "square_root.h"


int main(void){
	int greatest = gcd(4, 8);
	printf("The greatest common divisor is %d\n", greatest);

	float x = 10.0;
	printf("The absolute value of %.1f is %.1f\n", x, absoluteValue(x));

	int y = 81;
	printf("The square root of %d is %d\n", y, sr(y));
	
	return 0;
}
