// PRIME NUMBER SERIES
# include <stdio.h>
void main()
{
	int i,j,lim,count=0;
	printf("Enter the limit : ");
	scanf("%d",&lim);
	printf("Prime Numbers from 1 to %d are : \n",lim);
	for(i=1;i<=lim;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				count++;
				break;
			}
		}
		if(count==0 && i!=1)
            printf("%d ", i);
        count = 0;
	}
	return 0;
}

