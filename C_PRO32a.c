//Program to Display Address of the Variable without using pointers
#include<stdio.h>
int main()
{
 int x;
 float z;
 printf("Enter any integer value\n");
 scanf("%d",&x);
 printf("Enter any decimal value\n");
 scanf("%f",&z);
 printf("Integer Value=%d and its Address=%u\n",x,&x);
 printf("Decimal Value=%.2f and its Address=%u",z,&z);
 return 0;
}
