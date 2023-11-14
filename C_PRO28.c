//WAP to compare a string
# include <stdio.h>
# include <string.h>
void main()
{
	char t1[30],t2[30];
	int n;
	puts("Enter any string : ");
	gets(t1);
	puts("Enter another string : ");
	gets(t2);
	printf("First string is : %s",t1);
	printf("\nSecond string is : %s",t2);
	n = strcmp(t1,t2);
	if (n==0)
	{
		printf("\nBoth the strings are equal");
	}
	else
	{
		printf("\nThe strings are not equal");
	}
}

