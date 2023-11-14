// using ternary operator find largest out of 3
#include <stdio.h>
void main() 
{
  int a,b,c,L;
  printf("Enter 3 different integer values : \n");
  scanf("%d%d%d",&a,&b,&c);
  L = a>b?(a>c? a:c):(b>c? b:c);
  printf("The largest value is %d",L);
}

