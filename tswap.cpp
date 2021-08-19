#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int i, j, temp, flag=0, cnt=0;

    for(i = 0; i < n; i++)
    {   flag =0;
        for(j = 0; j < n-i-1; j++)
        {
            // introducing a flag to monitor swapping
            if( arr[j] > arr[j+1])
            {
                // swap the elements
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                cnt++;
                // if swapping happens update flag to 1
                flag = 1;

            }
        }
        // if value of flag is zero after all the iterations of inner loop
        // then break out
        if(flag==0)
        {
            break;
        }
        cout<<"Optimal train swapping takes "<<cnt<<" "<<"swaps"<<endl;
        cnt=0;


    }


    // print the sorted array
    cout<<"Sorted Array: "<<" "<<endl;
    for(i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}

int main()
{
    int arr[100], i, n, step, temp,choice;
     while(1)
    {
        cout<< "1.Insert length of the train"<< endl;
        cout<< "2.Permutation of train swapping"<< endl;
        cin>>choice;


         switch(choice)
        {
        case 1:
         // ask user for number of elements to be sorted
         cout<<"Enter the length of the train: ";
         cin>>n;
        // input elements if the array
         for(i = 0; i < n; i++)
    {
        cout<<"Enter element no"<< " " <<i+1<<":";
        cin>>arr[i];

    }
    cout<<endl;

        break;
        case 2:
      // call the function bubbleSort
        bubbleSort(arr, n);
        break;
         default:
            cout<<"wrong choice"<<endl;
        }

    }


    return 0;
}
