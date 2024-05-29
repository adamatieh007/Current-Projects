// Adam Atieh - This program will make a calculator.
#include <stdio.h>

float sumNumbers(float num1, float num2);
float differenceNumbers(float num1, float num2);
float quotientNumbers(float num1, float num2);
float productNumbers(float num1, float num2);

int main()

{
float num1, num2;
char sign; 

printf("Enter two numbers for a calculation: ");
scanf("%f%c%f", & num1, & sign, & num2);

switch (sign) 
{
	case '+':
		printf("The sum is: %.1f", sumNumbers(num1, num2));
		break;
	case '-':
		printf("The difference is: %.1f", differenceNumbers(num1, num2));
		break;
	case '/':
			if (num2 == 0)
		{
			printf("The quotient is undefined. (0)");
		}
		else
		{
			printf("The quotient is: %.1f", quotientNumbers(num1, num2));
		}
		break;
	case '*':
		printf("The product is: %.1f", productNumbers(num1, num2));
		break;
	default:
		printf("Invalid Calculation.");

}

return 0;
}

float sum, difference, quotient, product;
float sumNumbers(float num1, float num2)
{
	sum = num1 + num2;
	return sum;
}

float differenceNumbers(float num1, float num2)
{
	difference = num1 - num2;
	return difference;
}

float quotientNumbers(float num1, float num2)
{
	quotient = num1/num2;
	return quotient;
}

float productNumbers(float num1, float num2)
{
	product = num1*num2;
	return product;
}
