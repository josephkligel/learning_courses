#include <stdio.h>

#define NUMYEARS  5
#define NUMMONTHS  12

int main(int argc, char* argv[]){

	int i, j;
	
	int YEARS[NUMYEARS] = {2010, 2011, 2012, 2013, 2014};

	char* MONTHS[NUMMONTHS] = {"JAN", "FEB", "MAR", "APR", "MAY", 
		"JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
	
	int rainData[NUMYEARS][NUMMONTHS] = {
		{23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34},
		{35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46},
		{47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58},
		{59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70},
		{71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82}
	};

	int sums[NUMYEARS] = {0};

	double yearlyAvgs[NUMYEARS] = {0};

	printf("----- Rainfall per Month (in Inches) -----\n\n");
	for(i = 0; i < NUMMONTHS; ++i){
		printf("\t%s", MONTHS[i]);
	}
	printf("\n");
	for(i = 0; i < NUMYEARS; ++i){
		printf("%d:", YEARS[i]);
		for(j = 0; j < NUMMONTHS; ++j){
			sums[i] += rainData[i][j];
			printf(" \t%d", rainData[i][j]);
		}
		printf("\n\n");
	}

	for(i = 0; i < NUMYEARS; ++i){
		yearlyAvgs[i] = (float) sums[i] / 12;
		//printf("Sum is %d\n", sums[i]);
		printf("The monthly average in %d is %.2f\n", YEARS[i], yearlyAvgs[i]);
	}
	printf("\n\n");	

	return 0;
}
