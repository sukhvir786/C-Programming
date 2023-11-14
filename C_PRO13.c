//WAP using various unformatted Input Functions
/*
	getch(), getche(), getchar(), gets(), puts(), putchar()
	are unformatted functions in c
*/
# include <stdio.h>
int main()
{
	char c[]={"Sukhvir Singh"};
	puts(c);
	char c1[30];
	puts("Enter any character value/intger value/var char value");
	gets(c1);
	printf("The entered value : %s\n",c1);
	return 0;
}
