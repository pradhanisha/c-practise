#include <stdio.h> 
int main() 
{
    int n,m;
    printf("enter size of both the arrays\n");
    scanf("%d,%d",&n,&m);
    int arr[n],brr[n],crr[n+m];
    printf("enter elements of first array\n");
    for(int i=0;i<n;i++)
    {
     scanf("%d",&arr[i]);
    }
    printf("enter elements of second array\n");
    for(int i=0;i<m;i++)
    {
     scanf("%d",&brr[i]);
    }
    for(int i=0;i<n;i++)
    {
       if(i=>0 && i<n)
          crr[i]=arr[i];
       else if(i=>n && i<n+m)
          crr[i]=brr[i];
    }
       printf("merged array= %d  ",crr[i]);
    return 0;
}  