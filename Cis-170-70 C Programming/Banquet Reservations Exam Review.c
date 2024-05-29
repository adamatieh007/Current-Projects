//Adam Atieh - Practice Exam Banquet 
#include <stdio.h>
char determineBanquetRoom(int guests);
float determineRoomPrice(char banquetroom);
float determineFoodPrice(int guests);
float determineEquipmentPrice();
void displayPrices(char banquetroom, int guests, float prices[]);


int main()
{
	int guests;
	float prices[4] = {0, 0, 0, 0};
	float numOfTables;
	char equipchoice;
	
	printf("\n\tWelcome to Holiday Banquet Center!\n ");
	
	printf("\n\tHow many guests do you expect? ---> ");
	
	scanf("%d", & guests);
	
	char banquetroom = determineBanquetRoom(guests); 
	
	prices[0] = determineRoomPrice(banquetroom);
	
	numOfTables = (guests / 10) + 2;
	
	prices[1] = numOfTables * 15.00;
 	
	prices[2] = determineFoodPrice(guests);
	
	printf("\n\tDo you need additional equipment Y/N? ");
	scanf("\n%c", & equipchoice);
	
	if (equipchoice == 'Y' || equipchoice == 'y')
	{
		prices[3] = determineEquipmentPrice();
	}
	
	displayPrices(banquetroom, guests, prices);


	
	return 0;
}

char determineBanquetRoom(int guests)
{
	
	char banquetroom;
	printf("\n\tBased on the number of guests,\n");
	printf("\n\tyou have the choice of the following rooms:\n ");
	
	if (guests >= 15 && guests <= 25)
	{
		printf("\n\tC - Cozy Cabin\n ");
	}
	
	if (guests >= 15 && guests <= 75)
	{
		printf("\n\tP - Purple Parlor\n");
	}
	
	if (guests >= 50 && guests <= 125)
	{
		printf("\n\tD - Deluxe Dining\n ");
	}
	
	if (guests >= 50 && guests <= 150)
	{
		printf("\n\tB - Big Ballroom\n ");
	}
	
	if (guests >= 100 && guests <= 250)
	{
		printf("\n\tG - Grand Guestroom\n ");
	}
	
	printf("\n\tPlease choose from the rooms above: --> ");
	scanf("\n%c", & banquetroom);
	
	return banquetroom;
}

float determineRoomPrice(char banquetroom)
{
	float roomPrice;
	
	switch (banquetroom)
	{
		case 'C':case 'c':
			roomPrice = 250.00;
			break;
		
		case 'P':case 'p':
			roomPrice = 250.00;
			break;
		
		case 'D': case'd':
			roomPrice = 500.00;
			break;
		
		case 'B':case'b':
			roomPrice = 500.00;
			break;
		
		case 'G':case 'g':
			roomPrice = 750.00;
			break;
	}
	
	return roomPrice;
}

float determineFoodPrice(int guests)
{
	int entree;
	float foodPrice;
	char dessert;
	printf("\n\tWould you like one entree or two? ");
	scanf("%d", & entree);
	
	while (entree != 1 && entree != 2)
	{
		printf("\n\tInvalid number! Only a 1 or a 2. Try again please!\n ");
		printf("\n\tWould you like one entree or two? ");
		scanf("%d", & entree);
	}
	
	switch (entree)
	{
		case 1:
			foodPrice = guests * 17.00;
			break;
			
		case 2:
			foodPrice = guests * 19.50;
	}
	
	printf("\n\tWould you like dessert Y/N? ");
	scanf("\n%c", & dessert);
	
	if (dessert == 'Y' || dessert == 'y')
	{
		foodPrice = foodPrice + (guests * 2);
	}
	
	return foodPrice;
}

float determineEquipmentPrice()
{
	int choice;
	float equipPrice;
	do
	{
		printf("\n\t1 - Projector $ 100.00\n ");
		printf("\n\t2 - Screen $ 25.00\n ");
		printf("\n\t3 - Sound Box $ 50.00\n ");
		printf("\n\t4 - 8-foot Table $ 10.00\n ");
		printf("\n\t5 - Easel $ 5.00\n ");
		printf("\n\tEnter a choice or 0 to quit: ");	
		scanf("%d", & choice);
		
		if (choice == 0)
		{
			break;
		}
		
		switch (choice)
		{
			case 1:
				equipPrice = equipPrice + 100;
				break;
			case 2:
				equipPrice = equipPrice + 25;
				break;
			case 3:
				equipPrice = equipPrice + 50;
				break;
			case 4:
				equipPrice = equipPrice + 10;
				break;
			case 5:
				equipPrice = equipPrice + 5;
				break;
		}
		
		printf("\n\tYour equipment cost is currently: $%.2f\n ", equipPrice);
		
	}while(1);
	
	return equipPrice;
}

void displayPrices(char banquetroom, int guests, float prices[])
{
	int x;
	float totalPrice = 0;
	switch (banquetroom)
	{
		case 'C':case 'c':
			printf("\n\tYour quote to the Cozy Cabin for %d guests will be:\n ", guests);
			break;
		
		case 'P':case 'p':
			printf("\n\tYour quote to the Purple Parlor for %d guests will be:\n ", guests);
			break;
		
		case 'D': case'd':
			printf("\n\tYour quote to the Deluxe Dining for %d guests will be:\n ", guests);
			break;
		
		case 'B':case'b':
			printf("\n\tYour quote to the Big Ballroom for %d guests will be:\n ", guests);
			break;
		
		case 'G':case 'g':
			printf("\n\tYour quote to the Grand Guest for %d guests will be:\n ", guests);
			break;
	}
	
	for (x = 0; x < 4; x++)
	{
		totalPrice+=prices[x];
	}
	
	printf("\n\tRoom Price:\t $%.2f\n ", prices[0]);
	printf("\n\tTable Price:\t $%.2f\n ", prices[1]);
	printf("\n\tFood Price:\t $%.2f\n ", prices[2]);
	printf("\n\tEquipment Price: $%.2f\n ", prices[3]);
	printf("\n\tService Fee:\t $%.2f\n ", (totalPrice * .21));
	printf("\n\tFinal Price:\t $%.2f\n ", prices[0] + prices[1] + prices[2] + prices[3] + (totalPrice * .21));
	
	
}

