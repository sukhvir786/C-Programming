//WAP to Copy String using strcpy()
# include <stdio.h>
# include <string.h>
void main()
{
	char S1[20],S2[20];
	puts("Enter any string : ");
	gets(S1);
	strcpy(S2,S1);
	printf("First string is : %s",S1);
	printf("\ncopy of first string is : %s",S2);
}

