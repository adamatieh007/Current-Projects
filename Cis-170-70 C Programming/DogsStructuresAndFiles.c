//Adam Atieh - This program will take in a dog's information and sort it based on whatever the user prefers.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Inventory
{
	char name[60];
	int weight, age;
	float dogyearage;
	int s;
	
};

int recieveInfo(struct Inventory dogInfo[]);
void calculateInfo(struct Inventory dogInfo[], int dogamount);
void displayInfo(struct Inventory dogInfo[], int dogamount);
void writingToFile(struct Inventory dogInfo[], int dogamount, int choice);
void readingInFile(int choice);
 

int main()
{
	int choice, dogamount;
	
	int x = 0;
	
	char filename[20];
	
	char *size[3] = {"Small dog", "Medium dog", "Large dog"};
	

	struct Inventory dogInfo[10];
	
	printf("\n\tWould you like to enter information about your dogs or read this information in from a file?\n");
	printf("\n\t1. Enter information about your dogs. ");
	printf("\n\t2. Read this information in from a file.\n ");
	printf("\n\tEnter the number indicating your choice --> ");
	scanf("%d", & choice);
	
	writingToFile(dogInfo, dogamount, choice);
	
	readingInFile(choice);
	
	
	return 0;
}

int recieveInfo(struct Inventory dogInfo[])
{
	int dogamount, x;
	
	printf("\n\tHow many dogs do you have (Up to 10)? --> ");
	scanf("%d", & dogamount);
	
	while (dogamount > 10)
	{
		printf("\n\tInvalid amount! Only up to 10 dogs please! Try again.\n ");
		printf("\n\tHow many dogs do you have (Up to 10)? --> ");
		scanf("%d", & dogamount);
	}
	
	for (x = 0; x < dogamount; x++)
	{
		printf("\n\tPlease enter the dog's name: ");
		scanf("%s", & dogInfo[x].name);
		
		printf("\n\tPlease enter the dog's weight: ");
		scanf("%d", & dogInfo[x].weight);
		
		while (dogInfo[x].weight < 1)
		{
			printf("\n\tInvalid Weight! The dog has to be at least a pound! Try again.\n");
			printf("\n\tPlease enter the dog's weight: ");
			scanf("%d", & dogInfo[x].weight);
		} 
		
		printf("\n\tPlease enter the dog's age: ");
		scanf("%d", & dogInfo[x].age);
		
		while (dogInfo[x].age < 1)
		{
			printf("\n\tInvalid Age! The dog has to be a year old! Try again.\n");
			printf("\n\tPlease enter the dog's age: ");
			scanf("%d", & dogInfo[x].age);
		}
	}
	
	return dogamount;
}

void calculateInfo(struct Inventory dogInfo[], int dogamount)
{
	int x;
	float abovethree;
	
	
	for (x = 0; x < dogamount; x++)
	{
		if (dogInfo[x].weight <= 20)
		{
			dogInfo[x].s = 0;
		}
		
		else if (dogInfo[x].weight >= 21 || dogInfo[x].weight <= 50)
		{
			dogInfo[x].s = 1;
		}
		
		if (dogInfo[x].weight > 50)
		{
			dogInfo[x].s = 2;
		}
		
	}
	
	for (x = 0; x < dogamount; x++)
	{
		if (dogInfo[x].s == 0)
		{
			dogInfo[x].dogyearage = 0;
			
			if (dogInfo[x].age == 1)
			{
				dogInfo[x].dogyearage += 15;
			}
			
			else if (dogInfo[x].age == 2)
			{
				dogInfo[x].dogyearage += 23;
			}
			
			else if (dogInfo[x].age == 3)
			{
				dogInfo[x].dogyearage += 28;
			}
			
			else if (dogInfo[x].age >= 4)
			{
				abovethree = dogInfo[x].age - 3;
				dogInfo[x].dogyearage = 28 + (4 * abovethree);
			} 
			 
		}
		
		else if (dogInfo[x].s == 1)
		{
			dogInfo[x].dogyearage = 0;
			
			if (dogInfo[x].age == 1)
			{
				dogInfo[x].dogyearage += 14;
			}
			
			else if (dogInfo[x].age == 2)
			{
				dogInfo[x].dogyearage += 23;
			}
			
			else if (dogInfo[x].age == 3)
			{
				dogInfo[x].dogyearage += 30;
			}
			
			else if (dogInfo[x].age >= 4)
			{
				abovethree = dogInfo[x].age - 3;
				dogInfo[x].dogyearage = 30 + (5 * abovethree);
			} 
		}
		
		else if (dogInfo[x].s == 2)
		{
			dogInfo[x].dogyearage = 0;
			
			if (dogInfo[x].age == 1)
			{
				dogInfo[x].dogyearage += 12;
			}
			
			else if (dogInfo[x].age == 2)
			{
				dogInfo[x].dogyearage += 21;
			}
			
			else if (dogInfo[x].age == 3)
			{
				dogInfo[x].dogyearage += 29;
			}
			
			else if (dogInfo[x].age >= 4)
			{
				abovethree = dogInfo[x].age - 3;
				dogInfo[x].dogyearage = 29 + (7 * abovethree);
			} 
		}
	}
	
}

