#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

struct Node *head = NULL;

void insert(int data) {
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = head;
  head = newNode;
}

void delete (int data)
  {
  struct Node *temp = head;
  struct Node *prev = NULL;
  while (temp != NULL && temp->data != data) {
    prev = temp;
    temp = temp->next;
  }
  if (temp == NULL) {
    printf("Node not found\n");
    return;
  }
  if (prev == NULL) {
    head = temp->next;
  } else {
    prev->next = temp->next;
  }
  free(temp);
}

struct Node *find(int data) {
  struct Node *temp = head;
  while (temp != NULL && temp->data != data) {
    temp = temp->next;
  }
  return temp;
}

void printList() {
  struct Node *temp = head;
  while (temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->next;
  }
  printf("\n");
}

int main() {
  insert(1);
  insert(2);
  insert(3);
  insert(4);
  printf("Initial list: ");
  printList();
  delete (3);
  printf("List after deleting 3: ");
  printList();
  struct Node *node = find(2);
  if (node != NULL) {
    printf("Node with data 2 found\n");
  } else {
    printf("Node with data 2 not found\n");
  }
  return 0;
}