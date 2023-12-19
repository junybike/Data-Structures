## Singly-List Doubly-Headed

Header file:
```C++
typedef struct node
{
  int data;
  node *next;
}
class linkedlist
{
  private:
    node head;
    node tail;
    int count;
  
  public:
    linkedlist();
    insert();
    remove_head();
    remove_tail();
}
```

Implementation file:

```C++
linkedlist::linkedlist()
{
  head = NULL;
  tail = NULL;
  count = 0;
}

linkedlist::insert(int newdata)
{
  node *newnode = new node;
  newnode->data = newdata;
  newnode->next = NULL;
}

linkedlist::remove_head()
{
  node *temp = head;
  head = head->next;
  remove temp;
}

linkedlist::remove_tail()
{
  node *temp = head;
  for (int i = 0; i < count; i++)
  {
    temp = temp->next;
  }
  remove tail;
}
```
## Doubly-List Doubly-Headed
