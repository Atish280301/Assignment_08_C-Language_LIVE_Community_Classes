/*Assignment - 8 C Language LIVE Community Classes MySirg*/
/*4. Write a program to check whether a given year is a leap year or not.*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int year;
	
	printf("Enter Value Of Year : ");
	scanf("%d",&year);
	
	if(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
	{
		printf("%d Is Leap Year",year);
	}
	else
	{
		printf("%d Is Not Leap Year",year);
	}
	getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/