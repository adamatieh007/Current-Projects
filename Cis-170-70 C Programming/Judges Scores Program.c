// Adam Atieh - This program will take in 4 judges scores, drop the lowest and highest, average the two remaining scores, and display the results. 
#include <stdio.h>

float findScores(void);

float findLowest(float judge1, float judge2, float judge3, float judge4);

float findHighest(float judge1, float judge2, float judge3, float judge4);

float finalResult(float judge1, float judge2, float judge3, float judge4, float highest, float lowest);

float showScore(float judge1, float judge2, float judge3, float judge4, float highest, float lowest, float calculation);

int main()

{printf("\tEnter Scores for 4 different judges:\n");

float judge1 = findScores();

float judge2 = findScores();

float judge3 = findScores();

float judge4 = findScores();

float lowest = findLowest(judge1, judge2, judge3, judge4);

float highest = findHighest(judge1, judge2, judge3, judge4);

float calculation = finalResult(judge1, judge2, judge3, judge4, highest, lowest);

float score = showScore(judge1, judge2, judge3, judge4, highest, lowest, calculation);

return 0;
}
float lowest = 100; 
float highest = -99;

float findScores(void)
{
	float number;
	
	printf("\tEnter a Score for a Judge : ");
	scanf("%f", & number);
	

	
	return number;
}
float findLowest(float judge1, float judge2, float judge3, float judge4)
{
	if (judge1 < lowest)
		lowest = judge1;
	
	if (judge2 < lowest)
		lowest = judge2;
	
	if (judge3 < lowest)
		lowest = judge3;
	
	if (judge4 < lowest)
		lowest = judge4;
	
	return lowest;
}

float findHighest(float judge1, float judge2, float judge3, float judge4)
{
	if (judge1 > highest)
		highest = judge1;
	
	if (judge2 > highest)
		highest = judge2;
	
	if (judge3 > highest)
		highest = judge3;
	
	if (judge4 > highest)
		highest = judge4;	
	
	return highest;
}

float finalResult(float judge1, float judge2, float judge3, float judge4, float highest, float lowest)
{
	float calculation;
	calculation = (judge1 + judge2 + judge3 + judge4 - highest - lowest)/2;
	
	return calculation;
}

float showScore(float judge1, float judge2, float judge3, float judge4, float highest, float lowest, float calculation)
{
	return printf("\tJudge 1 Score: %.2f\n", judge1) && printf("\tJudge 2 Score: %.2f\n", judge2) && printf("\tJudge 3 Score: %.2f\n", judge3) && printf("\tJudge 4 Score: %.2f\n", judge4) && printf("\tFinal Score: %.2f\n", calculation);
}
