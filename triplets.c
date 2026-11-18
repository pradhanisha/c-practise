#include<stdio.h>
int main()
{
  int x,count=0,n;
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
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      for(int k=0;k<n;k++)
      if(arr[i]+arr[j]+arr[k]==x)
      {
        count++;
        printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
      }
    }
  }
  printf("Total triplets=%d",count);
  return 0;
 }