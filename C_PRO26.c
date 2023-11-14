//WAP to Find the Length of a String
# include <stdio.h>
# include <string.h>
void main()
{
	char S[100];
	int l;
	puts("Enter any string : ");
	gets(S);
	l = strlen(S);
	printf("Length of the string is : %d",l);
}
