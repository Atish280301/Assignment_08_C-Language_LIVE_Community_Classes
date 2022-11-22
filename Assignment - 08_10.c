/*Assignment - 8 C Language LIVE Community Classes MySirg*/
/*10.Write a C program to input marks of five subjects Physics, Chemistry, Biology,
Mathematics and Computer. Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int physics, chemistry, biology, mathematics, computer, total;
	double res1, percentage;
	
	printf("Enter Mathematics Mark : ");
	scanf("%d",&mathematics);
	
	if(mathematics > 100)
	{
		printf("Enter Mark From Out Of 100\n");
		exit(0);
	}
	
	printf("Enter Computer Mark : ");
	scanf("%d",&computer);
	
	if(computer > 100)
	{
		printf("Enter Mark From Out Of 100\n");
		exit(0);
	}

	printf("Enter Physics Mark : ");
	scanf("%d",&physics);
	
	if(physics > 100)
	{
		printf("Enter Mark From Out Of 100\n");
		exit(0);
	}
	
	printf("Enter Chemistry Mark : ");
	scanf("%d",&chemistry);
	
	if(chemistry > 100)
	{
		printf("Enter Mark From Out Of 100\n");
		exit(0);
	}
	
	printf("Enter Biology Mark : ");
	scanf("%d",&biology);
	
	if(biology > 100)
	{
		printf("Enter Mark From Out Of 100\n");
		exit(0);
	}
	
	printf("\n");
	
	total = physics + chemistry + biology + mathematics + computer;
	
	printf("Total Mark : %d\n",total); 
	
	if(total > 500)
	{
		printf("Invalid Total Mark\n");
	}
	
	percentage = (total * 100)/500;
	
	printf("Percentage  : %lf\n",percentage);
	
	if(percentage >= 90)
	{
		printf("Grade A");
	}
	else if(percentage >= 80)
	{
		printf("Grade B");
	}
	else if(percentage >= 70)
	{
		printf("Grade C");
	}
	else if(percentage >= 60)
	{
		printf("Grade D");
	}
	else if(percentage >= 40)
	{
		printf("Grade E");
	}
	else
	{
		printf("Grade F");
	}
	getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/