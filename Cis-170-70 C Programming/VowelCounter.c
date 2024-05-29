//Adam Atieh - This program will take in a sentence and count and total the vowels in it.

#include <stdio.h>

int vowelTotals(char vowels[200], int totals[6], int vowA, int vowE, int vowI, int vowO, int vowU);
int main()
{
	int vowA = 0, vowE = 0, vowI = 0, vowO = 0, vowU = 0;
	char vowels[200];
	
	printf("\n\tEnter a sentence: ");
	fgets(vowels, 200, stdin);
	
	int totals[6] = {0, 0, 0, 0, 0, 0};
	
	vowelTotals(vowels, totals, vowA, vowE, vowI, vowO, vowU);
	
	printf("\n\tTotal A's: %d\n", totals[0]);
	printf("\n\tTotal E's: %d\n", totals[1]);
	printf("\n\tTotal I's: %d\n", totals[2]);
	printf("\n\tTotal O's: %d\n", totals[3]);
	printf("\n\tTotal U's: %d\n", totals[4]);
	
	printf("\n\tTotal Vowels: %d", totals[5]);
	
	
	return 0;
}

int vowelTotals(char vowels[200], int totals[6], int vowA, int vowE, int vowI, int vowO, int vowU)
{
	int x;
	
	for (x = 0; x < vowels[x]; x++)
	{
		if (vowels[x] == 'A' || vowels[x] == 'a')
		{
			vowA++;
		} 
		else if (vowels[x] == 'E' || vowels[x] == 'e')
		{
			vowE++;
		}
		else if (vowels[x] == 'I' || vowels[x] == 'i')
		{
			vowI++;	
		}
		else if (vowels[x] == 'O' || vowels[x] == 'o')
		{
			vowO++;
		}
		else if (vowels[x] == 'U' || vowels[x] == 'u')
		{
			vowU++;
		}
		
	}
	
	totals[0] = vowA;
	totals[1] = vowE;
	totals[2] = vowI;
	totals[3] = vowO;
	totals[4] = vowU;
	totals[5] = vowA + vowE + vowI + vowO + vowU;
	
	return totals[6];
}
