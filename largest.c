#include<stdio.h>
int main() 
{
    int n;
    printf("enter no.of rows n columns:\n");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        scanf("%d",&arr[i][j]);
      }
    }
    int max=arr[0][0];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        if(arr[i][j]>max)
        {
          max=arr[i][j];
        }
      }
      printf("largest no.=%d",max);
    }
    return 0;
 }