// Adam Atieh - This program will accept inputs of people who know certain programming languages and accumulate the students as well as other totals. 
#include <stdio.h>
int main()

{printf("\tWelcome to the Calumet High School Programming Survey \n");
 printf("\tPlease enter the number of students who know: \n");
 int htmlusers, javausers, cplususers, csharpusers, javascriptusers, phpusers, swiftusers, kotlinusers, pythonusers, totalstudents, totalweb, totalmobileapp, totalobjoriented;
 
 printf("\tHTML: ");
 scanf("%d", & htmlusers);
 
 printf("\tJava: ");
 scanf("%d", & javausers);
 
 printf("\tC++: ");
 scanf("%d", & cplususers);
 
 printf("\tC#: ");
 scanf("%d", & csharpusers);
 
 printf("\tJavaScript: ");
 scanf("%d", & javascriptusers);
 
 printf("\tPhP: ");
 scanf("%d", & phpusers);
 
 printf("\tSwift: ");
 scanf("%d", & swiftusers);
 
 printf("\tKotlin: ");
 scanf("%d", & kotlinusers);
 
 printf("\tPython: ");
 scanf("%d", & pythonusers);
 
 totalstudents = htmlusers + javausers + cplususers + csharpusers + javascriptusers + phpusers + swiftusers + kotlinusers + pythonusers;
 totalweb = javascriptusers +  phpusers + htmlusers;
 totalmobileapp = swiftusers + kotlinusers;
 totalobjoriented = javausers + cplususers + csharpusers + pythonusers; 

 printf("\tTotal students: %d\n", totalstudents);
 printf("\tTotal who know Web Languages: %d\n", totalweb);
 printf("\tTotal who know Mobile App Dev Languages: %d\n", totalmobileapp);
 printf("\tTotal who know Object Oriented languages: %d\n", totalobjoriented);







return 0;
}
