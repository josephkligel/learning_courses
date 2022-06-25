#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void main(){
	int p, i;

	int primes[50] = {0};
	int primesIndex = 2;

	primes[0] = 2;
	primes[1] = 3;

	bool isPrime;
	
	for(p = 5; p <= 100; p+=2){
		isPrime = true;

		for(i = 1; isPrime && p/primes[i] >= primes[i]; ++i)
			if(p % primes[i] == 0)
				isPrime = false;
			
		if(isPrime == true){
			primes[primesIndex] = p;
			++primesIndex;
		}
	}

	for(i = 0; i < primesIndex; ++i){
		printf("%d ", primes[i]);
	}

	printf("\n");
}
