//binary search for a particular number
#include<iostream>
#include<conio.h>
int binarySearch(int *arr,int low,int high,int target);
int main()
{
   using namespace std;
   int arr[8]={2,3,4,13,17,56,77,99};
   //Find where is 56
   int x=56;
   //feed it to the binary sort program
   int position = binarySearch(arr,0,7,x);
   printf("The number is at position %d",position);

   getch();
   return 0;
}
int binarySearch(int *arr,int low,int high,int x)
{
if (high>=low)
{
   int mid = (low+high)/2;
   if (arr[mid]==x)
   return mid;
   
   //value lies in the first half ,as needed value is lesser than mid
   if (arr[mid]>x)
   {
      return binarySearch(arr,low,mid-1,x); 
   }

      return binarySearch(arr,mid+1,high,x);    
 
}
return -1;
}
