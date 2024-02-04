#include<stdio.h>
#include <stdlib.h>
#define MAX 5

// initial declarations 
int top=-1;
int stack[MAX];
void push(int);
void pull();
void peek();
void display();

// main function in which menu is diplayed using switch cases
int main()
{
  int ch,item;
  while(1)
    {
      printf("1. push an element in the stack \n");
      printf("2. pop an element from the stackn \n");
      printf("3. peek an ement from the stack \n");
      printf("4. display the elements in the stack \n");
      printf("enter choice \n");
     scanf("%d",&ch);

      switch(ch)
        {
          case 1: printf("enter element to be pushed \n");
          scanf("%d",&item);
          push(item);
          break;
          case 2: pull();
          break;
          case 3: peek();
          break;
          case 4: display();
          break;
          case 5: exit(0);
          default: printf("invalid choice \n");
            
        }      
    }  
}

// push function of stack
void push(int item)
{
  if(top==MAX-1)
  printf("stack is full \n");
  else
   stack[top++]=item;
}
// pull function of stack
void pull()
{
  if(top==-1)
    printf("Stack is empty \n");
  else
    top--;
}
// peek function of stack to diplay elemnt at top index
void peek()
{
  if(top==-1)
    printf("stack underflow");
  else
     printf("%d",stack[top]);
}
// to display elemnts of stack
void display()
{
  int i;
  for(i=0;i<=top;i++)
    {
      printf("%d \n",stack[top]);
    }
}
