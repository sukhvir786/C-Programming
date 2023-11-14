//WAP to Compute Quotient and Remainder
# include <stdio.h>
int main()
{
	int a,b,Q,R;
	printf("Enter Dividend and Divisor : \n");
	scanf("%d%d",&a,&b);
	Q = a/b;
	R = a%b;
	printf("%d when divided by %d, gives us\n",a,b);
	printf("Quotient = %d\tRemainder = %d",Q,R);
	return 0;
}
