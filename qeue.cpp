#include<iostream>
#include<conio.h>
using namespace std;


int queue[4], front=-1, rear =-1, maxSize=100;
int isEmpty()
{
    if ((front==-1) && (rear==-1))
    {
        return true;
    }

    else
    {
        return false;
    }
}

int isFull()
{
    if (rear==maxSize-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int enqueue(int Element)
{
    if(isFull() )
    {
        cout<< "The queue is loaded"<<endl;
        return false;
    }
    else if(isEmpty() )
    {
        front=rear=0;
        queue[rear]=Element;
        cout<<Element<<"is inserted into the queue"<<endl;
        return true;
    }
    else
    {
        rear++;
        queue[rear]=Element;
        cout<<Element<<"is inserted into the queue"<<endl;
        return true;
    }
}

int dequeue()

{
    int x=0;
    if(isEmpty() )
    {
        cout <<"The queue is empty"<<endl;
        return false;
    }

    else if (front==rear)
    {   x= queue[front];
        front=rear=-1;
        cout<<"Dequeue done"<<endl;
        return true;
    }

    else
    {   x=queue[front];
        front++;
        cout<<"Dequeue done"<<endl;
        return true;
    }
}


void showQueue()
{
    if (isEmpty() )
    {
        cout<<"Queue is empty"<<endl;;
        return;
    }

    else
    {
        cout<<"Elements of the queue:";
        for(int i=front; i<=rear; i++)
        {
            cout<<queue[i]<<" ";
        }
        cout<<endl;
    }

}

   int main()
 {
    int choice,data;
    while(1)
    {
        cout<< "1.Enqueue element:"<< endl;
        cout<< "2.Dequeue element:"<< endl;
        cout<< "3.print all element:"<< endl;
        cout<< "4.quite: "<< endl;
        cout<<"Your choice:"<<endl;
        cin>>choice;

      switch(choice)
        {
        case 1:
            cout<<"enter element to be enqueued"<<endl;
            cin>>data;
            enqueue(data);
            break;

        case 2:
            data= dequeue();
            cout<<" Dequeued element is"<<data<<endl;
            break;


        case 3:
            showQueue();
            break;
        case 5:
            exit(1);

        default:
            cout<<"wrong choice"<<endl;
        }

    }

 return 0;

 }
