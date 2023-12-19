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
