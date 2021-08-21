#include <iostream>
using namespace std;

int binarySearch(int array[],int n, int data) {

   int  l=0;
     int r= n-1;
     int count=0;
// Repeat until the pointers low and high meet each other
  while (l<=r) {
    int mid = (l + r) / 2;


    if (array[mid] == data)

     {
       return mid;
       count++;
       break;

     }




    else if  (array[mid] < data)

     {
         l = mid + 1;
       count++;
     }


    else
      {
        r = mid-1;
          count++;
      }

  }

  return -1;
}

int main(void) {
  int array[100], n, data,count;

   cout<<"Enter the number of elements to be sorted: ";
    cin>>n;

    for(int i = 0; i < n; i++)
    {
        cout<<"Enter element no"<< " " <<i+1<<":";
        cin>>array[i];
    }
    cout<<"element to be searched"<<endl;
    cin>>data;
  int val= binarySearch(array,n,data);
  if (val == -1)
    {cout<<"Not found";}
  else
   {cout<<"Element is found at index:"<<val<<endl;}

   cout<<"number of comparison:"<<count<<endl;


   return 0;

}

