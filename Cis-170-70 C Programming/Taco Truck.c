//Adam Atieh - This program will ask users to order from a taco truck.
#include <stdio.h>
char askMenu();
int tacoOptions();
int burritoOptions();
int quesadillaOptions();
int nachoOptions();
void displayOrder(int, int, int, int, float);

int main()
{printf("\tWelcome to Tomas Taco Truck!");

char anotherorder, addorder, menuselection,  extracheese;
int tacomenu, burritomenu, quesadillamenu, nachomenu, taco = 0, burrito = 0, quesadilla = 0, nacho = 0;
float tacoprice = 0, burritoprice = 0, quesadillaprice =  0, nachoprice = 0, totaltaco = 0, totalburrito = 0, totalquesadilla = 0, totalnacho = 0, totalprice; 

printf("\n\tWould you like to place an order? ");
scanf("\n%c", & anotherorder);



do 
{
int taco = 0;
int burrrito = 0;
int nacho = 0;
while (anotherorder == 'Y' || anotherorder == 'y')
{

menuselection = askMenu();


switch(menuselection)
{
	
	float tacoprice = 0, totaltaco = 0;
	case 'T':case 't':
		taco++;
		tacomenu = tacoOptions();
		
		while (tacomenu < 0 || tacomenu > 3)
		{
			printf("\n\tInvalid number! Try again please. ");
			printf("\n\n\t1 - Regular Taco $ 1.99");
			printf("\n\t2- Super Taco $ 2.99");
			printf("\n\t3 - Veggie Taco $ 1.99");
			printf("\n\tChoose a Taco: ");
			scanf("\n%d", & tacomenu);
		}
		
		break;
	
	float burritoprice = 0, totalburrito = 0;
	case 'B':case 'b':
		burrito++;
		burritomenu = burritoOptions();
		
		while (burritomenu < 0 || burritomenu > 6)
		{
			printf("\n\tInvalid number! Try again please. ");
			printf("\n\n\t1 - Regular Burrito $ 2.99");
			printf("\n\t2 - Super Burrito $ 3.99");
			printf("\n\t3 - Veggie Burrito $ 2.99");
			printf("\n\t4 - Bean & Rice Burrito $ 1.99");
			printf("\n\t5 - Bean, Rice, & Cheese Burrito $ 1.99");
			printf("\n\t6 - Burrito Bowl $ 4.99");
			printf("\n\tChoose a Burrito: ");
			scanf("\n%d", & burritomenu);
		}
		
		break;
	
	float quesadillaprice = 0, totalquesadilla = 0;
	case 'Q':case 'q':
		quesadilla++;
		quesadillamenu = quesadillaOptions();
		
		while (quesadillamenu < 0 || quesadillamenu > 4)
		{
			printf("\n\tInvalid number! Try again please. ");
			printf("\n\t1 - Regular Quesadilla $ 1.99");
			printf("\n\t2 - Meat Quesadilla $ 2.99");
			printf("\n\t3 - Beef Quesadilla $ 3.99");
			printf("\n\t4 - Super Quesadilla $ 4.99");
			printf("\n\tChoose a Quesadilla: ");
			scanf("\n%d", & quesadillamenu);
		}
		
		break;
	
	
	float nachoprice = 0, totalnacho = 0;
	
	case 'N':case 'n':
		nacho++;
		nachomenu = nachoOptions();
		
		while (nachomenu < 0 || nachomenu > 2)
		{
			printf("\n\tInvalid number! Try again please. ");
			printf("\n\t1 - Regular Nacho $ 3.99");
			printf("\n\t2 - Super Nacho $ 5.99");
			printf("\n\tChoose a Nacho: ");
			scanf("\n%d", & nachomenu);
		}
		
		printf("\n\tWould you like extra cheese for $ 1.00? ");
		scanf("\n%c", & extracheese);
		
		while (extracheese != 'Y' && extracheese != 'y' && extracheese != 'n' && extracheese != 'N')
		{
			printf("\n\tInvalid answer! Try again please. ");
			printf("\n\tWould you like extra cheese for $ 1.00? ");
			scanf("\n\n%c", & extracheese);
		}
		break;
	
	default:
		printf("\n\tInvalid Option! Try again.");
		continue;
}


switch (tacomenu)
{
	case 1:case 3:
		tacoprice = 1.99;
	
		
		break;
	case 2:
		tacoprice = 2.99;
		break;
	
}


switch (burritomenu)
{
	case 1:case 3:
		burritoprice = 2.99;
		break;
	case 2:
		burritoprice = 3.99;
		break;
	case 4:case 5:
		burritoprice = 1.99;
		break;
	case 6:
		burritoprice = 4.99;
		break;
}

switch (quesadillamenu)
{
	case 1:
		quesadillaprice = 1.99;
		break;
	case 2:
		quesadillaprice = 2.99;
		break;
	case 3:
		quesadillaprice = 3.99;
		break;
	case 4:
		quesadillaprice = 4.99;
		break;
}


switch (nachomenu)
{
	case 1:
		nachoprice = 3.99;
		break;
	case 2:
		nachoprice = 5.99;
		break;
}

while (extracheese == 'Y'|| extracheese == 'y')
{
	nachoprice++;
	break;
}


float totaltaco = 0, totalburrito = 0, totalquesadilla = 0, totalnacho = 0;

totaltaco = totaltaco + tacoprice;
totalburrito = totalburrito + burritoprice;
totalquesadilla = totalquesadilla + quesadillaprice;
totalnacho = totalnacho + nachoprice;

printf("\n\tWould you like to add to your order? ");
scanf("\n%c", & anotherorder);

}

totalprice = totaltaco + totalburrito + totalquesadilla + totalnacho;

displayOrder(taco, burrito, quesadilla, nacho, totalprice);

break;

}while(1);


	return 0;
}

