#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int day;
	int gil;
	int debt;
} nCurrent;

typedef struct /*On hand values*/
{
	int pd;
	int ee;
	int pi;
	int gm;
	int sc;
	int ad;
	int dm;
	int tr;
} nOnHand;

typedef struct /*Price of items*/
{
	int pd;
	int ee;
	int pi;
	int gm;
	int sc;
	int ad;
	int dm;
	int tr;
} nPrice;

void randomizePrice(nPrice *price) /*Randomize item prices based on its limits + srand(time(NULL))*/
{
	srand(time(NULL));
	
	price->pd = (rand() % (1200 - 501)) + 500;
	price->ee = (rand() % (2100 - 1501)) + 1500;
	price->pi = (rand() % (7000 - 5001)) + 5000;
	price->gm = (rand() % (5500 - 3501)) + 3500;
	price->sc = (rand() % (12000 - 8001)) + 8000;
	price->ad = (rand() % (30000 - 15001)) + 15000;
	price->dm = (rand() % (70000 - 40001)) + 40000;
	price->tr = (rand() % (90000 - 60001)) + 60000;
}

void introScreen() /*Introduction Screen*/
{	
	printf("  ______ __                        __  _        ___     __              __                 \n");
	printf(" / ___(_) /__ ____ ___ _  ___ ___ / / ( )___   / _ |___/ /  _____ ___  / /___ _________ ___\n");
	printf("/ (_ / / / _ `/ _ `/  ' \\/ -_|_-</ _ \\|/(_-<  / __ / _  / |/ / -_) _ \\/ __/ // / __/ -_|_-<\n");
	printf("\\___/_/_/\\_, /\\_,_/_/_/_/\\__/___/_//_/ /___/ /_/ |_\\_,_/|___/\\__/_//_/\\__/\\_,_/_/  \\__/___/\n");
	printf("        /___/                                                                              \n\n");
	printf("\t\t\t\t\t[1] New Game\n");
	printf("\t\t\t\t\t[2] Quit Game\n\n");
}

void mainMenu(int nDay, int nGil, int nDebt) /*Main Rift Screen*/
{	
	printf("\nGilgamesh: Adventure awaits! Where should I go?\n\n");
	printf("\t[1] Tycoon Meteor's Minerals\t\t\tDay #%d\n", nDay);
	printf("\t[2] Pulsian Restoratives\t\t\tGil: %d\n", nGil);
	printf("\t[3] Archadian Luxuries\t\t\t\tDebt:%d \n", nDebt);
	printf("\t[4] Cid's Magical Escapades\n");
	printf("\t[5] Gaian Gratitudes\n");
	printf("\t[6] Riches and Minerals of Spira\n");
	printf("\t[7] Go see the Merchant of the Rift\n");
	printf("\t[8] Quit\n\n");
}

void shopScreen(char shopName[], nOnHand hand, nPrice price, nCurrent current) /*Shop Screen*/
{
	printf("\n$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("%s\n", shopName);
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$\n\n");
	printf("Shopkeeper: Hello! What can I do for you?\n\n");
	printf("Item\t\t\tOn hand\t\tPrice\n");
	printf("[1]Phoenix Down\t\t%d\t\t%d\n", hand.pd, price.pd);
	printf("[2]Elixir Essence\t%d\t\t%d\t\tDay #%d\n", hand.ee, price.ee, current.day);
	printf("[3]Platinum Ingot\t%d\t\t%d\t\tGil: %d\n", hand.pi, price.pi, current.gil);
	printf("[4]Golden Material\t%d\t\t%d\t\tDebt: %d\n", hand.gm, price.gm, current.debt);
	printf("[5]Scarletite\t\t%d\t\t%d\n", hand.sc, price.sc);
	printf("[6]Adamantite\t\t%d\t\t%d\n", hand.ad, price.ad);
	printf("[7]Dark Matter\t\t%d\t\t%d\n", hand.dm, price.dm);
	printf("[8]Trapezohedron\t%d\t\t%d\n\n", hand.tr, price.tr);
	printf("[B]UY\n[S]ELL\n[L]EAVE\n\n");
}

void merchantMenu() /*Merchant of the Rift*/
{
	printf("Merchant of the Rift: What do you want?\n\n");
	printf("\t[1] Deposit Gil\n");
	printf("\t[2] Withdraw Gil\n");
	printf("\t[3] Pay off Debt\n");
	printf("\t[4] Ask for additional loan\n");
	printf("\t[5] Leave\n\n");
	printf("Enter: ");
}

void validOption(int *userInput, int min, int max) /*Check if user input is valid given the minimum and maximum value*/
{
	while(*userInput < min || *userInput > max)
	{
		printf("INVALID NUMBER\nPlease enter a valid number: ");
		fflush(stdin);
		scanf("%d", userInput);
	}
}

int main()
{
	nOnHand hand = {0, 0, 0, 0, 0, 0, 0, 0};
	nPrice price = {0, 0, 0, 0, 0, 0, 0, 0};
	nCurrent current = {1, 20000, 50000};
	int nIntro, nMenu, nDay = 1, nGil = 20000, nDebt = 50000;
	char nShop;
	char shop_tmm[25] = "Tycoon Meteor's Minerals";
	char shop_pr[21] = "Pulsian Restoratives";
	char shop_al[19] = "Archadian Luxuries";
	char shop_cme[23] = "Cid's Magical Escapades";
	char shop_gg[17] = "Gaian Gratitudes";
	char shop_rms[28] = "Riches and Minerals of Spira";
	
	introScreen(); /*Display Introduction Screen*/
	printf("Enter: ");
	scanf("%d", &nIntro);
	validOption(&nIntro, 1, 2);

	switch(nIntro)
	{
		case 1: break; /*START PROGRAM*/
				
		case 2: printf("See you again, adventurer!"); /*EXIT PROGRAM*/
				exit(0);
				break;
	}
	
	mainMenu(nDay, nGil, nDebt); /*Display Main Rift Screen*/
	printf("Enter: ");
	scanf("%d", &nMenu);
	validOption(&nMenu, 1, 8); /*is valid*/
	fflush(stdin);
	switch(nMenu)
	{
		case 1:	randomizePrice(&price);
				shopScreen(shop_tmm, hand, price, current);
				printf("Enter: ");
				scanf(" %c", &nShop);
				break;
				
		case 2: shopScreen(shop_pr, hand, price, current);
				break;
				
		case 3: shopScreen(shop_al, hand, price, current);
				break;
				
		case 4:	shopScreen(shop_cme, hand, price, current);
				break;
				
		case 5: shopScreen(shop_gg, hand, price, current);
				break;

		case 6: shopScreen(shop_rms, hand, price, current);
				break;
				
		case 7: break;
		
		case 8: printf("See you again, adventurer!"); /*EXIT PROGRAM*/
				exit(0);
				break;
	}
	return 0;
}

/*TO DO LIST:
Bring sense dun sa mga cases.. wala pa siyang pinapatunguhan | I think puro functions rin ilalagay dun sa cases then tuloy tuloy
Make variables to keep track of date, gil, and debt.
Struct maybe??? multiple arguments sa function
Generate Price range
*/
