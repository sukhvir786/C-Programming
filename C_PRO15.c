//WAP to find the larger of two numbers.
# include <stdio.h>
int main()
{
	int a,b;
	printf("Enter any integer value : \n");
	scanf("%d",&a);
	printf("Enter another integer value : \n");
	scanf("%d",&b);
	if(a>b)
	{
		printf("Larger : %d",a);
	}
	else if(b>a)
	{
		printf("Larger : %d",b);
	}
	else
	{
		printf("both the numbers are equal");
	}
	return 0;
}
