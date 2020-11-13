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
	
	if(price->pd > 30)
	price->pd = (rand() % (1200 - 501)) + 500;
	if(price->ee > 30)
	price->ee = (rand() % (2100 - 1501)) + 1500;
	if(price->pi > 30)
	price->pi = (rand() % (7000 - 5001)) + 5000;
	if(price->gm > 30)
	price->gm = (rand() % (5500 - 3501)) + 3500;
	if(price->sc > 30)
	price->sc = (rand() % (12000 - 8001)) + 8000;
	if(price->ad > 30)
	price->ad = (rand() % (30000 - 15001)) + 15000;
	if(price->dm > 30)
	price->dm = (rand() % (70000 - 40001)) + 40000;
	if(price->tr > 30)
	price->tr = (rand() % (90000 - 60001)) + 60000;
}

void soldOut(nPrice *price) /*30% chance to sold out. Randomize 1-100 then if below 30%, mark as sold out.*/
{	
	price->pd = (rand() % (100 - 1));
	price->ee = (rand() % (100 - 1));
	price->pi = (rand() % (100 - 1));
	price->gm = (rand() % (100 - 1));
	price->sc = (rand() % (100 - 1));
	price->ad = (rand() % (100 - 1));
	price->dm = (rand() % (100 - 1));
	price->tr = (rand() % (100 - 1));
	
	if(price->pd < 30)
	price->pd = 0;
	if(price->ee < 30)
	price->ee = 0;
	if(price->pi < 30)
	price->pi = 0;
	if(price->gm < 30)
	price->gm = 0;
	if(price->sc < 30)
	price->sc = 0;
	if(price->ad < 30)
	price->ad = 0;
	if(price->dm < 30)
	price->dm = 0;
	if(price->tr < 30)
	price->tr = 0;
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
	if(price.pd > 0)
	printf("Phoenix Down\t\t%d\t\t%d\n", hand.pd, price.pd);
	else
	printf("Phoenix Down\t\t%d\t\tSOLD OUT\n", hand.pd);
	if(price.ee > 0)
	printf("Elixir Essence\t\t%d\t\t%d\t\tDay #%d\n", hand.ee, price.ee, current.day);
	else
	printf("Elixir Essence\t\t%d\t\tSOLD OUT\n", hand.ee);
	if(price.pi > 0)
	printf("Platinum Ingot\t\t%d\t\t%d\t\tGil: %d\n", hand.pi, price.pi, current.gil);
	else
	printf("Platinum Ingot\t\t%d\t\tSOLD OUT\n", hand.pi);
	if(price.gm > 0)
	printf("Golden Material\t\t%d\t\t%d\t\tDebt: %d\n", hand.gm, price.gm, current.debt);
	else
	printf("Golden Material\t\t%d\t\tSOLD OUT\n", hand.gm);
	if(price.sc > 0)
	printf("Scarletite\t\t%d\t\t%d\n", hand.sc, price.sc);
	else
	printf("Scarletite\t\t%d\t\tSOLD OUT\n", hand.sc);
	if(price.ad > 0)
	printf("Adamantite\t\t%d\t\t%d\n", hand.ad, price.ad);
	else
	printf("Adamantite\t\t%d\t\tSOLD OUT\n", hand.ad);
	if(price.dm > 0)
	printf("Dark Matter\t\t%d\t\t%d\n", hand.dm, price.dm);
	else
	printf("Dark Matter\t\t%d\t\tSOLD OUT\n", hand.dm);
	if(price.tr > 0)
	printf("Trapezohedron\t\t%d\t\t%d\n\n", hand.tr, price.tr);
	else
	printf("Trapezohedron\t\t%d\t\tSOLD OUT\n", hand.tr);
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
			case 1:	soldOut(&price);
					randomizePrice(&price); /*Randomize item prices*/
					price.pd = (rand() % (800 - 301)) + 300; /*Specialty item price*/
					price.ee = (rand() % (1700 - 1000)) + 1000; /*Specialty item price*/
					cConfirm = '.'; /*Set a random value for confirm leave*/
					while(cConfirm != 'C') /*Prompt confirm before leaving*/
					{
						nSelect = 0; /*Set item selection to 0*/
						fflush(stdin); /*Clear input*/
						buyChoice(shop_tmm, hand, price, current); /*Open buy choice menu*/
						printf("Enter: ");
						scanf("%c", &cShop);
						
						if(cShop == 'B') /*If user wants to buy*/
						{
							while(nSelect != 9)/*Keep on prompting for purchase until leave*/
							{
								nSelect = 0; /*Item select to 0*/
								shopScreen(shop_tmm, hand, price, current); /*Open item list*/
								printf("Enter: ");
								scanf("%d", &nSelect);
								if(current.gil > price.pd) /*Check if user has enough Gil to pay for item*/
								{
									shopBuy(nSelect, price, &current, &hand); /*Subtract Gil by item price then add On hand item*/
								}
								else
								printf("That's not enough Gil.'.\n"); /*If user does not have enough Gil to purchase the item*/
								}
							}
						
						else if(cShop == 'S') /*If user wants to sell*/
						{
							while(nSelect != 9) /*Keep on prompting for purchase until leave*/
							{
								shopScreen(shop_tmm, hand, price, current); /*Open item list*/
								printf("Enter: ");
								scanf("%d", &nSelect);
								if(hand.pd > 0) /*Check if user has enough On hand items to sell*/
								{
								shopSell(nSelect, price, &current, &hand); /*Subtract On hand by 1 then add sell price to Gil*/
								}
								else
								printf("You don't have that.\n"); /*If user does not have enought On hand items to sell*/
								}
						}
					
						else if(cShop == 'L') /*Leave the shop*/
						{
							fflush(stdin);
							printf("Leave [C]onfirm\t[B]ack\n"); /*Confirm leave of shop*/
							printf("Enter: ");
							scanf("%c", &cConfirm);
						}
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
Sold out 30% (shop screen) then make it unable to buy and sell
Invalid inputs
merchantMenu
Final screen

BUGS:
shopScreen (buy already) continous flow. check if input is valid

NOTES:
*/
