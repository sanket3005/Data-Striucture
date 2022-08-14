#include <stdio.h>
#include <stdlib.h>>


void display(int arr[], int size)
{
  for (int i =0; i< size; i++)
    {
      printf("%d\t", arr[i]);
    }
  printf("\n");
}

void indInsertion(int arr[], int size, int element, int capacity, int index)
{
if(size>=capacity){
return -1;
}
int i=0;
  for ( i=size-1; i>=index; i--)
  {
    arr[i+1]=arr[i];
  }
arr[index]=element;
}



void main() {
  int arr[100]={7,8,12,27,88};
  int size=5, element=45, index=1;
  display(arr, size);
  indInsertion(arr, size, element, 100, index);
  size+=1;
  display(arr,size);
}