char askMenu()
{
	char choice;
	printf("\n\tPlease choose from the following menu categories: ");
	printf("\n\tT - Tacos");
	printf("\n\tB - Burritos");
	printf("\n\tQ - Quesadillas");
	printf("\n\tN - Nachos");
	printf("\n-------> ");
	scanf("\n%c", & choice);
	
	return choice;
}

int tacoOptions()
{
	int tacochoice;
	printf("\n\t1 - Regular Taco $ 1.99");
	printf("\n\t2- Super Taco $ 2.99");
	printf("\n\t3 - Veggie Taco $ 1.99");
	printf("\n\tChoose a Taco: ");
	scanf("\n%d", & tacochoice);
	
	return tacochoice;
}

int burritoOptions()
{
	int burritochoice;
	printf("\n\t1 - Regular Burrito $ 2.99");
	printf("\n\t2 - Super Burrito $ 3.99");
	printf("\n\t3 - Veggie Burrito $ 2.99");
	printf("\n\t4 - Bean & Rice Burrito $ 1.99");
	printf("\n\t5 - Bean, Rice, & Cheese Burrito $ 1.99");
	printf("\n\t6 - Burrito Bowl $ 4.99");
	printf("\n\tChoose a Burrito: ");
	scanf("\n%d", & burritochoice);
	
	return burritochoice;
}

int quesadillaOptions()
{
	int quesadillachoice;
	printf("\n\t1 - Regular Quesadilla $ 1.99");
	printf("\n\t2 - Meat Quesadilla $ 2.99");
	printf("\n\t3 - Beef Quesadilla $ 3.99");
	printf("\n\t4 - Super Quesadilla $ 4.99");
	printf("\n\tChoose a Quesadilla: ");
	scanf("\n%d", & quesadillachoice);
	
	return quesadillachoice;
}

int nachoOptions()
{
	int nachochoice;
	printf("\n\t1 - Regular Nacho $ 3.99");
	printf("\n\t2 - Super Nacho $ 5.99");
	printf("\n\tChoose a Nacho: ");
	scanf("\n%d", & nachochoice);
	
	return nachochoice;
}

void displayOrder(int taco, int burrito, int quesadilla, int nacho, float totalprice)
{	
	printf("\n\tYour order consists of: ");
	printf("\n\t\tTotal Tacos: %d", taco);
	printf("\n\t\tTotal Burritos: %d", burrito);
	printf("\n\t\tTotal Quesadillas: %d", quesadilla);
	printf("\n\t\tTotal Nachos: %d", nacho);
	printf("\n\n\t\tTotal Due: $%.2f", totalprice);
	printf("\n\tThank you for choosing Tomas Taco Truck!");
}
