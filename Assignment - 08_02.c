/*Assignment - 8 C Language LIVE Community Classes MySirg*/
/*2. Write a program to check whether a given number is divisible by 7 or divisible by 3.*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int number;
	
	printf("Enter A Number : ");
	scanf("%d",&number);
	
	if((number % 3 == 0) | (number % 7 == 0))
	{
		printf("%d Is Divisible By 3 Or 7",number);
	}
	else
	{
		printf("%d Is Not Divisible By 3 Or 7",number);
	}
	getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/