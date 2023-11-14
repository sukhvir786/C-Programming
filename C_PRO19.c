//WAP to Generate Multiplication Table Using while loop
# include <stdio.h>
int main()
{
	int n,i=1;
	printf("Table for : ");
	scanf("%d",&n);
	while(i<=10)
	{
		printf("%d * %d = %d\n",n,i,n*i);
		i++;
	}
	return 0;
}

