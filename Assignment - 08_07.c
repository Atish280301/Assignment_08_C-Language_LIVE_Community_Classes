/*Assignment - 8 C Language LIVE Community Classes MySirg*/
/*7. Write a program which takes the length of the sides of a triangle as an input. Display
whether the triangle is valid or not.*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int side1, side2, side3, result;
	
	printf("Enter Traingle Side1 : ");
	scanf("%d",&side1);
	
	printf("Enter Traingle Side2 : ");
	scanf("%d",&side2);
	
	printf("Enter Traingle Side3 : ");
	scanf("%d",&side3);
	
	result = side1 + side2 + side3;
	
	if(result == 180)
	{
		printf("Side1, Side2, Side3 Can Make A Traingle");
	}
	else
	{
		printf("Side1, Side2, Side3 Can Not Make A Traingle");
	}
	getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/