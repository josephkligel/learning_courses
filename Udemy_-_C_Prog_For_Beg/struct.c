#include <stdio.h>

struct employee {
	char name[50];
	char hireDate[25];
	float salary;
} emp;

int main(){

	printf("Enter employee name: ");
	scanf("%s", emp.name);

	printf("Enter hire date: ");
	scanf("%s", emp.hireDate);

	printf("Enter salary: ");
	scanf("%f", &(emp.salary) );

	printf("\nEmployee\n");
	printf("-------------------\n");
	puts(emp.name);
	printf("%s\n", emp.hireDate);
	printf("%.2f\n", emp.salary);

	return 0;
}
