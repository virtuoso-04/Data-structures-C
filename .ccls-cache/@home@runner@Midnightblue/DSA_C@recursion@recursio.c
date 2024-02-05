#ifndef recursio_H

#define recursio_H
#include<stdio.h>
int num;

#endif 
int fact(int n)
{
  if(n==0||n==1)
  {
    return 1;
  }
   else
  {
    return n*fact(n-1);
  }
}
int main()
{
printf("enter the number to be inputted \n");
  scanf("%d",&num);
printf("the factorial of the number is %d",fact(num));
}
