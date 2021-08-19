#include <iostream>
using namespace std;

void insertionSort(int array[], int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;


    while ( array[j]> key && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }

}

void print_Array(int A[],int size)
{

for(int i=0;i<size;i++)
{
  cout<<A[i]<<" ";
}
}

int main() {
 int size=5;
 int A[size];

 for(int i=0;i<size;i++)
 {
     cin>>A[i];
 }
  insertionSort(A, size);
  print_Array(A,size);
 return 0;


}
