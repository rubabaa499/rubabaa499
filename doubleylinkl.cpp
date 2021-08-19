#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;
    Node *new_node;
};

 Node *head=NULL;
 // Node *end = NULL; (for circular link list)

int treverse()
{ Node *current=head;
  cout<<head<<endl;
  while(current!=NULL)
  {
      cout<<"Data:"<<current->data<<"Node:"<<current<<"pervious:"<<current->prev<<"Next:"<<current->next<<endl;
      current=current->next;
  }

 return 0;
}
Node *search(int key)
{
    Node *current = head;
    cout<<"Head"<<head<<endl;
    while (current!=NULL)

    {
        if(current->data==key)
        {
            break;
        }

        current=current->next;
    }
    return current;
}

int insert (int key,int val)
{
    Node node;
    Node *new_node=&node;

    Node *current;
    new_node->data=val;
    cout<<new_node<<endl;
    current = search (key);
    cout<<current<<endl;
    current->next->prev =new_node;
    new_node->next=current-> new_node;
    new_node->prev = current;
    return 0;


}

int main()
{
    Node n1;
    int i=0;
    Node *current;
    n1.data =100;
    n1.next=NULL;
    n1.prev=NULL;
    head=&n1;
    current=&n1;
    Node nd[10];

    for(i=0;i<10;i++)
    {
        nd[i].data= 101+i;
        nd[i].next=NULL;
        current->next=&nd[i];
        current->next->prev=current;
        current = &nd[i];
        current->next=NULL;



    }

   treverse();
   current= search(105);
   cout<<current<<endl;
   insert( 105, 120);
   treverse();


return 0;



}
