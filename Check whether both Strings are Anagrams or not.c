#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    int i,j,flag;
    char s1[100],s2[100];
    printf("enter the string one:\n");
    gets(s1);
    printf("enter the string two:\n");
    gets(s2);
    for(i=0;i<strlen(s1);i++)
    {
        flag=0;
        for(j=0;j<strlen(s2);j++)
        {
            if(tolower(s1[i])==tolower(s1[i]))
            {
                flag=1;
                break;
            }
        }
        if(flag!=1)
        {
             printf("Both %s and %s are Not Anagrams\n",s1,s2);

            exit(0);
        }


    }
    printf("both are anagrams\n");
    return 0;
}
