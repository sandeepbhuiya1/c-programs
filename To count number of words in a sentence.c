#include <stdio.h>
#include <string.h>

int main()
{
    int i,word=1;
    char str[100];
    printf("enter the strings:");
    gets(str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==' '){
                word++;
        }
    }
    printf("the no of words are:%d",word);
    getch();
    return 0;
}
