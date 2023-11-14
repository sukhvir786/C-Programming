//WAP to find the factorial of a given number.
# include <stdio.h>
void main()
{
	int n,fact=1,i;
	printf("Enter any positive integer value : ");
	scanf("%d",&n);
	if(n>0)
	{
		for(i=1;i<=n;i++)
		{
			fact = fact*i;
		}
		printf("Factorial : %d",fact);
	}
	else
	{
		printf("Please enter the positive value > 0");
	}
}

