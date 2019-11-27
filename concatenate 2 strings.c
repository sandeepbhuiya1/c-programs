#include <stdio.h>
#include <string.h>

int main()
{
    int i,j=0,len;
    char str1[100],str2[100];
    printf("enter the string1:\n");
    gets(str1);
    printf("enter the string2:\n");
    gets(str2);

    for(i=0;str1[i]!='\0';i++);

    str1[i] = ' ';
    i++;
    for(j=0;str2[j]!='\0';j++,i++)
    {
        str1[i]=str2[j];
    }
    str1[i] = '\0';
    printf("%s\n",str1);

}
