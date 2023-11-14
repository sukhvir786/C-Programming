//WAP to find volume of a cube using side as input from user
# include <stdio.h>
# include <math.h>
int main()
{
	float side,vol;
	printf("Enter Side of the Cube : ");
	scanf("%f",&side);
	vol = pow(side,3);
	printf("Volume of the Cube is : %.2f",vol);
	return 0;
}
