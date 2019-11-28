#include <stdio.h>
#include <string.h>

int indexofstring(char str[],char s[]);


int main()
{
    int index;
    char a[100],b[100];
    printf("enter string :");
    gets(a);
    printf("string to be found:");
    gets(b);
    indexofstring("a","b");
    if(index==1)
    {
        printf("substring not found");
    }
    else
        printf("substring found");
}



int indexofstring(char str[],char s[])
{
    int i,j,k,l;
    l = strlen(s);
    for(i=0;str[i+l-1];i++)
    {
        k=i;
        for(j=0;j<=l-1;j++)
        {
            if(str[k]!=s[j])
            {
                break;
                k++;
            }
            if(j==1)
                return(i);

        }
        return (-1);
    }
}
