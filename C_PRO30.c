// Program to convert the string into upper and lower case
# include <stdio.h>
# include <string.h>
void main()
{
	char S[100];
	puts("Enter any string : ");
	gets(S);
	printf("Entered string is : %s",S);
	printf("\nString in upper case is : %s",strupr(S));
	printf("\nString in lower case is : %s",strlwr(S));
}

