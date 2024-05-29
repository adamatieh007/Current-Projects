// Adam Atieh - This program will ask user to order from an ice cream menu
#include <stdio.h>

char findFlavor(void);
void showTotal(int, int, int, int, float);
int main()


{
	int vanilla = 0, chocolate = 0, fudge = 0, cone = 0;
	float scoops, price, totalprice = 0;

do
{
	char flavor = findFlavor();
	
	if (flavor == 'q' || flavor == 'Q')
	{
		break;
	}
	
	switch (flavor)
	{
		case 'V': case 'v':
			cone++;	
			break;
		
		case 'C': case 'c':
			cone++;
			break;
	
		case 'F': case 'f':
			cone++;
			break;
		
		default:
			printf("\tInvalid Flavor! Try Again\n");
			continue;
	}
		
	
	printf("\tHow many scoops would you like? ");
	scanf("%f", & scoops);
	
while (scoops < 0 || scoops > 4 )
	{
		printf("Invalid amount! It must be between 1 and 4 scoops. Try again.\n");
		printf("\tHow many scoops would you like? ");
		scanf("%f", & scoops);
	}

if (flavor == 'V' || flavor == 'v')
	vanilla = vanilla + scoops;
		
if (flavor == 'C' || flavor == 'c')
	chocolate = chocolate + scoops;
	
if (flavor == 'F' || flavor == 'f')
	fudge = fudge + scoops;
	
	
	
	price = (1.25 * scoops) + .75;
	
	printf("Your ice cream cone cost: $%.2f\n", price);
	
	totalprice = totalprice + price;
	
} while (1);

showTotal(cone, vanilla, chocolate, fudge, totalprice);

return 0;
}

char findFlavor(void)
{
	char choice;
	printf("\tPlease choose your favorite Ice Cream Flavor!\n");
	printf("\tV - Vanilla\n");
	printf("\tC - Chocolate\n");
	printf("\tF - Fudge\n");	
	printf("\tQ - Quit\n");
	printf("-------> ");
	scanf("\n%c", & choice);
	
	return choice;
}

void showTotal(int cone, int vanilla, int chocolate, int fudge, float totalprice)
{
	printf("\tThe total number of cones sold are: %d\n", cone);
	printf("\tThe total scoops of vanilla sold are: %d\n", vanilla);
	printf("\tThe total scoops of chocolate sold are: %d\n", chocolate);
	printf("\tThe total scoops of fudge sold are: %d\n", fudge);
	printf("\tThe total amount collected: $%.2f", totalprice);
}
	
