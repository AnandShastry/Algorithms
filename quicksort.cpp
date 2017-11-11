// Quicksort program

#include<iostream>
#include<conio.h>
void printArray(int arr[], int size);
void quickSort(int *arr, int low, int high);
int partition(int *arr,int low,int high);
void swap(int* a, int* b);

int main()
{
   using namespace std;
    int arr[6] = {20, 7, 38, 9, 11, 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printf("Sorted array: ");
    printArray(arr, n);

   getch();
   return 0;
}

void quickSort(int *arr, int low, int high)
{
   if (low<high)
   {
      int pi = partition(arr,low,high);
      
      quickSort(arr,low,pi-1);
      quickSort(arr,pi+1,high);
   }
}

int partition(int *arr,int low,int high)
{
   int i=-1;
   int j;
   int pivot = high;
   for(j=0;j<pivot;j++)
   {
      if(arr[j]<arr[pivot])
      {
         i++;
         swap(&arr[i],&arr[j]);
      }
   }
   swap(&arr[i+1],&arr[pivot]);
   return (i+1);
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
}

// A utility function to swap two elements
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
          
 




