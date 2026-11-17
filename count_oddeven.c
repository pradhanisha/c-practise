#include <stdio.h> 
int main() 
{
    int arr[n],n,counte=0,counto=0;
    printf("enter size of array\n");
    scanf("%d",&n);
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    {
     scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++) 
    {
      if(arr[i]%2==0)
         counte++;
      else
         counto++;
    }
    printf("no.of even elements=%d",counte);
    printf("no.of odd elements=%d",counto);
    return 0;
} 