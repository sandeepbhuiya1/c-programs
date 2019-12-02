#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i,flag=0;
    char str1[100];
    printf("enter the first string:");
    gets(str1);
    for(i=0;i<strlen(str1);i++)
    {
        if(str1[i]>='a'&& str1[i]<='z')
        {
          flag=1;
          break;
        }
    }
    if(flag==1)
    {
        printf("there is a small letter\n");
    }
    return 0;
}
