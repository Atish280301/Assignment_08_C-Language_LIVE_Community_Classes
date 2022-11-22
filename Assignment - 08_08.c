/*Assignment - 8 C Language LIVE Community Classes MySirg*/
/*8. Write a program which takes the month number as an input and display number of
days in that month.*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int month;
	
	printf("Enter Month Number : ");
	scanf("%d",&month);
	
	if(month >= 12)
	{
		printf("Invalid Month Number");
	}
	else if(month == 2)
	{
		printf("In This Month Either 28 Or 29 Days");
	}
	else if(month % 2 == 0)
	{
		printf("In This Month 30 Days");
	}
	else
	{
		printf("In This Month 31 Days");
	}
	getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/