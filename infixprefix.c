#include<iostream>
using namespace std;

char stack_arr[100], MAX=100;
int top= 0;


 int isFull()
 {
     if (top==MAX)
        return 1;
     else
        return 0;
 }

 int isEmpty()
 {
     if (top == 0)
        return 1;
     else
        return 0;
 }

 void push(char data){

 if (isFull())
 {
     cout<<" Stack overflow "<<endl;
     return ;
 }
        top= top+1;
        stack_arr[top]=data;
 }

 char pop()
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
 int i=0, data =0, choice=0, a=0, b=0;
 string statement = "26*46-/53*+";
 char ch;
 for(i=0;i<statement.length();i++)
 {
     if(statement[i]=='+'||statement[i]=='-'||statement[i]=='*'||statement[i]=='/')
     {
         b=pop();
         a=pop();
         if(statement[i]=='+')
         {
             push(a+b);
         }
         else if(statement[i]=='-')
         {
             push(a-b);
         }
         else if(statement[i]=='*')
         {
             push(a*b);
         }
         else if(statement[i]=='/')
         {
             push(a/b);
         }



     }

    else
    {
        push(statement[i]-48);
    }

 }
 pop();


    return 0;



}
