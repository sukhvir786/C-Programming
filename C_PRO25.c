//WAP to print the sum of two matrices
# include <stdio.h>
int main()
{
	int i,j,r1,c1,a1[10][10];
	int r2,c2,a2[10][10];
	//1st Matrix
	printf("for 1st Matrix\n");
	printf("No of Rows : ");
	scanf("%d",&r1);
	printf("No of Columns : ");
	scanf("%d",&c1);
	printf("Enter elements : \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a1[i][j]);
		}
	}
	printf("1st Matrix is : \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d ",a1[i][j]);
		}
		printf("\n");
	}
	//2nd Matrix
	printf("for 2nd Matrix\n");
	printf("No of Rows : ");
	scanf("%d",&r2);
	printf("No of Columns : ");
	scanf("%d",&c2);
	printf("Enter elements : \n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&a2[i][j]);
		}
	}
	printf("2nd Matrix is : \n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d ",a2[i][j]);
		}
		printf("\n");
	}
	//Addition of Matrices
	if(r1==r2 && c1==c2)
	{
		printf("Addition of Matrices is : \n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{	
				printf("%d ",a1[i][j]+a2[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("Addition is not possible");
	}
	return 0;
}

