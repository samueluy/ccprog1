#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void delay(int number_of_seconds) //Delay function before clearing the screen
{ 
    // Converting time into milli_seconds 
    int milli_seconds = 1000 * number_of_seconds; 
  
    // Storing start time 
    clock_t start_time = clock(); 
  
    // looping till required time is not achieved 
    while (clock() < start_time + milli_seconds);
}

typedef struct //Structure for item prices
{
	int potato;
	int apple;
	int orange;
	int banana;
	int popcorn;
	int bottled_water;
	int cola;
} nPrice;

typedef struct //Structure for item prices
{
	int potato;
	int apple;
	int orange;
	int banana;
	int popcorn;
	int bottled_water;
	int cola;
} nQuantity;

void mainMenu() //Main menu screen (first screen of the program)
{
	printf("Hi, welcome to the Cash Register!\n\n");
	printf("Select an option below: \n\n");
	printf("[1] New Transaction\n");
	printf("[2] Generate Report\n");
	printf("[3] Exit the program\n\n");
	printf("Enter: ");
}

void currentCart(nPrice price, nQuantity quantity, int nTotal) //Current Cart screen. Price of item, Quantity, Total Cost
{
		
	system("CLS");
	printf("Current Cart: \n\n");
	printf("Potato\t\t%d  x%d\n", price.potato, quantity.potato);
	printf("Apple\t\t%d  x%d\n", price.apple, quantity.apple);
	printf("Orange\t\t%d  x%d\n", price.orange, quantity.orange);
	printf("Banana\t\t%d  x%d\n", price.banana, quantity.banana);
	printf("Popcorn\t\t%d x%d\n", price.popcorn, quantity.popcorn);
	printf("Bottled Water\t%d  x%d\n", price.bottled_water, quantity.bottled_water);
	printf("Cola\t\t%d  x%d\n", price.cola, quantity.cola);
	printf("----------------------\n");
	printf("Total:\t\t%d\n\n", nTotal);
	printf("[1] Purchase Items\n");
	printf("[2] Check Out\n");
	printf("[3] Cancel Transaction\n\n");
	printf("Enter: ");
}

void itemList()
{
	printf("[1] Potato\n");
	printf("[2] Apple\n");
	printf("[3] Orange\n");
	printf("[4] Banana\n");
	printf("[5] Popcorn\n");
	printf("[6] Bottled Water\n");
	printf("[7] Cola\n");
	printf("[8] Cancel\n\n");
}

void purchaseItems(int *itemSelect, int quantitySelect, nQuantity *quantity) //Purchasing Items screen
{
	scanf("%d", itemSelect);
	
	switch(*itemSelect)
	{
	case 1:	printf("Buying Potato!\n\n");
			printf("Enter quantity: ");
			scanf("%d", &quantitySelect);
			quantity->potato += quantitySelect;
			printf("%d Potato/s purchased!", quantity->potato);
			delay(1);
			break;
			
	case 2:	printf("Buying Apple!\n\n");
			printf("Enter quantity: ");
			scanf("%d", &quantitySelect);
			quantity->apple += quantitySelect;
			printf("%d Apple/s purchased!", quantity->apple);
			delay(1);
			break;
			
	case 3:	printf("Buying Orange!\n\n");
			printf("Enter quantity: ");
			scanf("%d", &quantitySelect);
			quantity->orange += quantitySelect;
			printf("%d Orange/s purchased!", quantity->orange);
			delay(1);
			break;
			
	case 4:	printf("Buying Banana!\n\n");
			printf("Enter quantity: ");
			scanf("%d", &quantitySelect);
			quantity->banana += quantitySelect;
			printf("%d Banana/s purchased!", quantity->banana);
			delay(1);
			break;
			
	case 5:	printf("Buying Popcorn!\n\n");
			printf("Enter quantity: ");
			scanf("%d", &quantitySelect);
			quantity->popcorn += quantitySelect;
			printf("%d Popcorn/s purchased!", quantity->popcorn);
			delay(1);
			break;
			
	case 6:	printf("Buying Bottled Water!\n\n");
			printf("Enter quantity: ");
			scanf("%d", &quantitySelect);
			quantity->bottled_water += quantitySelect;
			printf("%d Bottled Water/s purchased!", quantity->bottled_water);
			delay(1);
			break;
			
	case 7:	printf("Buying Cola!\n\n");
			printf("Enter quantity: ");
			scanf("%d", &quantitySelect);
			quantity->cola += quantitySelect;
			printf("%d Cola/s purchased!", quantity->cola);
			delay(1);
			break;
			
	case 8:	break;
	}
}

