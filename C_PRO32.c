//WAP to display address of variable using pointers
#include<stdio.h>
int main()
{
  int a,*b;
  printf("Enter any integer value\n");
  scanf("%d",&a);
  b=&a;
  printf("\nValue of Entered Value=%d",*b);
  printf("\nAddress of the variable=%u",b);
  return 0;
}
