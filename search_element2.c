#include <stdio.h> 
int main() 
{
    int x,n,flag=0;//element hasn't been found yet
    printf("enter size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements\n");
    for(int i=0;i<n;i++)
    {
     scanf("%d",&arr[i]);
    }
    printf("Enter element you need to search for:\n");
    scanf("%d",&x)
    for(int i=0;i<n;i++)
    {
      if(arr[i]==x)
        printf("Element found!");
        flag=1;
        break;
    }
    if(flag==0)// condition not satisfied
       printf("Element not found!");   
    return 0;
}  