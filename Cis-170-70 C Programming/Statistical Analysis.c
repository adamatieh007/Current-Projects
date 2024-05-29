// Adam Atieh - This program will take in an array of 10 integers and finds the smallest, largest, range, mode, and mean. (displays them as well)
#include <stdio.h>
# define MAX 10

void getData(int integers[]);
void displayData(int integers[]);
void displayLargest(int integers[]);
void displaySmallest(int integers[]);
void displayAverage(int integers[]);
void displayRange(int integers[]);
void displayMedian(int integers[]);
void displayMode(int integers[]);


int main()
{
int integers[MAX];

getData(integers);

displayData(integers);

displayLargest(integers);

displaySmallest(integers);
	
displayAverage(integers);
	
displayRange(integers);

displayMedian(integers);

displayMode(integers);

return 0;
}

void displayData(int integers[])
{
		int x;
		
		printf("\n\tThe numbers are: ");
		
		for (x = 0; x < MAX; x++)
	{
		printf("\t%d", integers[x]);
	}

}

void getData(int integers[])
{
		int x;

		for (x = 0; x < MAX; x++)
	{		
		printf("\n\t Enter an integer: ");
		scanf("\n\t%d", & integers[x]);		
	}
	
}

void displayLargest(int integers[])
{
	int x;
	int highest = -99;
		
		for (x = 0; x < MAX; x++)
	{
		if (integers[x] > highest)
		{
			highest = integers[x];
		}
	}
	
	
	printf("\n\tThe highest integer is: %d", highest);
}

void displaySmallest(int integers[])
{
	int x;
	int lowest = 99;
	for (x = 0; x < MAX; x++)
	{
		if (integers[x] < lowest)
		{
			lowest = integers[x];
		}
	}
	
	printf("\n\tThe lowest integer is: %d", lowest);
}

void displayAverage(int integers[])
{
	int x;
	float average;
	float sum;
	for (x = 0; x < MAX; x++)
	{
		sum = sum + integers[x];
	}

	average = sum/MAX;
	printf("\n\tThe average amount is: %.2f", average);
}

void displayRange(int integers[])
{
	int x;
	float range, highest = -99, lowest = 99;
	for (x = 0; x < MAX; x++)
	{
		if (integers[x] > highest)
		{
			highest = integers[x];
		}
	}
	
	for (x = 0; x < MAX; x++)
	{
		if (integers[x] < lowest)
		{
			lowest = integers[x];
		}
	}
	
	range = highest - lowest;
	
	printf("\n\tThe range of the numbers is: %.2f", range);
	
}

void displayMedian(int integers[])
{
	int x, swap;
	int y;
	float median;
	for (y = 0; y < MAX; y++)
	{
		for (x = 0; x < MAX-1; x++)
		{
			if (integers[x] > integers[x+1])
			{
				swap = integers[x];
				integers[x] = integers[x+1];
				integers[x+1] = swap;	
			}
		
		}
	}
	
	if (MAX % 2 != 0)
	{
		median = integers[MAX/2];
	}
	
	else
	{
		median = (integers[MAX-1] + integers[MAX/2])/2.0;
	}

	
	printf("\n\tThe median is : %.2f", median);
	
	//displayData(integers);
	
}

void displayMode(int integers[])
{
	int occurance[MAX] = {0};
	int maxoccurance = 0;
	int mode = 0;
	int i;
	
	for (i = 0; i < MAX; i++)
	{
		occurance[integers[i] - 1]++;
	}
	
	for (i = 0; i < MAX; i++)
	{
		if (occurance[i] > maxoccurance)
		{
			maxoccurance = occurance[i];
			mode = i + 1;
		}
	}
	
	
	printf("\n\tThe mode is: %d", mode);
}



