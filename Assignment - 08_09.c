/*Assignment - 8 C Language LIVE Community Classes MySirg*/
/*9. Write a program to find the nature of roots of a quadratic equation.*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	double A, B, C, A2, res1, result1, result2, resultdiv1, resultdiv2, check1, check2;
	printf("Enter Value Of A : ");
	scanf("%lf",&A);
	
	printf("Enter Value Of B : ");
	scanf("%lf",&B);
	
	printf("Enter Value Of C  : ");
	scanf("%lf",&C);
	
	res1 = pow(B,2)-4 * A * C;
	
	A2 = 2 * A;
	
	printf("\n");
	
	result1 = -B + sqrt(res1);
	resultdiv1 = result1/A2;
	printf("X Value In Positive : %lf\n",resultdiv1);
	
	result2 = -B - sqrt(res1);
	resultdiv2 = result2/A2;
	printf("X Value In Negative : %lf\n",resultdiv2);
	
	printf("\n");
	
	check1 = A * pow(resultdiv1,2)+ B * resultdiv1 + C;
	printf("Resultant Output When X Is Positive : %lf\n",check1);
	
	check2 = A * pow(resultdiv2,2)+ B * resultdiv2 + C;
	printf("Resultant Output When X Is Negative : %lf\n",check2);
	
	getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/