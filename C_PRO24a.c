// Factorial of a Number using Recursion
#include<stdio.h>
int main()
{
    int m,FACT(int);
    printf("Enter any +ve integer value : \n");
    scanf("%d",&m);
    if(m>=0)
    {
    	printf("Factorial of %d is %d",m,FACT(m));
	}
    else
    {
    	printf("Kindly enter +ve value");
	}
    return 0;
}

int FACT(int n)
{
    if(n==0)
    {
    	return (1); 
	}
    else
    {
    	return(n*FACT(n-1));
	}
}