int total(nPrice price, nQuantity quantity)
{
	int total;
	return total = (price.potato * quantity.potato) + (price.apple * quantity.apple) + (price.orange * quantity.orange) + (price.banana * quantity.banana) + 
				   (price.popcorn * quantity.popcorn) + (price.bottled_water * quantity.bottled_water) + (price.cola * quantity.cola);
}

void checkOutScreen(nPrice price, nQuantity quantity, int nTotal)
{
	system("CLS");
	printf("Check Out\n\n");
	
	if(quantity.potato > 0)
		printf("Potato\t\t%d  x%d\n", price.potato, quantity.potato);
	if(quantity.apple > 0)
		printf("Apple\t\t%d  x%d\n", price.apple, quantity.apple);
	if(quantity.orange > 0)
		printf("Orange\t\t%d  x%d\n", price.orange, quantity.orange);
	if(quantity.banana > 0)
		printf("Banana\t\t%d  x%d\n", price.banana, quantity.banana);
	if(quantity.popcorn > 0)
		printf("Popcorn\t\t%d  x%d\n", price.popcorn, quantity.popcorn);
	if(quantity.bottled_water > 0)
		printf("Bottled Water\t\t%d x%d\n", price.bottled_water, quantity.bottled_water);
	if(quantity.cola > 0)
		printf("Cola\t\t%d  x%d\n", price.cola, quantity.cola);
		
	
	printf("------------------------------------------\n");
	printf("TOTAL\t\tP %d\n\n", nTotal);
}

void orScreen(int nTotal, int nPayment)
{
	printf("CASH TENDERED\tP %d\n", nPayment);
	printf("CHANGE\t\tP %d\n\n", nPayment - nTotal);
	printf("Thank you for shopping!\n\n");
}

int main()
{
	int menuSelect, cartSelect, itemSelect, quantitySelect, nPayment, returnInput;
	int nTotal = 0;
	nPrice price= {50, 35, 40, 25, 120, 20, 45};
	nQuantity quantity = {0, 0, 0, 0, 0, 0, 0};
	
	while (menuSelect != 3)
	{
	system("CLS");
	mainMenu();
	scanf("%d", &menuSelect);
	switch(menuSelect)
	{
		while(cartSelect != 3)
		{
		case 1: system("CLS");
				nTotal = total(price, quantity);
				currentCart(price, quantity, nTotal);
				scanf("%d", &cartSelect);
				switch(cartSelect)
				{
					case 1: while(itemSelect != 8)
							{
								system("CLS");
								itemList();
								printf("Enter item number: ");
								purchaseItems(&itemSelect, quantitySelect, &quantity);
							}//While
							break;
							
					case 2: checkOutScreen(price, quantity, nTotal);
							while(nPayment < nTotal) // Repeatedly ask customer if value is lower than nTotal
							{
							printf("Enter amount: ");
							scanf("%d", &nPayment);
							}
							checkOutScreen(price, quantity, nTotal);
							orScreen(nTotal, nPayment);
							while(returnInput != 1)
							{
							printf("[1] Return to the main menu: ");
							scanf("%d", &returnInput);
							}
							cartSelect = 3; //Cart select to 3 (breaks the loop) to return to main menu
							break;
					
					case 3: break;
				}//Switch
		}//While
						
		case 2: break;
	}//Switch
	}//While

	return 0;

}
