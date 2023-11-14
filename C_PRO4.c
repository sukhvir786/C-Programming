//WAP to calculate the average of three real numbers.
# include <stdio.h>
int main()
{
	float a,b,c,AVG;
	printf("Enter any three real values : \n");
	scanf("%f%f%f",&a,&b,&c);
	AVG = (a+b+c)/3;
	printf("Average of %0.2f,%0.2f and %0.2f is %.3f",a,b,c,AVG);
	return 0;
}
