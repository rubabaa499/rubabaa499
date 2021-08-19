#include <iostream>
#include<stdlib.h>
using namespace std;

void merge (int arr[], int start, int mid, int last)
{
    int i,j,k;
    int nleft= mid-start+1;
    int nright=last-mid;
    int L[nleft],R[nright];

    for(i = 0; i<nleft; i++)
      L[i] = arr[start+i];
    for(j = 0; j<nright; j++)
      R[j] = arr[mid+1+j];
      i = 0; j = 0; k = start;
     while(i < nleft && j<nright) {
      if(L[i] <= R[j]) {
         arr[k] = L[i];
         i++;
      }else{
         arr[k] = R[j];
         j++;
      }
      k++;
   }
   while(i<nleft) {       //extra element in left array
      arr[k] = L[i];
      i++; k++;
   }
   while(j<nright) {     //extra element in right array
      arr[k] = R[j];
      j++; k++;
   }
}

void mergeSort(int arr[], int start, int last) {
   int mid;
   if(start < last) {
      int mid = (start+last)/2;
      // Sort first and second arrays
      mergeSort(arr, start,  mid);
      mergeSort(arr, mid+1, last);
      merge(arr, start, mid, last);
   }
}

void display(int arr[], int n) {
   for(int i = 0; i<n; i++)
      cout << arr[i] << " ";
   cout << endl;
}


int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];     //create an array with given number of elements
   cout << "Enter elements:" << endl;
  for(int i = 0; i<n; i++)  {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   display(arr, n);
   mergeSort(arr, 0, n-1);     //(n-1) for last index
   cout << "Array after Sorting: ";
   display(arr, n);
   return 0;
}








