#include <stdio.h>
int main() 
{
    char str[20],count=0;
    printf("enter a string:\n");
    scanf("%s",&str);
    for(int i=0;str[i]!='\0';i++)
    {
      count++;
    }
    printf("length of the string is %d", count);
    return 0;
 }