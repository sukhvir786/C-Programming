//Write another program to print message with inputted name.
# include <stdio.h>
int main()
{
	char name[30];
	printf("Enter your name : ");
	scanf("%s",&name);
	printf("Hello %s, Welcome to C Programming",name);
	return 0;
}
