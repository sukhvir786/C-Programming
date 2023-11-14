//WAP to find area of a circle using PI as constant
# include <stdio.h>
int main()
{
	float rad,area,PI=3.14;
	printf("Enter Radius of the Circle : ");
	scanf("%f",&rad);
	area = PI*rad*rad;
	printf("Area of the Circle : %.2f",area);
	return 0;
}
