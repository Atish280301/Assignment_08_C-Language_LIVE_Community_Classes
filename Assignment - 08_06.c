/*Assignment - 8 C Language LIVE Community Classes MySirg*/
/*6. Write a program to check whether a given character is an alphabet (uppercase), an
alphabet (lower case), a digit or a special character.*/

#include<stdio.h>
#include<conio.h>

int main()
{
	char character;
	
	printf("Enter A Character : ");
	scanf("%c",&character);
	
	if((character >= 'A') & (character <= 'Z'))
	{
		printf("%c Is Upeercase Alphabet",character);
	}
	else if((character >= 'a') & (character <= 'z'))
	{
		printf("%c Is Lowercase Alphabet",character);
	}
	else if((character >= '0') & (character <= '9'))
	{
		printf("%c Is Numerical Digit",character);
	}
	else
	{
		printf("%c Is Special Character",character);
	}
	getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/