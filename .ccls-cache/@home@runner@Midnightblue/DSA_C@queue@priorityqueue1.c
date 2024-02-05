#ifndef priorityqueue1_H
#define priorityqueue1_H

#include <stdio.h>
#include <stdlib.h>
#define MAX 5

// ... (rest of the file content)

// function prototypes
void enqueue(int);
void dequeue();
void display();
void peek();

#endif // priorityqueue1_H

// initial declarations
int front = -1;
int rear = -1;
int queue[MAX];
// main function
int main() {
  int ch, item;
  while (1) {
    printf("\n1. enqueue an element in the queue ");
    printf("\n2. dequeue an element from the queue ");
    printf("\n3. peek an ement from the queue ");
    printf("\n4. display the elements in the queue ");
    printf("\n5. exit");
    printf("\n enter choice \n");
    scanf("%d", &ch);
    switch (ch) {
    case 1:
      printf("enter the element to be enqueued \n");
      scanf("%d", &item);
      enqueue(item);
      break;
    case 2:
      dequeue();
      break;
    case 3:
      peek();
      break;
    case 4:
      display();
      break;
    case 5:
      exit(0);
    default:
      printf("invalid choice \n");
    }
  }
}

// enqueue function of queue
void enqueue(int item) {
  if (rear == MAX - 1)
    printf("queue is full \n");
  else
    queue[rear++] = item;
}
void dequeue() {
  if (front == rear)
    printf("queue is empty \n");
  else
    front++;
}
// peek function of queue to diplay elemnt at front index
void peek() {
  if (front == rear)
    printf("queue is empty \n");
  else
    printf("%d", queue[front]);
}
// displat the queue
void display() {
  int i;
  for (i = front; i <= rear; i++) {
    printf("%d", queue[i]);
    printf("\n");
  }
}



// end of code