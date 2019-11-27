#include <stdio.h>
#include <conio.h>

int main()
{
    int len=0,i;
    char s[100];
    printf("enter the word:");
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
    {
        len++;
    }
    printf("the length of the string is %d:",len);
    getch();

    return 0;
}
