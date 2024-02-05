#include<stdio.h>
#include<stdlib.h>
int num;

int fact(int n)
{
  if(n==0)
  {
    return 1;
  }
  else if (n==1)
  {
    return 1;
  }
  else if(n==2)
  {
    return 2;
  }
  else
    return n*fact(n-1);
}
int main()
{
printf("enter the number to be inputted \n");
  scanf("%d",&num);
printf("the factorial of the number is %d",fact(num));
}