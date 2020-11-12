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

void shopBuy(int select, nPrice price, nCurrent *current, nOnHand *hand) /*Buy item function = Gil - Price & On Hand + 1*/
{
	switch (select)
	{
		case 1: current->gil = current->gil - price.pd;
				hand->pd = hand->pd + 1;
				break;
				
		case 2: current->gil = current->gil - price.ee;
				hand->ee = hand->ee + 1;
				break;
				
		case 3: current->gil = current->gil - price.pi;
				hand->pi = hand->pi + 1;
				break;
				
		case 4: current->gil = current->gil - price.gm;
				hand->gm = hand->gm + 1;
				break;
				
		case 5: current->gil = current->gil - price.sc;
				hand->sc = hand->sc + 1;
				break;
				
		case 6: current->gil = current->gil - price.ad;
				hand->ad = hand->ad + 1;
				break;
				
		case 7: current->gil = current->gil - price.dm;
				hand->dm = hand->dm + 1;
				break;
				
		case 8: current->gil = current->gil - price.tr;
				hand->tr = hand->tr + 1;
				break;

	}
}

void shopSell(int select, nPrice price, nCurrent *current, nOnHand *hand) /*Buy item function = Gil - Price & On Hand + 1*/
{
	switch (select)
	{
		case 1: current->gil = current->gil + price.pd;
				hand->pd = hand->pd - 1;
				break;
				
		case 2: current->gil = current->gil + price.ee;
				hand->ee = hand->ee - 1;
				break;
				
		case 3: current->gil = current->gil + price.pi;
				hand->pi = hand->pi - 1;
				break;
				
		case 4: current->gil = current->gil + price.gm;
				hand->gm = hand->gm - 1;
				break;
				
		case 5: current->gil = current->gil + price.sc;
				hand->sc = hand->sc - 1;
				break;
				
		case 6: current->gil = current->gil + price.ad;
				hand->ad = hand->ad - 1;
				break;
				
		case 7: current->gil = current->gil + price.dm;
				hand->dm = hand->dm - 1;
				break;
				
		case 8: current->gil = current->gil + price.tr;
				hand->tr = hand->tr - 1;
				break;
	}
}


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

void buyChoice(char shopName[], nOnHand hand, nPrice price, nCurrent current) /*Choose if buy, sell, or leave*/
{
	printf("\n$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("%s\n", shopName);
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$\n\n");
	printf("Shopkeeper: Hello! What can I do for you?\n\n");
	printf("Item\t\t\tOn hand\t\tPrice\n\n");
	printf("Phoenix Down\t\t%d\t\t%d\n", hand.pd, price.pd);
	printf("Elixir Essence\t\t%d\t\t%d\t\tDay #%d\n", hand.ee, price.ee, current.day);
	printf("Platinum Ingot\t\t%d\t\t%d\t\tGil: %d\n", hand.pi, price.pi, current.gil);
	printf("Golden Material\t\t%d\t\t%d\t\tDebt: %d\n", hand.gm, price.gm, current.debt);
	printf("Scarletite\t\t%d\t\t%d\n", hand.sc, price.sc);
	printf("Adamantite\t\t%d\t\t%d\n", hand.ad, price.ad);
	printf("Dark Matter\t\t%d\t\t%d\n", hand.dm, price.dm);
	printf("Trapezohedron\t\t%d\t\t%d\n\n", hand.tr, price.tr);
	printf("[B]UY\n[S]ELL\n[L]EAVE\n\n");
}

void shopScreen(char shopName[], nOnHand hand, nPrice price, nCurrent current) /*Shop Screen*/
{
	printf("\n$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("%s\n", shopName);
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$\n\n");
	printf("Shopkeeper: Great! Select an item!\n\n");
	printf("Item\t\t\tOn hand\t\tPrice\n\n");
	printf("[1]Phoenix Down\t\t%d\t\t%d\n", hand.pd, price.pd);
	printf("[2]Elixir Essence\t%d\t\t%d\t\tDay #%d\n", hand.ee, price.ee, current.day);
	printf("[3]Platinum Ingot\t%d\t\t%d\t\tGil: %d\n", hand.pi, price.pi, current.gil);
	printf("[4]Golden Material\t%d\t\t%d\t\tDebt: %d\n", hand.gm, price.gm, current.debt);
	printf("[5]Scarletite\t\t%d\t\t%d\n", hand.sc, price.sc);
	printf("[6]Adamantite\t\t%d\t\t%d\n", hand.ad, price.ad);
	printf("[7]Dark Matter\t\t%d\t\t%d\n", hand.dm, price.dm);
	printf("[8]Trapezohedron\t%d\t\t%d\n\n", hand.tr, price.tr);
	printf("[9]BACK\n");
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
	int  i, nIntro, nMenu, nSelect;
	char cShop, cConfirm;
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
	
	for(i=1; i<30; i++) /*loop until 30 game days*/
	{
	fflush(stdin);
	nSelect = 0; /*Reset nSelect Value*/
	mainMenu(current.day, current.gil, current.debt); /*Display Main Rift Screen*/
	printf("Enter: ");
	scanf("%d", &nMenu);
	validOption(&nMenu, 1, 8); /*is valid*/
	
		switch(nMenu)
		{
			case 1:	randomizePrice(&price);
					cConfirm = '.';
					while(cConfirm != 'C')
					{
						nSelect = 0; /*Set nSelect to 0*/
						fflush(stdin);
						buyChoice(shop_tmm, hand, price, current);
						printf("Enter: ");
						scanf("%c", &cShop);
						
						if(cShop == 'B')
						{
							while(nSelect != 9)/*Keep on prompting for purchase until leave*/
							{
							nSelect = 0;
							shopScreen(shop_tmm, hand, price, current);
							printf("Enter: ");
							scanf("%d", &nSelect);
							shopBuy(nSelect, price, &current, &hand);
							}
						}
						
						else if(cShop == 'S')
						{
							while(nSelect != 9) /*Keep on prompting for purchase until leave*/
							{
								shopScreen(shop_tmm, hand, price, current);
								printf("Enter: ");
								scanf("%d", &nSelect);
								shopSell(nSelect, price, &current, &hand);
							}
						}
					
						else if(cShop == 'L')
						{
							fflush(stdin);
							printf("Leave [C]onfirm\t[B]ack\n");
							printf("Enter: ");
							scanf("%c", &cConfirm);
						}
				 
					/*else if(nShop != 'B' || nShop != 'S' || nShop != 'L')
					{
						printf("Enter a valid option: ");
						scanf("%c", &nShop);
					}*/
					}
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
				
			case 7: merchantMenu();
					break;
		
			case 8: printf("See you again, adventurer!"); /*EXIT PROGRAM*/
					exit(0);
					break;
		}
		
		current.day++; /*Add day + 1*/
	}
	return 0;
}

/*
TO DO LIST:
Function to check if have enough gil
Function to check if have enough on hand
Sold out 30%
Specialty shop
Invalid inputs
merchantMenu
Final screen

BUGS:

NOTES:
*/
