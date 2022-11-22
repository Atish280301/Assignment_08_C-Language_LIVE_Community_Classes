/*Assignment - 8 C Language LIVE Community Classes MySirg*/
/*5. Write a program to find greater among three numbers. If two or three numbers are
identical and greatest among all then print it only once.*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int number1, number2, number3;
	
	printf("Enter First Number : ");
	scanf("%d",&number1);
	
	printf("Enter Second Number : ");
	scanf("%d",&number2);
	
	printf("Enter Third Number : ");
	scanf("%d",&number3);
	
	if((number1 > number2) & (number1 > number3))
	{
		printf("%d Number1 Is Greatest Among Three Number",number1);
	}
	else if((number2 > number1) & (number2 > number3))
	{
		printf("%d Number2 Is Greatest Among Three Number",number2);
	}
	else
	{
		printf("%d Number3 Is Greatest Among Three Number",number3);	
	}
	getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/