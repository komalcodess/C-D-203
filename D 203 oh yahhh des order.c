#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,temp;
  printf("Enter the number of elements: ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter all the elements: ");
  for(int i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }

  for(int i=0;i<n-1;i++)
  {
     for(int j=i+1;j<n;j++)
     {
         if(arr[j]>arr[i])
         {
             temp=arr[i];
             arr[i]=arr[j];
             arr[j]=temp;
         }
     }
  }

  printf("The elements in descending order is: \n");
  for(int i=0;i<n;i++)
  {
      printf("%d ",arr[i]);
  }
}
