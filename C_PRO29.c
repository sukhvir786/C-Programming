//WAP to reverse a string
# include <stdio.h>
# include <string.h>
void main()
{
	char S[100];
	puts("Enter any string : ");
	gets(S);
	printf("Entered string is : %s",S);
	printf("\nReverse of the string is : %s",strrev(S));
}

