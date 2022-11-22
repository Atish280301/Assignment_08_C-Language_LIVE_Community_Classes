/*Assignment - 8 C Language LIVE Community Classes MySirg*/
/*3. Write a program to check whether a given number is positive, negative or zero.*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int number;
	
	printf("Enter A Number : ");
	scanf("%d",&number);
	
	if(number > 0)
	{
		printf("%d Is Positive Number",number);
	}
	else if(number < 0)
	{
		printf("%d Is Negative Number",number);
	}
	else
	{
		printf("%d Is Zero",number);
	}
	getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/