#include <stdio.h>

struct item {
	char itemName[50];
	int quantity;
	float price;
	float amount;
};

void readItem(struct item* structPtr){
	printf("Enter item name: ");
	scanf("%s", structPtr->itemName);

	printf("Enter quantity: ");
	scanf("%d", &structPtr->quantity);

	printf("Enter price: ");
	scanf("%f", &structPtr->price);

	structPtr->amount = 
		structPtr->quantity * structPtr->price;
}

void printItem(struct item* stPtr){
	puts("\nItem");
	puts("-------------");
	
	printf("Item Name: %s\n", stPtr->itemName);
	printf("Quantity: %d\n", stPtr->quantity);
	printf("Price: %.2f\n", stPtr->price);
	printf("Amount: %.2f\n", stPtr->amount);	
}

int main(){
	struct item item1 = {};
	struct item* iPtr = &item1;

	readItem(iPtr);
	printItem(iPtr);

	return 0;
}
