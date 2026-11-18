#include<stdio.h>
int main()
{
  int x,i,count=0,n;
  printf("enter size of array\n");
  scanf("%d",&n);
  int arr[n];
  printf("enter array elements\n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("Enter x:\n");
  scanf("%d",&x);
  for(i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(arr[i]+arr[j]==x)
      {
        count++;
        printf("(%d,%d)\n",arr[i],arr[j]);
      }
    }
  }
  printf("Total pairs=%d",count);
  return 0;
 }