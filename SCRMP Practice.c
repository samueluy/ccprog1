#include <stdio.h>

typedef struct
{
	int potato;
	int apple;
	int orange;
	int banana;
	int popcorn;
	int bottled_water;
	int cola;
} nPrice;

typedef struct
{
	int potato;
	int apple;
	int orange;
	int banana;
	int popcorn;
	int bottled_water;
	int cola;
} nQuantity;

void priceList(nPrice price)
{
	printf("\nItem\t\t\tPrice\n");
	printf("Potato\t\t\t%d\n", price.potato);
	printf("Apple\t\t\t%d\n", price.apple);
	printf("Orange\t\t\t%d\n", price.orange);
	printf("Banana\t\t\t%d\n", price.banana);
	printf("Popcorn\t\t\t%d\n", price.popcorn);
	printf("Bottled Water\t\t%d\n", price.bottled_water);
	printf("Cola\t\t\t%d\n", price.cola);
}

void purchaseItem(nPrice price, nQuantity *quantity, int buySelect, int *amount)
{
	fflush(stdin);
	switch(buySelect)
	{
		case 1: printf("Buying Potato!\n\n");
				printf("Enter quantity: ");
				scanf("%d", &amount);
				printf("%d Potato/s purchased!", amount);
				quantity->potato = quantity->potato + *amount;
				break;
				
		case 2: printf("Buying Apple!\n\n");
				printf("Enter quantity: ");
				scanf("%d", &amount);
				printf("%d Apple/s purchased!", amount);
				quantity->apple = quantity->apple + *amount;
				break;
				
		case 3: printf("Buying Orange!\n\n");
				printf("Enter quantity: ");
				scanf("%d", &amount);
				printf("%d Orange/s purchased!", amount);
				quantity->orange = quantity->orange + *amount;
				break;
				
		case 4: printf("Buying Banana!\n\n");
				printf("Enter quantity: ");
				scanf("%d", &amount);
				printf("%d Banana/s purchased!", amount);
				quantity->banana = quantity->banana + *amount;
				break;
				
		case 5: printf("Buying Popcorn/s!\n\n");
				printf("Enter quantity: ");
				scanf("%d", &amount);
				printf("%d Popcorn/s purchased!", amount);
				quantity->popcorn = quantity->popcorn + *amount;
				break;
				
		case 6: printf("Buying Bobbtled Water!\n\n");
				printf("Enter quantity: ");
				scanf("%d", &amount);
				printf("%d Bottled Water/s purchased!", amount);
				quantity->bottled_water = quantity->bottled_water + *amount;
				break;
				
		case 7: printf("Buying Cola!\n\n");
				printf("Enter quantity: ");
				scanf("%d", &amount);
				printf("%d Cola/s purchased!", amount);
				quantity->cola = quantity->cola + *amount;
				break;
				
		case 8: break;
	}
}


void selectScreen(int *buySelect)
{
	printf("\n[1] Potato\n");
	printf("[2] Apple\n");
	printf("[3] Orange\n");
	printf("[4] Banana\n");
	printf("[5] Popcorn\n");
	printf("[6] Bottled Water\n");
	printf("[7] Cola\n");
	printf("[8] Cancel\n\n");
	printf("Purchase which item: ");
	scanf("%d", buySelect);
}

void mainScreen()
{
	printf("Select an option below:\n\n");
	printf("[1] New Transaction\n");
	printf("[2] Generate Report\n");
	printf("[3] Exit the program\n\n");
}

int main()
{
	int mainSelect, amount;
	int buySelect = 0;
	nPrice price = {50, 35, 40, 25, 120, 20, 45};
	nQuantity quantity = {0, 0, 0, 0, 0, 0, 0};
	mainScreen();
	printf("Enter: ");
	scanf("%d", &mainSelect);
	
	switch (mainSelect)
	{
		case 1:	priceList(price);
				buySelect = 0;
				selectScreen(&buySelect);
				purchaseItem(price, &quantity, buySelect, &amount);
				break;
		case 2: break;
		case 3: break;
	}
	return 0;
}
