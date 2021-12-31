#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
	int itemId;
	char name[50];
	char description[100];
} Item;

int main(void){

	Item *itemPtr = malloc(sizeof(Item));
	
	itemPtr->itemId = 1;
	strcpy(itemPtr->name, "Apple");
	strcpy(itemPtr->description, "A tasty fruit that grows on trees");

	printf("Item %d:\n", itemPtr->itemId);
	printf("\tName: %s\n", itemPtr->name);
	printf("\tDescription: %s\n", itemPtr->description);

	return 0;

}
