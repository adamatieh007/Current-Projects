// Adam Atieh - This program will make short calculations of driving miles only using two-byte integers.
#include <stdio.h>
int main()
{ short int florida = 2490, colorado = 2780, dailydriving = 6213, carmiles = 27920, avg, totaldriven;
unsigned int totalcarmiles;

totaldriven = colorado + florida + dailydriving;
avg = (florida + colorado)/2;
totalcarmiles = carmiles + totaldriven;

printf("\tThe total number of miles driven by Sally is: %d\n", totaldriven);
printf("\tThe total average number of miles for Sally's two trips is: %d\n", avg);
printf("\tThe total number of miles on Sally's car itself is: %d\n", totalcarmiles);
	
	
	return 0;
}
