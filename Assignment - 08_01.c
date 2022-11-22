/*Assignment - 8 C Language LIVE Community Classes MySirg*/
/*1. Write a program to check whether a given number is divisible by 3 and divisible by 2.*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int number;
	
	printf("Enter A Number : ");
	scanf("%d",&number);
	
	if((number % 2 == 0) & (number % 3 == 0))
	{
		printf("%d Is Divisible By 2 & 3",number);
	}
	else
	{
		printf("%d Is Not Divisible By 2 & 3",number);
	}
	
	getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/