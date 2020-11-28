/*
CCPROG1 - S22
Machine Project 04: Gilgamesh's Mega Gil Adventures

Name: Samuel Jedidiah A. Uy
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct /*Current values */
{
	int day;
	int gil;
	int bank;
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

void delay(int milliseconds) /*Delay function (Will use before clearing screen)*/
{ 
    clock_t start_time = clock(); 
    while (clock() < start_time + milliseconds); 
}
void shopBuy(int select, nPrice price, nCurrent *current, nOnHand *hand) /*Buy item function = (Gil - Price) then (On Hand + 1)*/
{
	switch (select)
	{
		case 1: if(price.pd > 0)
				{
					current->gil = current->gil - price.pd;
					hand->pd = hand->pd + 1;
				}
				else
				printf("Phoenix Down is out of stock!\n");
				break;
				
		case 2: if(price.ee > 0)
				{
				current->gil = current->gil - price.ee;
				hand->ee = hand->ee + 1;
				}
				else
				printf("Elixir Essence is out of stock!\n");
				break;
				
		case 3: if(price.pi > 0)
				{
				current->gil = current->gil - price.pi;
				hand->pi = hand->pi + 1;
				}
				else
				printf("Platinum Ingot is out of stock!\n");
				break;
				
		case 4: if(price.gm > 0)
				{
				current->gil = current->gil - price.gm;
				hand->gm = hand->gm + 1;
				}
				else
				printf("Golden Materia is out of stock!\n");
				break;
				
		case 5: if(price.sc > 0)
				{
				current->gil = current->gil - price.sc;
				hand->sc = hand->sc + 1;
				}
				else
				printf("Scarletite is out of stock!\n");
				break;
				
		case 6: if(price.ad > 0)
				{
				current->gil = current->gil - price.ad;
				hand->ad = hand->ad + 1;
				}
				else
				printf("Adamantite is out of stock!\n");
				break;
				
		case 7: if(price.dm > 0)
				{
				current->gil = current->gil - price.dm;
				hand->dm = hand->dm + 1;
				}
				else
				printf("Dark Matter is out of stock!\n");
				break;
				
		case 8: if(price.tr > 0)
				{
				current->gil = current->gil - price.tr;
				hand->tr = hand->tr + 1;
				}
				else
				printf("Trapezohedron is out of stock!\n");
				break;

	}
}

void shopSell(int select, nPrice price, nCurrent *current, nOnHand *hand) /*Sell item function = (Gil + Price) then (On Hand - 1)*/
{
	switch (select)
	{
		case 1: if(price.pd > 0)
				{
				current->gil = current->gil + price.pd;
				hand->pd = hand->pd - 1;
				}
				else
				printf("\nPhoenix Down? I don't want that.\n");
				break;
				
		case 2: if(price.ee > 0)
				{
				current->gil = current->gil + price.ee;
				hand->ee = hand->ee - 1;
				}
				else
				printf("\nElixir Essence? I don't want that.\n");
				break;
				
		case 3: if(price.pi > 0)
				{
				current->gil = current->gil + price.pi;
				hand->pi = hand->pi - 1;
				}
				else
				printf("\nPlatinum Ingot? I don't want that.\n");
				break;
				
		case 4: if(price.gm > 0)
				{
				current->gil = current->gil + price.gm;
				hand->gm = hand->gm - 1;
				}
				else
				printf("\nGolden Materia? I don't want that.\n");
				break;
				
		case 5: if(price.sc > 0)
				{
				current->gil = current->gil + price.sc;
				hand->sc = hand->sc - 1;
				}
				else
				printf("\nScarletite? I don't want that.\n");
				break;
				
		case 6: if(price.ad > 0)
				{
				current->gil = current->gil + price.ad;
				hand->ad = hand->ad - 1;
				}
				else
				printf("\nAdamantite? I don't want that.\n");
				break;
				
		case 7: if(price.dm > 0)
				{
				current->gil = current->gil + price.dm;
				hand->dm = hand->dm - 1;
				}
				else
				printf("\nDark Matter? I don't want that.\n");
				break;
				
		case 8: if(price.tr > 0)
				{
				current->gil = current->gil + price.tr;
				hand->tr = hand->tr - 1;
				}
				else
				printf("\nTrapezohedron? I don't want that.'\n");
				break;
	}
}

void enoughGil(int nSelect, int *nEnough, nCurrent current, nPrice price) /*Check if user has enough Gil to make purchase. nEnough = 1 is valid*/
{
	*nEnough = 0;
	switch(nSelect)
	{
		case 1: if(current.gil - price.pd > 0)
				*nEnough = 1;
				break;
				
		case 2: if(current.gil - price.ee > 0)
				*nEnough = 1;
				break;
				
		case 3: if(current.gil - price.pi > 0)
				*nEnough = 1;
				break;
				
		case 4: if(current.gil - price.gm > 0)
				*nEnough = 1;
				break;
		
		case 5: if(current.gil - price.sc > 0)
				*nEnough = 1;
				break;
		
		case 6: if(current.gil - price.ad > 0)
				*nEnough = 1;
				break;
		
		case 7: if(current.gil - price.dm > 0)
				*nEnough = 1;
				break;
		
		case 8: if(current.gil - price.tr > 0)
				*nEnough = 1;
				break;
				
		case 9: break;
	}
}

void depositCheck(int nInput, nCurrent *current) /*Check uf user has enough Gil to deposit*/
{
	if(current->gil - nInput >= 0)
	{
		current->gil = current->gil - nInput;
		current->bank = current->bank + nInput;
	}
	else
	{
		printf("\nAre you dreaming? You don't have that much!\n");
		delay(500); /*Delay before clearing screen*/
	}
}

void payDebt(int nInput, nCurrent *current) /*Check if user has enough Gil to pay debt*/
{
	if(current->debt - nInput >= 0)
	{
		if(current->gil - nInput >= 0)
		{
			current->gil = current->gil - nInput;
			current->debt = current->debt - nInput;
		}
		else
			printf("\nAre you dreaming? You don't have that much!\n");
	}
	else
	{
		printf("\nYou're too kind. You don't need to pay me extra\n");
		delay(500); /*Delay before clearing screen*/
	}
}

void withdrawCheck(int nInput, nCurrent *current) /*Check if user has enough in bank to withdraw */
{
	if(current->bank - nInput >= 0)
	{
		current->gil = current->gil + nInput;
		current->bank = current->bank - nInput;
	}
	else
	{
		printf("\nAre you dreaming? You don't have that much!\n");
		delay(500); /*Delay before clearing screen*/
	}
}

void enoughHand(int nSelect, int *nHand, nOnHand hand, nPrice price) /*Check if user has On hand to sell. nHand = 1 is valid*/
{
	*nHand = 0;
	switch(nSelect)
	{
		case 1: if(hand.pd - 1 >= 0)
				*nHand = 1;
				break;
				
		case 2: if(hand.ee - 1 >= 0)
				*nHand = 1;
				break;
				
		case 3: if(hand.pi - 1 >= 0)
				*nHand = 1;
				break;
				
		case 4: if(hand.gm - 1 >= 0)
				*nHand = 1;
				break;
		
		case 5: if(hand.sc - 1 >= 0)
				*nHand = 1;
				break;
		
		case 6: if(hand.ad - 1 >= 0)
				*nHand = 1;
				break;
		
		case 7: if(hand.dm - 1 >= 0)
				*nHand = 1;
				break;
		
		case 8: if(hand.tr - 1 >= 0)
				*nHand = 1;
				break;
				
		case 9: break;
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
	
	if(price->pd <= 30)
	price->pd = 0;
	if(price->ee <= 30)
	price->ee = 0;
	if(price->pi <= 30)
	price->pi = 0;
	if(price->gm <= 30)
	price->gm = 0;
	if(price->sc <= 30)
	price->sc = 0;
	if(price->ad <= 30)
	price->ad = 0;
	if(price->dm <= 30)
	price->dm = 0;
	if(price->tr <= 30)
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
	printf("\t\t\t\t\t[2] How to play\n");
	printf("\t\t\t\t\t[3] Quit Game\n\n");
}

void instructionScreen() /*How to play?*/
{
	printf("You play as Gilgamesh, a colossal warrior from Lorica.\n");
	printf("There is a legendary weapon called \"Excalibur\" which he aims to travel to different worlds\nto one day come up with that legendary weapon. ");
	printf("Nothing comes free and he needs money (Gil, in this universe) to\ngather equipment needed for his journey. ");
	printf("The only way he can obtain money is buying and selling goods from one world to another.\n");
	printf("Starting off, he does not have much to his name. The Merchant of the Rift offers to lend him some Gil to help him start, his Genji Equiment was the collateral.\n");
	printf("Gilgamesh agreed but then the Merchant of the Rift explains that his debt increases by 15%% every day\n");
	printf("You must help Gilgamesh earn enough money to pay off his debt and get his Genji equipment back within 30 days.\n");
	printf("\nObjectives:\n\n");
	printf("Gilgamesh will start with 20,000 Gil on hand and 50,000 Gil debt from the Merchant of the Rift\n");
	printf("You are given 30 days to earn enough money to pay off that debt and still have money remaining to continue your journey!\n");
	printf("\n\nDifficulty:\n\n");
	printf("Easy: Gilgamesh being in a rush to pay off his debt, he will drop a small amount of Gil rarely\n");
	printf("Medium: There are naughty kids that roam around. They will take some of your Gil! Be careful!\n");
	printf("Hard: AMBUSH! Keep your eyes peeled!\n\n");
	printf("\t\t\t\t\t\t[1]Back\n\n");
}

void selectDifficulty(int *nDifficulty) /*Select Difficulty Screen*/
{
	system("CLS");
	printf("\nSelect difficulty:\n\n");
	printf("[1] Easy\n");
	printf("[2] Medium\n");
	printf("[3] Hard\n\n");
	printf("Enter: ");
	fflush(stdin);
	scanf("%d", nDifficulty);
}

void randomDrop(int nDifficulty, nCurrent *current, int nChance) /*Drop chances and drop value based on difficulty*/
{
	nChance = (rand() % (100 - 1));
	
	if(nDifficulty == 1) /*Easy*/
	{
		if(nChance <= 10)
		{
			printf("You accidently dropped some Gil\n\n");
			current->gil = current->gil - (rand() % (3000 - 101)) + 100;
			delay(1000); /*Delay before clearing screen*/
		}
	}
	else if(nDifficulty == 2) /*Medium*/
	{
		if(nChance <= 10)
		{
			printf("Some kid took Gil from you\n\n");
			current->gil = current->gil - (rand() % (8000 - 1001)) + 1000;
			delay(1000); /*Delay before clearing screen*/
		}
	}
	else if(nDifficulty == 3) /*Hard*/
	{
		if(nChance <= 10)
		{
			printf("AMBUSH! They took most of your Gil\n\n");
			current->gil = current->gil - (rand() % (12000 - 3001)) + 3000;
			delay(1000); /*Delay before clearing screen*/
		}
	}
}

void mainMenu(nCurrent current) /*Main Rift Screen*/
{	
	printf("Gilgamesh: Adventure awaits! Where should I go?\n\n");
	printf("\t[1] Tycoon Meteor's Minerals\t\t\tDay #%d\n", current.day);
	printf("\t[2] Pulsian Restoratives\t\t\tGil: %d\n", current.gil);
	printf("\t[3] Archadian Luxuries\t\t\t\tDebt:%d \n", current.debt);
	printf("\t[4] Cid's Magical Escapades\t\t\tBank: %d\n", current.bank);
	printf("\t[5] Gaian Gratitudes\n");
	printf("\t[6] Riches and Minerals of Spira\n");
	printf("\t[7] Go see the Merchant of the Rift\n");
	printf("\t[8] Quit\n\n");
}

void buyChoice(char shopName[], nOnHand hand, nPrice price, nCurrent current) /*Choose if buy, sell, or leave*/
{
	
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$\n");
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
		printf("Elixir Essence\t\t%d\t\tSOLD OUT\tDay #%d\n", hand.ee, current.day);
	if(price.pi > 0)
		printf("Platinum Ingot\t\t%d\t\t%d\t\tGil: %d\n", hand.pi, price.pi, current.gil);
	else
		printf("Platinum Ingot\t\t%d\t\tSOLD OUT\tGil: %d\n", hand.pi, current.gil);
	if(price.gm > 0)
		printf("Golden Materia\t\t%d\t\t%d\t\tDebt: %d\n", hand.gm, price.gm, current.debt);
	else
		printf("Golden Materia\t\t%d\t\tSOLD OUT\tDebt: %d\n", hand.gm, current.debt);
	if(price.sc > 0)
		printf("Scarletite\t\t%d\t\t%d\t\tBank: %d\n", hand.sc, price.sc, current.bank);
	else
		printf("Scarletite\t\t%d\t\tSOLD OUT\tBank: \n", hand.sc, current.bank);
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
		printf("Trapezohedron\t\t%d\t\tSOLD OUT\n\n", hand.tr);
	printf("[B]UY\n[S]ELL\n[L]EAVE\n\n");
}

void shopScreen(char shopName[], nOnHand hand, nPrice price, nCurrent current) /*Shop Screen*/
{
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("%s\n", shopName);
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$\n\n");
	printf("Shopkeeper: Great! Select an item!\n\n");
	printf("Item\t\t\tOn hand\t\tPrice\n\n");
	if(price.pd > 0)
		printf("[1]Phoenix Down\t\t%d\t\t%d\n", hand.pd, price.pd);
	else
		printf("[1]Phoenix Down\t\t%d\t\tSOLD OUT\n", hand.pd);
	if(price.ee > 0)
		printf("[2]Elixir Essence\t%d\t\t%d\t\tDay #%d\n", hand.ee, price.ee, current.day);
	else
		printf("[2]Elixir Essence\t%d\t\tSOLD OUT\tDay #%d\n", hand.ee, current.day);
	if(price.pi > 0)
		printf("[3]Platinum Ingot\t%d\t\t%d\t\tGil: %d\n", hand.pi, price.pi, current.gil);
	else
		printf("[3]Platinum Ingot\t%d\t\tSOLD OUT\tGil: %d\n", hand.pi, current.gil);
	if(price.gm > 0)
		printf("[4]Golden Materia\t%d\t\t%d\t\tDebt: %d\n", hand.gm, price.gm, current.debt);
	else
		printf("[4]Golden Materia\t%d\t\tSOLD OUT\tDebt: %d\n", hand.gm, current.debt);
	if(price.sc > 0)
		printf("[5]Scarletite\t\t%d\t\t%d\t\tBank: %d\n", hand.sc, price.sc, current.bank);
	else
		printf("[5]Scarletite\t\t%d\t\tSOLD OUT\tBank: %d\n", hand.sc, current.bank);
	if(price.ad > 0)
		printf("[6]Adamantite\t\t%d\t\t%d\n", hand.ad, price.ad);
	else
		printf("[6]Adamantite\t\t%d\t\tSOLD OUT\n", hand.ad);
	if(price.dm > 0)
		printf("[7]Dark Matter\t\t%d\t\t%d\n", hand.dm, price.dm);
	else
		printf("]7Dark Matter\t\t%d\t\tSOLD OUT\n", hand.dm);
	if(price.tr > 0)
		printf("[8]Trapezohedron\t%d\t\t%d\n\n", hand.tr, price.tr);
	else
		printf("[8]Trapezohedron\t%d\t\tSOLD OUT\n", hand.tr);
		printf("[9]BACK\n\n");
}

void merchantMenu(nCurrent current) /*Merchant of the Rift menu*/
{
	printf("########################################\n");
	printf("Merchant of the Rift: What do you want?\n");
	printf("########################################\n\n");
	printf("\t[1] Deposit Gil\t\t\tDay #%d\n", current.day);
	printf("\t[2] Withdraw Gil\t\tGil: %d\n", current.gil);
	printf("\t[3] Pay off Debt\t\tDebt: %d\n", current.debt);
	printf("\t[4] Ask for additional loan\tBank: %d\n", current.bank);
	printf("\t[5] Leave\n\n");
}

void winScreen(nCurrent current) /*Win screen*/
{
	printf("Total Profit: %d Gil\nDebt Left: %d\n\n", current.gil + current.bank - current.debt, current.debt);
	printf("Merchant of the Rift: Good luck on your adventure, Gilgamesh!\n\n");
	printf("\t\t\t\tCongratulations! You won!\n\n");
}

void loseScreen(nCurrent current) /*Lose screen*/
{
	printf("Total Profit: %d Gil\nDebt Left: %d\n\n", current.gil + current.bank - current.debt, current.debt);
	printf("Merchant of the Rift: What a failure! Return to me when you have enough.\n\n");
	printf("\t\t\t\tYou lost.!\n\n");
}

void finalScreen(nCurrent current) /*Final screen. Pop either win or lose*/
{
	printf("END OF THE GAME!\n\n");
	printf("Total Gil Earned: %d\n", current.gil + current.bank - 20000);
	printf("Debt Remaining: %d\n", current.debt);
	printf("Total Profit: %d\n", current.gil + current.bank - current.debt);
}

void validOption(int *userInput, int min, int max) /*Check if user input is valid given the minimum and maximum value*/
{
	while(*userInput < min || *userInput > max)
	{
		printf("INVALID\nPlease enter a valid option: ");
		fflush(stdin);
		scanf("%d", userInput);
	}
}

int main()
{
	nOnHand hand = {0, 0, 0, 0, 0, 0, 0, 0};
	nPrice price = {0, 0, 0, 0, 0, 0, 0, 0};
	int  i, nProfit, nIntro, nBack, nMenu, nSelect, nEnough, nHand, nMerchant, nInput, nDifficulty, nChance;
	char cShop, cConfirm, cPlay = '.';
	char shop_tmm[25] = "Tycoon Meteor's Minerals";
	char shop_pr[21] = "Pulsian Restoratives";
	char shop_al[19] = "Archadian Luxuries";
	char shop_cme[23] = "Cid's Magical Escapades";
	char shop_gg[17] = "Gaian Gratitudes";
	char shop_rms[28] = "Riches and Minerals of Spira";

	while(nIntro != 1)
	{	
		system("CLS");
		introScreen(); /*Display Introduction Screen*/
		printf("Enter: ");
		scanf("%d", &nIntro);
		validOption(&nIntro, 1, 3);

		switch(nIntro) /*User entry for intro screen*/
		{
			case 1: break; /*START PROGRAM*/
		
			case 2:	nIntro = 0;
					system("CLS"); /*Clear Screen*/
					instructionScreen();
					printf("Enter: ");
					scanf("%d", &nBack);
					validOption(&nBack, 1, 1);
					break;
				
			case 3:	system("CLS"); /*Clear Screen*/
					printf("See you next time!"); /*EXIT PROGRAM*/
					exit(0);
					break;
		}
	}
	while(cPlay != 'N') /*Play again loop*/
{
	selectDifficulty(&nDifficulty); /*Display select difficulty screen*/
	validOption(&nDifficulty, 1, 3); /*Check for input validity*/
	
	nCurrent current = {1, 20000, 0, 50000}; /*Set default game start values */
	for(i=0; i<30; i++) /*loop until 30 game days*/
	{
		system("CLS"); /*Clear screen*/
		randomDrop(nDifficulty, &current, nChance); /*Gil drop chance based on difficulty*/
		fflush(stdin);
		nSelect = 0, nMenu = 0; /*Reset nSelect  and nMenu Value*/
		mainMenu(current); /*Display Main Rift Screen*/
		printf("Enter: ");
		scanf("%d", &nMenu);
		validOption(&nMenu, 1, 8); /*Check if user input is valid*/
	
		switch(nMenu) /*User input of shop choice. All cases are the same except for specialty item prices*/
			{
			case 1:	soldOut(&price);
					randomizePrice(&price); /*Randomize item prices*/
					price.tr = (rand() % (65000 - 35001)) + 35000; /*Specialty item price*/
					cConfirm = '.'; /*Set a random value for confirm leave*/
					while(cConfirm != 'C') /*Prompt confirm before leaving*/
					{
						system("CLS"); /*Clear screen*/
						nSelect = 0; /*Set item selection to 0*/
						fflush(stdin); /*Clear input*/
						buyChoice(shop_tmm, hand, price, current); /*Open buy choice menu*/
						printf("Enter: ");
						scanf("%c", &cShop);
						
						if(cShop == 'B') /*If user wants to buy*/
						{
							while(nSelect != 9)/*Keep on prompting for purchase until leave*/
							{
								system("CLS"); /*Clear screen*/
								nSelect = 0; /*Item select to 0*/
								shopScreen(shop_tmm, hand, price, current); /*Open item list*/
								printf("Enter: ");
								scanf("%d", &nSelect);
								validOption(&nSelect, 1, 9); /*Check validity of input*/
								enoughGil(nSelect, &nEnough, current, price); /*Check if user has enough Gil*/
								if(nEnough == 1)
									shopBuy(nSelect, price, &current, &hand); /*Subtract Gil by item price then add On hand item*/
								else if(nSelect == 9);
								else
									{
									printf("\nThat's not enough Gil.\n"); /*If user does not have enough Gil to purchase the item*/
									delay(500); /*Delay before clearing screen*/
									}
							}
						}
						
						else if(cShop == 'S') /*If user wants to sell*/
						{
							while(nSelect != 9) /*Keep on prompting for purchase until leave*/
							{
								system("CLS"); /*Clear screen*/
								shopScreen(shop_tmm, hand, price, current); /*Open item list*/
								printf("Enter: ");
								scanf("%d", &nSelect);
								validOption(&nSelect, 1, 9); /*Check validity of user input*/
								enoughHand(nSelect, &nHand, hand, price);
								if(nHand == 1) /*Check if user has enough On hand items to sell*/
									shopSell(nSelect, price, &current, &hand); /*Subtract On hand by 1 then add sell price to Gil*/
								else if(nSelect == 9);
								else
								{
									printf("\nYou don't have that.\n"); /*If user does not have enought On hand items to sell*/
									delay(500); /*Delay before clearing screen*/
								}
							}
						}
					
						else if(cShop == 'L') /*Leave the shop*/
						{
							fflush(stdin);
							printf("\nLeave [C]onfirm\t[B]ack\n\n"); /*Confirm leave of shop*/
							printf("Enter: ");
							scanf("%c", &cConfirm);
							while(cConfirm != 'C' && cConfirm != 'B')
								{
									printf("INVALID\nPlease enter a valid option: ");
									fflush(stdin);
									scanf("%c", &cConfirm);
								}
						}
						
						else /*Invalid input*/
						{
						printf("INVALID");
						delay(500); /*Delay before clearing screen*/
						}
					}
					break;
						
					
			case 2: soldOut(&price);
					randomizePrice(&price); /*Randomize item prices*/
					price.pd = (rand() % (800 - 301)) + 300; /*Specialty item price*/
					price.ee = (rand() % (1700 - 1000)) + 1000; /*Specialty item price*/
					cConfirm = '.'; /*Set a random value for confirm leave*/
					while(cConfirm != 'C') /*Prompt confirm before leaving*/
					{
						system("CLS"); /*Clear screen*/
						nSelect = 0; /*Set item selection to 0*/
						fflush(stdin); /*Clear input*/
						buyChoice(shop_pr, hand, price, current); /*Open buy choice menu*/
						printf("Enter: ");
						scanf("%c", &cShop);
						
						if(cShop == 'B') /*If user wants to buy*/
						{
							while(nSelect != 9)/*Keep on prompting for purchase until leave*/
							{
								system("CLS"); /*Clear screen*/
								nSelect = 0; /*Item select to 0*/
								shopScreen(shop_pr, hand, price, current); /*Open item list*/
								printf("Enter: ");
								scanf("%d", &nSelect);
								validOption(&nSelect, 1, 9); /*Check validity of input*/
								enoughGil(nSelect, &nEnough, current, price); /*Check if user has enough Gil*/
								if(nEnough == 1)
									shopBuy(nSelect, price, &current, &hand); /*Subtract Gil by item price then add On hand item*/
								else if(nSelect == 9);
								else
								{
									printf("\nThat's not enough Gil.\n"); /*If user does not have enough Gil to purchase the item*/
									delay(500); /*Delay before clearing screen*/
								}
							}
						}
						
						else if(cShop == 'S') /*If user wants to sell*/
						{
							while(nSelect != 9) /*Keep on prompting for purchase until leave*/
							{
								system("CLS"); /*Clear screen*/
								shopScreen(shop_pr, hand, price, current); /*Open item list*/
								printf("Enter: ");
								scanf("%d", &nSelect);
								validOption(&nSelect, 1, 9); /*Check validity of user input*/
								enoughHand(nSelect, &nHand, hand, price);
								if(nHand == 1) /*Check if user has enough On hand items to sell*/
									shopSell(nSelect, price, &current, &hand); /*Subtract On hand by 1 then add sell price to Gil*/
								else if(nSelect == 9);
								else
								{
									printf("\nYou don't have that.\n"); /*If user does not have enought On hand items to sell*/
									delay(500); /*Delay before clearing screen*/
								}
							}
						}
					
						else if(cShop == 'L') /*Leave the shop*/
						{
							fflush(stdin);
							printf("\nLeave [C]onfirm\t[B]ack\n\n"); /*Confirm leave of shop*/
							printf("Enter: ");
							scanf("%c", &cConfirm);
							while(cConfirm != 'C' && cConfirm != 'B')
								{
									printf("INVALID\nPlease enter a valid option: ");
									fflush(stdin);
									scanf("%c", &cConfirm);
								}
						}
											
						else /*Invalid input*/
						{
						printf("INVALID");
						delay(500); /*Delay before clearing screen*/
						}
					}
					break;
				
			case 3: soldOut(&price);
					randomizePrice(&price); /*Randomize item prices*/
					price.pi = (rand() % (6000 - 4501)) + 4500; /*Specialty item price*/
					cConfirm = '.'; /*Set a random value for confirm leave*/
					while(cConfirm != 'C') /*Prompt confirm before leaving*/
					{
						system("CLS"); /*Clear screen*/
						nSelect = 0; /*Set item selection to 0*/
						fflush(stdin); /*Clear input*/
						buyChoice(shop_al, hand, price, current); /*Open buy choice menu*/
						printf("Enter: ");
						scanf("%c", &cShop);
						
						if(cShop == 'B') /*If user wants to buy*/
						{
							while(nSelect != 9)/*Keep on prompting for purchase until leave*/
							{
								system("CLS"); /*Clear screen*/
								nSelect = 0; /*Item select to 0*/
								shopScreen(shop_al, hand, price, current); /*Open item list*/
								printf("Enter: ");
								scanf("%d", &nSelect);
								validOption(&nSelect, 1, 9); /*Check validity of input*/
								enoughGil(nSelect, &nEnough, current, price); /*Check if user has enough Gil*/
								if(nEnough == 1)
									shopBuy(nSelect, price, &current, &hand); /*Subtract Gil by item price then add On hand item*/
								else if(nSelect == 9);
								else
								{
									printf("\nThat's not enough Gil.\n"); /*If user does not have enough Gil to purchase the item*/
									delay(500); /*Delay before clearing screen*/
								}
							}
						}
						
						else if(cShop == 'S') /*If user wants to sell*/
						{
							while(nSelect != 9) /*Keep on prompting for purchase until leave*/
							{
								system("CLS"); /*Clear screen*/
								shopScreen(shop_al, hand, price, current); /*Open item list*/
								printf("Enter: ");
								scanf("%d", &nSelect);
								validOption(&nSelect, 1, 9); /*Check validity of user input*/
								enoughHand(nSelect, &nHand, hand, price);
								if(nHand == 1) /*Check if user has enough On hand items to sell*/
									shopSell(nSelect, price, &current, &hand); /*Subtract On hand by 1 then add sell price to Gil*/
								else if(nSelect == 9);
								else
								{
									printf("\nYou don't have that.\n"); /*If user does not have enought On hand items to sell*/
									delay(500); /*Delay before clearing screen*/
								}
							}
						}
					
						else if(cShop == 'L') /*Leave the shop*/
						{
							fflush(stdin);
							printf("\nLeave [C]onfirm\t[B]ack\n\n"); /*Confirm leave of shop*/
							printf("Enter: ");
							scanf("%c", &cConfirm);
							while(cConfirm != 'C' && cConfirm != 'B')
								{
									printf("INVALID\nPlease enter a valid option: ");
									fflush(stdin);
									scanf("%c", &cConfirm);
								}
						}
												
						else /*Invalid input*/
						{
						printf("INVALID");
						delay(500); /*Delay before clearing screen*/
						}
					}
					break;
				
			case 4:	soldOut(&price);
					randomizePrice(&price); /*Randomize item prices*/
					price.sc = (rand() % (10000 - 5001)) + 5000; /*Specialty item price*/
					cConfirm = '.'; /*Set a random value for confirm leave*/
					while(cConfirm != 'C') /*Prompt confirm before leaving*/
					{
						system("CLS"); /*Clear screen*/
						nSelect = 0; /*Set item selection to 0*/
						fflush(stdin); /*Clear input*/
						buyChoice(shop_cme, hand, price, current); /*Open buy choice menu*/
						printf("Enter: ");
						scanf("%c", &cShop);
						
						if(cShop == 'B') /*If user wants to buy*/
						{
							while(nSelect != 9)/*Keep on prompting for purchase until leave*/
							{
								system("CLS"); /*Clear screen*/
								nSelect = 0; /*Item select to 0*/
								shopScreen(shop_cme, hand, price, current); /*Open item list*/
								printf("Enter: ");
								scanf("%d", &nSelect);
								validOption(&nSelect, 1, 9); /*Check validity of input*/
								enoughGil(nSelect, &nEnough, current, price); /*Check if user has enough Gil*/
								if(nEnough == 1)
									shopBuy(nSelect, price, &current, &hand); /*Subtract Gil by item price then add On hand item*/
								else if(nSelect == 9);
								else
								{
								printf("\nThat's not enough Gil.\n"); /*If user does not have enough Gil to purchase the item*/
								delay(500); /*Delay before clearing screen*/
								}
							}
						}
						
						else if(cShop == 'S') /*If user wants to sell*/
						{
							while(nSelect != 9) /*Keep on prompting for purchase until leave*/
							{
								system("CLS"); /*Clear screen*/
								shopScreen(shop_cme, hand, price, current); /*Open item list*/
								printf("Enter: ");
								scanf("%d", &nSelect);
								validOption(&nSelect, 1, 9); /*Check validity of user input*/
								enoughHand(nSelect, &nHand, hand, price);
								if(nHand == 1) /*Check if user has enough On hand items to sell*/
									shopSell(nSelect, price, &current, &hand); /*Subtract On hand by 1 then add sell price to Gil*/
								else if(nSelect == 9);
								else
								{
									printf("\nYou don't have that.\n"); /*If user does not have enought On hand items to sell*/
									delay(500); /*Delay before clearing screen*/
								}
							}
						}
					
						else if(cShop == 'L') /*Leave the shop*/
						{
							fflush(stdin);
							printf("\nLeave [C]onfirm\t[B]ack\n\n"); /*Confirm leave of shop*/
							printf("Enter: ");
							scanf("%c", &cConfirm);
							while(cConfirm != 'C' && cConfirm != 'B')
								{
									printf("INVALID\nPlease enter a valid option: ");
									fflush(stdin);
									scanf("%c", &cConfirm);
								}
						}
												
						else /*Invalid input*/
						{
						printf("INVALID");
						delay(500); /*Delay before clearing screen*/
						}
					}
					break;
					
			case 5: soldOut(&price);
					randomizePrice(&price); /*Randomize item prices*/
					price.ad = (rand() % (20000 - 9501)) + 9500; /*Specialty item price*/
					price.dm = (rand() % (50000 - 22001)) + 22000; /*Specialty item price*/
					cConfirm = '.'; /*Set a random value for confirm leave*/
					while(cConfirm != 'C') /*Prompt confirm before leaving*/
					{
						system("CLS"); /*Clear screen*/
						nSelect = 0; /*Set item selection to 0*/
						fflush(stdin); /*Clear input*/
						buyChoice(shop_gg, hand, price, current); /*Open buy choice menu*/
						printf("Enter: ");
						scanf("%c", &cShop);
						
						if(cShop == 'B') /*If user wants to buy*/
						{
							while(nSelect != 9)/*Keep on prompting for purchase until leave*/
							{
								system("CLS"); /*Clear screen*/
								nSelect = 0; /*Item select to 0*/
								shopScreen(shop_gg, hand, price, current); /*Open item list*/
								printf("Enter: ");
								scanf("%d", &nSelect);
								validOption(&nSelect, 1, 9); /*Check validity of input*/
								enoughGil(nSelect, &nEnough, current, price); /*Check if user has enough Gil*/
								if(nEnough == 1)
									shopBuy(nSelect, price, &current, &hand); /*Subtract Gil by item price then add On hand item*/
								else if(nSelect == 9);
								else
								{
									printf("\nThat's not enough Gil.\n"); /*If user does not have enough Gil to purchase the item*/
									delay(500); /*Delay before clearing screen*/
								}
							}
						}
						
						else if(cShop == 'S') /*If user wants to sell*/
						{
							while(nSelect != 9) /*Keep on prompting for purchase until leave*/
							{
								system("CLS"); /*Clear screen*/
								shopScreen(shop_gg, hand, price, current); /*Open item list*/
								printf("Enter: ");
								scanf("%d", &nSelect);
								validOption(&nSelect, 1, 9); /*Check validity of user input*/
								enoughHand(nSelect, &nHand, hand, price);
								if(nHand == 1) /*Check if user has enough On hand items to sell*/
									shopSell(nSelect, price, &current, &hand); /*Subtract On hand by 1 then add sell price to Gil*/
								else if(nSelect == 9);
								else
								{
									printf("\nYou don't have that.\n"); /*If user does not have enought On hand items to sell*/
									delay(500); /*Delay before clearing screen*/
								}
							}
						}
					
						else if(cShop == 'L') /*Leave the shop*/
						{
							fflush(stdin);
							printf("\nLeave [C]onfirm\t[B]ack\n\n"); /*Confirm leave of shop*/
							printf("Enter: ");
							scanf("%c", &cConfirm);
							while(cConfirm != 'C' && cConfirm != 'B')
								{
									printf("INVALID\nPlease enter a valid option: ");
									fflush(stdin);
									scanf("%c", &cConfirm);
								}
						}
												
						else /*Invalid input*/
						{
						printf("INVALID");
						delay(500); /*Delay before clearing screen*/
						}
					}
					break;

			case 6: soldOut(&price);
					randomizePrice(&price); /*Randomize item prices*/
					price.pd = (rand() % (800 - 301)) + 300; /*Specialty item price*/
					price.ee = (rand() % (1700 - 1000)) + 1000; /*Specialty item price*/
					cConfirm = '.'; /*Set a random value for confirm leave*/
					while(cConfirm != 'C') /*Prompt confirm before leaving*/
					{
						system("CLS"); /*Clear screen*/
						nSelect = 0; /*Set item selection to 0*/
						fflush(stdin); /*Clear input*/
						buyChoice(shop_rms, hand, price, current); /*Open buy choice menu*/
						printf("Enter: ");
						scanf("%c", &cShop);
						
						if(cShop == 'B') /*If user wants to buy*/
						{
							while(nSelect != 9)/*Keep on prompting for purchase until leave*/
							{
								system("CLS"); /*Clear screen*/
								nSelect = 0; /*Item select to 0*/
								shopScreen(shop_rms, hand, price, current); /*Open item list*/
								printf("Enter: ");
								scanf("%d", &nSelect);
								validOption(&nSelect, 1, 9); /*Check validity of input*/
								enoughGil(nSelect, &nEnough, current, price); /*Check if user has enough Gil*/
								if(nEnough == 1)
									shopBuy(nSelect, price, &current, &hand); /*Subtract Gil by item price then add On hand item*/
								else if(nSelect == 9);
								else
								{
									printf("\nThat's not enough Gil.\n"); /*If user does not have enough Gil to purchase the item*/
									delay(500); /*Delay before clearing screen*/
								}
							}
						}
						
						else if(cShop == 'S') /*If user wants to sell*/
						{
							while(nSelect != 9) /*Keep on prompting for purchase until leave*/
							{
								system("CLS"); /*Clear screen*/
								shopScreen(shop_rms, hand, price, current); /*Open item list*/
								printf("Enter: ");
								scanf("%d", &nSelect);
								validOption(&nSelect, 1, 9); /*Check validity of user input*/
								enoughHand(nSelect, &nHand, hand, price);
								if(nHand == 1) /*Check if user has enough On hand items to sell*/
									shopSell(nSelect, price, &current, &hand); /*Subtract On hand by 1 then add sell price to Gil*/
								else if(nSelect == 9);
								else
								{
									printf("\nYou don't have that.\n"); /*If user does not have enought On hand items to sell*/
									delay(500); /*Delay before clearing screen*/
								}
							}
						}
					
						else if(cShop == 'L') /*Leave the shop*/
						{
							fflush(stdin);
							printf("\nLeave [C]onfirm\t[B]ack\n\n"); /*Confirm leave of shop*/
							printf("Enter: ");
							scanf("%c", &cConfirm);
							while(cConfirm != 'C' && cConfirm != 'B')
								{
									printf("INVALID\nPlease enter a valid option: ");
									fflush(stdin);
									scanf("%c", &cConfirm);
								}
						}
												
						else /*Invalid input*/
						{
						printf("INVALID");
						delay(500); /*Delay before clearing screen*/
						}
					}
					break;
				
			case 7: cConfirm = '.'; /*Set a random value for confirm leave*/
					while(cConfirm != 'C')
					{
						system("CLS"); /*Clear screen*/
					merchantMenu(current);
					fflush(stdin);
					printf("Enter: ");
					scanf("%d", &nMerchant);
					validOption(&nMerchant, 1, 5);
					
					switch(nMerchant)
					{
						case 1: printf("How much Gil do you want to deposit?: ");
								scanf("%d", &nInput);
								depositCheck(nInput, &current);
								break;
								
						case 2: printf("How much Gil do you want to withdraw?: ");
								scanf("%d", &nInput);
								withdrawCheck(nInput, &current);
								
								break;
						
						case 3: printf("How much debt do you want to pay?: ");
								scanf("%d", &nInput);
								payDebt(nInput, &current);
								break;
								
						case 4: printf("How much do you want?: ");
								scanf("%d", &nInput);
								if(nInput > 0)
								{
									current.gil = current.gil + nInput;
									current.debt = current.debt + nInput;
								}
								else
								printf("You can't loan nothing!\n");
								break;
						
						case 5: 
								
								fflush(stdin);
								printf("\nLeave [C]onfirm\t[B]ack\n\n"); /*Confirm leave of merchant*/
								printf("Enter: ");
								scanf("%c", &cConfirm);
								while(cConfirm != 'C' && cConfirm != 'B')
								{
									printf("INVALID\nPlease enter a valid option: ");
									fflush(stdin);
									scanf("%c", &cConfirm);
								}
								break;
						}
					}
					current.day--; /*If user entered Merchant of the Rift, do not add day*/
					i--; /*If user entered Merchant of the Rift, subtract 1 from i count (for loop in the start)*/
					break;
					
			case 8: i = current.day + 30; /*Finish the game*/
					break;
			}
		current.bank = current.bank * 1.10; /*Bank interest*/
		current.debt = current.debt * 1.15; /*Debt interest*/
		current.day++; /*Add day + 1*/
		}
		system("CLS"); /*Clear screen*/
		fflush(stdin);
		if(current.debt < 0)
			winScreen(current); /*Display win screen*/
		else
			loseScreen(current); /*Display lose screen*/
		finalScreen(current);
		printf("\nPlay Again? [Y]es, [N]o: ");
		scanf("%c", &cPlay);
	}
	system("CLS"); /*Clear screen*/
	printf("\nThank you for playing!");
	
	return 0;
}
