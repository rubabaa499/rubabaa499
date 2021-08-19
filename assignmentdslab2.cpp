#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int i, j, temp, flag=0;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {

            if( arr[j] > arr[j+1])
            {

                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;

            }
        }

        if(flag==0)
        {
            break;
        }
    }


    cout<<"Sorted Array: "<<" "<<endl;

    for(i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;

}

int binarySearch(int arr[], int x, int key) {
    int start=0;
    int endP=x;
    int count;

  while (start < endP) {
    int mid = (start + endP) / 2;

    if (arr[mid] == key)


     {
         return mid;
         count++;
         break;


     }

    if (arr[mid] > key)

       {
           endP= mid - 1;
           count++;

       }

    else
     {
       start = mid + 1;
       count++;


     }

  }

  return -1;
}


int main()
{
    int arr[100], i, n, step, temp,x,count;

    cout<<"Enter the number of elements to be sorted: ";
    cin>>n;

    for(i = 0; i < n; i++)
    {
        cout<<"Enter element no"<< " " <<i+1<<":";
        cin>>arr[i];
    }

    bubbleSort(arr, n);

    cout<<"Search for element:"<<endl;
    int key;
    cin>>key;

  binarySearch(arr,x,key);


   int val= binarySearch(arr,x,key);
  if (val == -1)
    {cout<<"Not found";}
  else
   {cout<<"Element is found at index:"<<val;}
 cout<<"NUmber of compqrison takes:"<<count<<endl;
 break;

 }



