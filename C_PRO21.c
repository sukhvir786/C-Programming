//WAP to find whether the given number is a prime number.
# include <stdio.h>
void main()
{
	int n,x;
	printf("Enter the number for testing(prime or not):");
	scanf("%d",&n);
	for(x=2;x<n;x++)
	{
		if(n%x==0)
		{
			printf("%d is not a prime number",n);
			exit(0);
		}
	}
	printf("%d is a prime no",n);
}


