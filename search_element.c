#include <stdio.h> 
int main() 
{
    int n,x;
    printf("enter size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements\n");
    for(int i=0;i<n;i++)
    {
     scanf("%d",&arr[i]);
    }
    printf("enter element you need to search    for:");
    scanf("%d",x);
    for(int i=0;i<n;i++)
    if(arr[i]==x)
      printf("Searched element=%d",i);
    else
      printf("Element not present in the array") ;
    return 0;
}
}  