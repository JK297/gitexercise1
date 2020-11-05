#include <stdio.h>
/***
    Simple calculator
***/

int main()
{
	float num1;
	float num2;
	float ans;
	char op;

	printf("Enter an operator (+,-,/,*):\n");                       //Abfrage welche Rechenart man will
	scanf("%c",&op);                                                //Einscannen von Rechenart

	printf("\nEnter two numbers: ");                                //Frage welche Zahlen man nehmen will
	scanf("%f",&num1);                                              //Einsannen erste Zahl
	scanf("%f",&num2);                                              //Einscannen zweite Zahl

	switch(op)                                                      //Schaut welche Rechenart man benutzt
	{
		case '+':                                               //Addition
		ans = num1+num2;                                        //Rechnung für Addition
	break;

        case '-':                                                   	//Subtrahieren
		ans = num1-num2;                                        //Rechnung für Subtrahieren
		break;

        case '/':                                                  	//Division
		ans = num1/num2;                                        //Rechnung für Division
		break;

        case '*':                                                   	//Multiplikation
		ans = num1*num2;                                        //Rechnung für Multiplikation
		break;

	default:                                                    	//Eingabe ist falsch
		printf("Enter a correct operator!");                    //Ausgabe für falsche Rechenart
		return 1;
	}

	printf("\nThe result is as follows:\n");                        //Ergebnisausgabe
	printf("%.1f %c %.1f = %.1f",num1, op ,num2,ans);               //Ergebnis wird Ausgegeben
	return 0;
}

