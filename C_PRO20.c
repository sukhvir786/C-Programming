//WAP to Make a Simple Calculator Using switch...case
#include<stdio.h>
void main()
{
	float x,y,ans;
	int ch;
	printf("Enter two numbers : \n");
	scanf("%f%f",&x,&y);
	printf("-----MENU-----\n");
	printf("--1.Addition\n");
	printf("--2.Substraction\n");
	printf("--3.Multiplication\n");
	printf("--4.Division\n");
	printf("Enter your choice :\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			ans = x+y;
			printf("Addition = %0.0f",ans);
			break;
		case 2:
			ans = x-y;
			printf("Substraction = %0.0f",ans);
			break;
		case 3:
			ans = x*y;
			printf("Multiplication = %0.0f",ans);
			break;
		case 4:
			if(y!=0)
			{
				ans = x/y;
				printf("Division = %0.2f",ans);
			}
			else
			{
				printf("Div by 0 is not Possible");
			}
			break;
		default:
			printf("Please enter the correct choice");
			break;
	}
	
}

