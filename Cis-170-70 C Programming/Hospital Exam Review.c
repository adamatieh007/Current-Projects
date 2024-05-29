	#include <stdio.h>
int askHospitalDays(int medid, char firstinitial, char lastinitial);
int askSurgeryLevel(int medid, char firstinitial, char lastinitial);
int askMedication(int medid, char firstinitial, char lastinitial, float medicationprices[]);
void calcAndPrintHospitalBill (int medid, char lastinitial, char firstinitial, int hospitaldays, int surgerylevel, int medamount, float surgicalprices[], float labfees[], float medicationprices[]);
int main()
{ // initialize these arrays... 
  float surgicalprices[5] = {1500, 3250, 6579.99, 12999.99, 25450}, labfees[5] = {500, 1025, 2500.99, 5290, 9875.99};

  float medicationprices[10];
  
  int medid;
  char firstinitial, lastinitial;
  
  printf("\n\tPlease enter the patient's Medical ID: ");
  scanf("%d", &medid);

  printf("\n\tPlease enter the patient's last initial: ");
  scanf("\n%c", &lastinitial);
  
  printf("\n\tPlease enter the patient's first initial: ");
  scanf("\n%c", &firstinitial);

  

  int hospitaldays = askHospitalDays(medid, firstinitial, lastinitial);

  int surgerylevel = askSurgeryLevel(medid, firstinitial, lastinitial);

  int medamount = askMedication(medid, firstinitial, lastinitial, medicationprices);

  calcAndPrintHospitalBill (medid, lastinitial,  firstinitial,  hospitaldays,      
  surgerylevel,  medamount,  surgicalprices,  labfees,  medicationprices);
  return 0;
}

int askHospitalDays(int medid, char firstinitial, char lastinitial)
{
  int hospitaldays;
  printf("\n\tHow many days did patient %c.%c #%d stay in the hospital? ", firstinitial, lastinitial, medid);
  scanf("\n\t%d", & hospitaldays);

  while (hospitaldays < 1 || hospitaldays > 21)
    {
      printf("\n\tInvalid amount of days! Try again please. ");
      printf("\n\tHow many days did patient %c.%c #%d stay in the hospital? ", firstinitial, lastinitial, medid);
      scanf("\n\t%d", & hospitaldays);
    }

  return hospitaldays;
}


int askSurgeryLevel(int medid, char firstinitial, char lastinitial)
{
  int surgerylevel;
  printf("\n\tWhat level of surgery did patient %c.%c #%d have(1-5)? ", firstinitial, lastinitial, medid);
  scanf("\n\t%d", & surgerylevel);

  while (surgerylevel < 1 || surgerylevel > 5)
    {
      printf("\n\tInvalid surgery level! Try again please.");
      printf("\n\tWhat level of surgery did patient %c.%c #%d have(1-5)? ", firstinitial, lastinitial, medid);
  scanf("\n\t%d", & surgerylevel);
    }
  return surgerylevel;
}

int askMedication(int medid, char firstinitial, char lastinitial, float medicationprices[])
{
  int x;
  int medamount;  
  
  printf("\n\tHow many medications were used for patient %c.%c #%d?(up to 10) ", firstinitial, lastinitial, medid);
  scanf("\n\t%d", & medamount);

  while (medamount < 1 || medamount > 10)
    {
      printf("\n\tInvalid amount of medications! Try again please. ");
       printf("\n\tHow many medications were used for patient %c.%c #%d?(up to 10) ", firstinitial, lastinitial, medid);
  scanf("\n\t%d", & medamount);
    }

    float accumulate = 0;
    for (x = 1; x <= medamount; x++)
      {
        printf("\n\tEnter price for medication #%d: ", x);
        scanf("\n\t%f", & medicationprices[x-1]);
        accumulate = accumulate + medicationprices[x];
      }
  return medamount;
}

void calcAndPrintHospitalBill (int medid, char lastinitial, char firstinitial, int hospitaldays, int surgerylevel, int medamount, float surgicalprices[], float labfees[], float medicationprices[])
{

  float accumulate = 0;
  int x = 0;
	for (x = 0; x < medamount; x++)
    {
      accumulate = accumulate + medicationprices[x];
    }
  printf("\n\tBilling Statement for Level %d Surgical Procedure.", surgerylevel);

  printf("\n\tPatient:\t\t%c.%c. #%d", firstinitial, lastinitial, medid);

  printf("\n\tDaily Charge:\t\t$ %.2f", 350.0 * hospitaldays);

  printf("\n\tMedication Charges: \t$ %.2f", accumulate);

  printf("\n\tSurgical Charges: \t$ %.2f", surgicalprices[surgerylevel - 1]);

  printf("\n\tLab Fees: \t\t$ %.2f", labfees[surgerylevel - 1]);

  printf("\n\tTotal Due: \t\t$ %.2f", (350 * hospitaldays) + accumulate + surgicalprices[surgerylevel - 1] + labfees[surgerylevel - 1]);

}





