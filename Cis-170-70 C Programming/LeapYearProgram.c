// Adam Atieh - This program will determine if someone's birthyear is a leap year or not.
#include <stdio.h>
int main()
{printf("Please enter your date of birth in the form mm/dd/yyyy\n");
int month, day, year;

printf("DOB: "); 
scanf("%d/%d/%d", & month, & day, & year);

printf("Your birthday, ");

switch(month)
{
	case 1:
		printf("January ");
		break;
	case 2: 
		printf("February ");
		break;
	case 3:
		printf("March ");
		break;
	case 4:
		printf("April ");
		break;
	case 5:
		printf("May ");
		break;
	case 6: 
		printf("June ");
		break;
	case 7: 
		printf("July ");
		break;
	case 8:
		printf("August ");
		break;
	case 9:
		printf("September ");
		break;
	case 10:
		printf("October ");
		break;
	case 11:
		printf("November ");
		break;
	case 12:
		printf("December ");
		break;
	default:
		printf("\n Invalid Month ");
}

switch(day)
{
	case 1:
		printf("1, ");
		break;
	case 2:
		printf("2, ");
		break;
	case 3:
		printf("3, ");
		break;
	case 4:
		printf("4, ");
		break;
	case 5:
		printf("5, ");
		break;
	case 6:
		printf("6, ");
		break;
	case 7:
		printf("7, ");
		break;
	case 8:
		printf("8, ");
		break;
	case 9:
		printf("9, ");
		break;	
	default:
		printf("%d", day);
}

printf(", ");

printf("%d", year);

if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
{
	printf(" is a leap year.");
}
else 
{
		printf(" is not a leap year.");
}




























return 0;
}
