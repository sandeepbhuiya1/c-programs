#include <stdio.h>
#include <string.h>

int main()
{
    int i,spaces=0;
    char str1[100];
    printf("please enter your statement:");
    gets(str1);

    for(i=0;i<strlen(str1);i++)
    {
        if(str1[i]==' ')
        {
           spaces++;
        }
    }
    printf("the number of blank spaces are:%d",spaces);
    return 0;
}
