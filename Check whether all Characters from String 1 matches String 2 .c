#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    int i,j,flag,len1,len2;
    char str1[100],str2[100];
    printf("enter the string 1:");
    gets(str1);
    printf("enter the string 2:");
    gets(str2);
    len1 = strlen(str1);
    len2 = strlen(str2);

    for(i=0;i<len1;i++)
    {
        for(j=0;j<len2;j++)
        {
            if(str1[i]==str2[j])
            {
                flag=1;
                break;
            }

        }
        if(flag!=1)
        {
            printf("the characters in string 1 and string 2 are not matching");
            exit(0);
        }
        printf("the string1 matches to string2");
        return 0;
}
}
