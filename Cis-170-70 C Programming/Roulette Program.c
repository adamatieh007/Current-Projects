//Adam Atieh - This program will run a roulette game.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void showInstructions();
void makeBet(int *choiceP, int *firstoptionP, char *secondoptionP, int *thirdoptionP);
float getBetAmount();
int spinWheel();
float figureWinnings(int choice, int firstoption, char secondoption, int thirdoption, float moneyamount, int generate);


int main()
{
	
	showInstructions();

	do
	{
		int choice, thirdoption, generate, firstoption;
		float winamount, moneyamount;
		char secondoption, betagain;

		makeBet(& choice, & firstoption, & secondoption, & thirdoption);
	
		moneyamount = getBetAmount();
	
		generate = spinWheel();
	
		winamount = figureWinnings(choice, firstoption, secondoption, thirdoption, moneyamount, generate);
		
		printf("\n\tWould you like to bet again? Y/N --> ");
		scanf("\n%c", & betagain);
		
		if (betagain == 'N' || betagain == 'n')
		{
			break;
		}

	} while(1);
	
	
	return 0;
}

void showInstructions()
{
	printf("\n\tWelcome to the roulette game!\n");
	printf("\n\tThe roulette wheel has the numbers 0-36 on it.\n");
	printf("\n\tYou can place your bet in one of three ways:\n ");

	printf("\n\t1. Bet on a number (payout is 36 times the bet amount)\n ");
	printf("\n\t2. Bet on an odd or even (payout is 2 times the bet)\n ");
	printf("\n\t3. Bet on a dozen - first 1-12, second 13-24, or third 25-36 (payout is 3 times the bet)\n ");
	
}

void makeBet(int *choiceP, int *firstoptionP, char *secondoptionP, int *thirdoptionP)
{
	int choice, thirdoption, firstoption;
	char secondoption; 
	

	
	printf("\n\tWhich option would you like to take for your bet? (1, 2, or 3): ");
	scanf("%d", choiceP);
	
	while (*choiceP < 1 || *choiceP > 3)
	{
		printf("\n\tInvalid answer! Pick one of the three options please. \n");
		printf("\n\tWhich option would you like to take for your bet? (1, 2, or 3): ");
		scanf("%d", choiceP);
	}
	
	switch(*choiceP)
	{
		case 1:
			printf("\n\tEnter the number you'd like to bet on (0-36): ");
			scanf("%d", firstoptionP);
			
			while (*firstoptionP < 0 || *firstoptionP > 36)
			{
				printf("\n\tInvalid amount! Try again (0-36)\n ");
				printf("\n\tEnter the number you'd like to bet on (0-36): ");
				scanf("%d", firstoptionP);
			}
			break;
		
		case 2: 
			printf("\n\tEnter whether you want an odd or an even (O/E): ");
			scanf("\n%c", secondoptionP);
			
			while (*secondoptionP != 'O' && *secondoptionP != 'o' && *secondoptionP != 'E' && *secondoptionP != 'e')
			{
				printf("\n\tInvalid choice! Try again and enter if its either an odd or even (O/E)\n ");
				printf("\n\tEnter whether you want an odd or an even (O/E): ");
				scanf("\n%c", secondoptionP);
			}
			break;
		
		case 3: 
			printf("\n\tEnter which dozen you would like (1, 2, or 3): ");
			scanf("%d", thirdoptionP);
			
			while (*thirdoptionP < 0 || *thirdoptionP > 3)
			{
				printf("\n\tInvalid choice! Try again (1-3)\n ");
				printf("\n\tEnter which dozen you would like (1, 2, or 3): ");
				scanf("%d", thirdoptionP);
			}
			break;
	}
	
	choiceP = & choice;
	firstoptionP = & firstoption;
	secondoptionP = & secondoption;
	thirdoptionP = & thirdoption;
	
	
	
	*firstoptionP = firstoption;
	*secondoptionP = secondoption;
	*thirdoptionP = thirdoption;
	*choiceP = choice;
	
}

float getBetAmount()
{
	float moneyamount;
	printf("\n\tEnter the amount of money you would like to bet: ");
	scanf("%f", & moneyamount);
	
	return moneyamount;
}

int spinWheel()
{
	srand(time(0));
	int generate;
	generate = (rand() % 36 + 1);
	
	printf("%d", generate);
	
	return generate;
}

float figureWinnings(int choice, int firstoption, char secondoption, int thirdoption, float moneyamount, int generate)
{
	 float winamount;
	 
	 switch (choice)
	 {
	 	case 1:
	 		if (firstoption == generate)
	 		{
	 			winamount = moneyamount * 36;
	 			printf("\n\tCongratulations! You just won %.2f dollars!\n", winamount);
			}
			
			else
			{
				printf("\n\tSorry! You lost %.2f dollars. Try again soon!\n", moneyamount);
			}
		break;
		
		case 2:
			if (secondoption == 'O' || secondoption == 'o')
			{
				if (generate % 2 != 0)
				{
					winamount = moneyamount * 2;
					printf("\n\tCongratulations! You just won %.2f dollars!\n", winamount);
				}
				
				else
				{
					printf("\n\tSorry! You lost %.2f dollars. Try again soon!\n", moneyamount);
				}
			}
				
			if (secondoption == 'E' || secondoption == 'e')
			{
				if (generate % 2 == 0)
				{
					winamount = moneyamount * 2;
					printf("\n\tCongratulations! You just won %.2f dollars!\n", winamount);
				}
					
				else
				{
					printf("\n\tSorry! You lost %.2f dollars. Try again soon!\n", moneyamount);
				}
			}

		break;
		
		case 3: 
			if (thirdoption = 1)
			{
				if (generate > 0 && generate < 13)
				{
					winamount = moneyamount * 3;
					printf("\n\tCongratulations! You just won %.2f dollars!\n", winamount);
				}
				
			}
			
			
			else if (thirdoption = 2)
			{
				if (generate > 12 && generate < 25)
				{
					winamount = moneyamount * 3;
					printf("\n\tCongratulations! You just won %.2f dollars!\n", winamount);
				}
			}
			
			
			else if (thirdoption = 3)
			{
				if (generate > 24 && generate < 37)
				{
					winamount = moneyamount * 3;
					printf("\n\tCongratulations! You just won %.2f dollars!\n", winamount);
				}
			}
			
			else 
			{
				printf("\n\tSorry! You lost %.2f dollars. Try again soon!\n", moneyamount);
			
			}
			
				
			
		break;
	 }
	 
	 return winamount;
}
