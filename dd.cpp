#include<iostream>
using namespace std;
int main()
{
    int input[100],i=0,j=0,n=0,temp=0,pass=0,start=0,end=0,mid=0,item=0,loc=-1,comparison=0;
    cout<<"Number of Elements of array: ";
    cin>>n;
    cout<<"Random input array:"<<" ";
    for(i=0;i<n;i++)
    {

        cin>>input[i];


    }
    for(pass=0;pass<n-1;pass++){



        for(i=0;i<n-pass-1; i++)
        {
          if(input[i]>input[i+1])
          {

              temp=input[i];
              input[i]=input[i+1];
              input[i+1]=temp;
          }
        }

}


    cout<<"Sorted Array:";
    for(i=0;i<n;i++)
    {
        cout<<input[i]<<" ";
    }
    cout<<endl;

//Binary search
    end=n-1;
    cout<<"Number to search :";
    for(int j=0;j<100;j++)
     {
     cin>>item;
     loc=-1;
     start=0;
     end=n-1;
     while(start<=end)
     {
         mid=int((start+end)/2);
         if (item==input[mid]){

                loc=mid;
                comparison++;
                break;

         }
         else if(item<input[mid])
         {
             end=mid-1;
             comparison++;
         }
         else if(item>input[mid])
         {
             start=mid+1;
             comparison++;
         }


     }
     if(loc== -1)
     {
         cout<<item<<" "<<"not found in the array"<<endl;

     }else{

     cout<<item<<" found at index "<<loc<<" in the sorted array"<<endl;

     }




cout<<"\nNumber of comparison:"<<comparison<<endl;
break;
     }

    return 0;
}
