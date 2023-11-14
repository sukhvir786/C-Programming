//WAP to multiply two numbers using pointers.
#include<stdio.h>
int main()
{
  int x,y,pro,*xp,*yp;
  printf("Enter any 2 values\n");
  scanf("%d%d",&x,&y);
  xp=&x;
  yp=&y;
  pro=*xp**yp;
  printf("Product=%d",pro);
  return 0;
}
