//WAP to find area of rectangle and print the result using unformatted output Functions
# include <stdio.h>
int main()
{
	int a,b,area;
	char ar[30];
	printf("Enter length and breadth of the rectangle : \n");
	scanf("%d%d",&a,&b);
	area = a*b;
	itoa(area,ar,10);
	printf("Area of the Rectangle is : ");
	puts(ar);
	return 0;
}
