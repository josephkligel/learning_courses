#include <stdio.h>
#include <stdlib.h>

double perimeter(double h, double w){
    return 2 * (h + w);
}

int main(int argc, const char *argv[]){
    char *endPtr;

    double height = strtod(argv[1], endPtr);
    double width = strtod(argv[2], endPtr);
    // double height = atoi(argv[1]);
    // double width = atoi(argv[2]);
    double perimeter = 2 * (height + width);
    double area = height * width;


    printf("height: %.2f\n", height);
    printf("Width: %.2f\n", width);
    printf("Perimeter: %.2f\n", perimeter);
    printf("Area: %.2f\n", area);


    return 0;
}