void displayInfo(struct Inventory dogInfo[], int dogamount)
{
	int x;
	
	char *size[3] = {"Small dog", "Medium dog", "Large dog"};
	
	printf("\n\tDog Name: \t\tDog Weight: \t\tYears in Human: \t\tYears in Dog:\n ");
	
	for (x = 0; x < dogamount; x++)
	{
		printf("\n\t%s\t\t\t%s\t\t\t%d\t\t\t%.2f\n", dogInfo[x].name, size[dogInfo[x].s], dogInfo[x].age, dogInfo[x].dogyearage); 
	}

}

void writingToFile(struct Inventory dogInfo[], int dogamount, int choice)
{
	char csv;
		
	int x = 0;
		
	char filename[20];
	
	char *size[3] = {"Small dog", "Medium dog", "Large dog"};
		
		if (choice == 1)
	{
		printf("\n\tWould you like to save your information to a file (Y/N) --> ");
		scanf("\n%c", & csv);
		
		if (csv == 'N' || csv == 'n')
		{
			int dogamount = recieveInfo(dogInfo);
	
			calculateInfo(dogInfo, dogamount);
	
			displayInfo(dogInfo, dogamount);
		}
		
		else
		{
			printf("\n\tEnter the filename: ");
			scanf("%s", & filename);
			
			FILE *fp = fopen(strcat(filename, ".csv"), "w");
			
			if (fp == NULL)
			{
				printf("\n\tError Writing! ");
				exit(0);
			}
			
			int dogamount = recieveInfo(dogInfo);
	
			calculateInfo(dogInfo, dogamount);
			
			for (x = 0; x < dogamount; x++)
				{
					fprintf(fp, "\n\t%s,\t\t\t%s,\t\t\t%d,\t\t\t%.2f,\n", dogInfo[x].name, size[dogInfo[x].s], dogInfo[x].age, dogInfo[x].dogyearage); 
				}
				
			fclose(fp);	
		}
		
	}

}

void readingInFile(int choice)
{
	
	int x = 0;
		
	char filename[20];
	
	char line[100];
	
	char dname[10];
	
	char dsize[10];
	
	int dage;
	
	int dyage;
	
	char *size[3] = {"Small dog", "Medium dog", "Large dog"};
	
	if (choice == 2)
	{
		printf("\n\tEnter the filename: ");
		scanf("%s", filename);
		
		FILE *fp = fopen(filename, "r");
		
		if (fp == NULL)
		{
			printf(	"\n\tError Reading!");
			exit(0);
		} 
		
		char *sp;
		
		printf("\n\t\tDog Name:\tDog Weight:\tYears in Human:\tYears in Dog:\n");
		
		while (fgets(line, 100, fp) != NULL)
		{
			sp = strtok(line, ",");
			strcpy(dname, sp);
			sp = strtok(NULL, ",");
			strcpy(dsize, sp);
			sp = strtok(NULL, ",");
			dage = atoi(sp);
			sp = strtok(NULL, ",");
			dyage = atoi(sp);
			printf("\n\t\t%s \t\t%s \t\t%d \t\t%d", dname, dsize, dage, dyage);
		}
		
		fclose(fp);
			
	}
	
}

