#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Node{

  int data;
  struct Node*link;
 };

  void countnode(int count,struct Node*head){
   count=0;
  if (head==NULL)

  {
      cout<<" link list is empty"<<endl;

  }

  struct Node *ptr= NULL;
  ptr=head;

  while (ptr!=NULL)
  {
      count++;
      ptr=ptr -> link;
  }
    {
        cout<<"count:"<<countnode<<endl;
    }
  }

 int main(){

 struct Node*head= NULL;

 head= (struct Node*)malloc(sizeof(struct Node));
 head->data= 45;
 head-> link=NULL;

 struct Node*current=NULL;

 current= (struct Node*)malloc(sizeof(struct Node));
 current->data= 20;
 current->link= NULL;

 head->link=current;

 current= (struct Node*)malloc(sizeof(struct Node));
 current->data= 10;
 current->link= NULL;
 head->link->link =current;

 cout<<"first node address"<<head<<&head->data<< endl;
 cout<< "first node data "<< head->data<< endl;
 cout<< "first node link "<< head->link<< endl;
 cout<< "2nd node data "<< head->link->data<< endl;
 cout<< "2nd node link "<< head->link->link<< endl;
 cout<< "3rd node data "<< head->link->link->data<< endl;
 cout<< "3rd node data "<< head->link->link->link<< endl;
 cout<<"count:"<<countnode<<endl;
 return 0;



 }
