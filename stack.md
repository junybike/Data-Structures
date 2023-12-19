## Linked list based Stack

Header file:
```C++
#ifndef STACK_H
#define STACK_H

class Stack
{
  private:
  
    class Node
    {
      public:
        int data;
        Node *next = NULL;
    }
    Node *head = null;

  public:

    Stack();
    ~Stack();
    int isEmpty();
    void push(int newdata);
    void pop();
    int peek();
};
#endif
```

Implementation file:
```C++
#include "Stack.h"

Stack::Stack()
Stack::~Stack()
{
  Node *temp = head;
  Node *destruct = temp;
  while (temp != NULL)
  {
    Node delete = temp;
    temp = temp->next;
    delete destruct;
    destruct = NULL;
  }
}

void Stack::push(int newdata)
{
  if (head == NULL)
  {
    return NULL;
  }
  else
  {
    Node *newnode = new Node;
    newnode->data = newdata;
    newnode->next = NULL;

    Node *temp = head;
    while (temp != NULL)
    {
      temp = temp->next;
    }
    temp = newnode;
  }
}

void Stack::pop()
{
  if (head == NULL)
  {
    return;
  }
  Node *temp = head;
  Node *prev;
  while (temp->next != NULL)
  {
    prev = temp;
    temp = temp->next;
  }
  if (prev == head)
  {
    delete head;
    head = NULL;
  }
  prev->next = NULL;
  delete temp;
  temp = NULL;
}

int Stack::peek()
{
  if (head == NULL)
  {
    return -1;
  }
  Node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  return temp->data;
}
