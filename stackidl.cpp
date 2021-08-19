#include<iostream>
#include<stdlib.h>
#define MAX 4
using namespace std;

int stack_arr[MAX];
int top= -1;


 int isFull()
 {
     if (top==MAX-1)
        return 1;
     else
        return 0;
 }

 int isEmpty()
 {
     if (top == -1)
        return 1;
     else
        return 0;
 }

 void push(int data){

 if (isFull())
 {
     cout<<" Stack overflow "<<endl;
     return ;
 }
        top= top+1;
        stack_arr[top]=data;
 }

 int pop()
 {
     int value;
     if (isEmpty())
    {
        cout<<" stack underflow "<<endl;
        exit(1);

     }
     value = stack_arr[top];
     top=top-1;
     return value;
 }

 int peak(){

 if (isEmpty())
    {
        cout<<" stack underflow "<<endl;
        exit(1);

     }


 return stack_arr[top];


 }
 void print()
 {
     int i;
     if ( top== -1)
     {
         cout<<" stack underflow"<<endl;
         return;

     }
     for( i=top;i>=0; i--)
        cout<< stack_arr[i]<<" ";
        cout<<endl;
 }


    int main()
 {
    int choice,data;
    while(1)
    {
        cout<< "1.push element"<< endl;
        cout<< "2.pop element"<< endl;
        cout<< "3.show top"<< endl;
        cout<< "4.print all element"<< endl;
        cout<< "5.quite "<< endl;
        cin>>choice;

      switch(choice)
        {
        case 1:
            cout<<"enter element to be pushed"<<endl;
            cin>>data;
            push(data);
            break;

        case 2:
            data= pop();
            cout<<" Deleted element is"<<endl;
            break;

        case 3:
            cout<<"top element " << peak()<<endl;;
            break;

        case 4:
            print();
            break;
        case 5:
            exit(1);

        default:
            cout<<"wrong choice"<<endl;
        }

    }

 return 0;

 }
