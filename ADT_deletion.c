#include <stdio.h>
#include <stdlib.h>


void display(int arr[], int size)
{
  for (int i =0; i< size; i++)
    {
      printf("%d\t", arr[i]);
    }
  printf("\n");
}

void indDeletion(int arr[], int size, int index)
{
int i=0;
  for ( i=index; i<size-1; i++)
  {
    arr[i]=arr[i+1];
  }
}



void main() {
  int arr[100]={7,8,12,27,88};
  int size=5, element=45, index=1;
  display(arr, size);
  indDeletion(arr, size, index);
  size-=1;
  display(arr,size);
}

//Input: 7 8 12 27 88
//Output: 7 12 27 88