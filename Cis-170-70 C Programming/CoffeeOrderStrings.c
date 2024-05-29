//Adam Atieh - This program will operate as a coffee menu.
#include <string.h>
#include <stdio.h>
void orderCoffee(char size[], char flavorchoice[], char *creamP, char *sugarP);
void displayOrder(char size[], char flavorchoice[], char cream, char sugar);
int main()
{
	
	char again;
	
	do
	{
		char *flavors[5] = {"House", "Iced", "Vanilla", "Hazelnut", "Mocha"};
		
		char size[80];
		char flavorchoice[80];
		
		char cream, sugar;
		
		orderCoffee(size, flavorchoice, & cream, & sugar);
	
		displayOrder(size, flavorchoice, cream, sugar);
		
		printf("\n\tWould you like to order again (Y/N)? --> ");
		scanf("\n%c", & again);
		
		
	}while(again == 'Y' || again == 'y');
	

	
	
	
	
	return 0;
}

void orderCoffee(char size[], char flavorchoice[], char *creamP, char *sugarP)
{
	char *flavors[5] = {"House", "Iced", "Vanilla", "Hazelnut", "Mocha"};
	
	char cream, sugar;
		
	
	
	printf("\n\tWhat size of coffee would you like (Small/Medium/Large)? --> ");
	scanf("%s", size);
	
	size[0] = toupper(size[0]);
	
	int x = 1;
	
	while (size[x] != '\0')
	{
		size[x] = tolower(size[x]);
		x++;
	}
	
	while ((strcmp(size, "Small") != 0) && (strcmp(size, "Medium") != 0) && (strcmp(size, "Large") != 0))
	{
		printf("\n\tInvalid Size! Try again.\n");
		
		printf("\n\tWhat size of coffee would you like (Small/Medium/Large)? --> ");
		scanf("%s", size);
		
		size[0] = toupper(size[0]);
	
		int x = 1;
	
		while (size[x] != '\0')
		{
			size[x] = tolower(size[x]);
			x++;
		}	
	}
	
	
	
	printf("\n\tThe avaliable flavors are:\n ");
	
	int i;
	
	for (i = 0; i < 5; i++)
	{
		printf("\n\t%s", flavors[i]);
	} 
	
	printf("\n\n\tWhat flavor would you like? --> ");
	scanf("%s", flavorchoice);
	
	flavorchoice[0] = toupper(flavorchoice[0]);
	
	int f = 1; 
	
	while (flavorchoice[f] != '\0')
	{
		flavorchoice[f] = tolower(flavorchoice[f]);
		f++;
	}
	
	while ((strcmp(flavorchoice, "House") != 0) && (strcmp(flavorchoice, "Iced") != 0) && (strcmp(flavorchoice, "Vanilla") != 0) && (strcmp(flavorchoice, "Hazelnut") != 0) && (strcmp(flavorchoice, "Mocha") != 0))
	{
		printf("\n\tInvalid Flavor! Try again.\n");
		
		printf("\n\tWhat flavor would you like? --> ");
		scanf("%s", flavorchoice);
		
	
		flavorchoice[0] = toupper(flavorchoice[0]);
	
		int f = 1;
	
		while (flavorchoice[f] != '\0')
		{
			flavorchoice[f] = tolower(flavorchoice[f]);
			f++;
		}
	}

	
	printf("\n\tWould you like cream (Y/N)? --> ");
	scanf("\n%c", creamP);
	
	
	while (*creamP != 'N' && *creamP != 'n' && *creamP != 'Y' && *creamP != 'y')
	{
		printf("\n\tInvalid input! Try again please.\n ");
		
		printf("\n\tWould you like cream (Y/N)? --> ");
		scanf("\n%c", creamP);
	}
	
	printf("\n\tWould you like sugar (Y/N)? --> ");
	scanf("\n%c", sugarP);
	
	while (*sugarP != 'N' && *sugarP != 'n' && *sugarP != 'Y' && *sugarP != 'y')
	{
		printf("\n\tInvalid input! Try again please.\n ");
		
		printf("\n\tWould you like sugar (Y/N)? --> ");
		scanf("\n%c", sugarP);
		
	}
	
	creamP = & cream;
	sugarP = & sugar;
	
	*creamP = cream;
	*sugarP = sugar;
	
	
} 

void displayOrder(char size[], char flavorchoice[], char cream, char sugar)
{
	char *creamsugar[4] = {"with cream and sugar", "with cream", "with sugar", ""};
	
	int c = 3;
	
	float coffeeprice = 0;
	
	if (strcmp(size, "Small") == 0)
	{
		coffeeprice = 3.00;
	}
	
	else if (strcmp(size, "Medium") == 0)
	{
		coffeeprice = 4.50;
	}
	
	else if (strcmp(size, "Large") == 0)
	{
		coffeeprice = 6.00;
	}
	
	
	if (cream == 'Y' || cream == 'y')
	{
		if (sugar == 'Y' || sugar == 'y')
		{
			c = 0;
		}
		
		else if (sugar == 'N' || sugar == 'n')
		{
			c = 1;
		}
	}
	
	if (sugar == 'Y' || sugar == 'y')
	{
		if (cream == 'N' || cream == 'n')
		{
			c = 2;
		}
	}

	
	printf("\n\tYour coffee order: \n");
	
	printf("\n\t%s %s coffee %s\n", size, flavorchoice, creamsugar[c]);
	
	
	printf("\n\tTotal due: %.2f\n", coffeeprice);
	
	
	
}




