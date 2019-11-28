#include <stdio.h>
#include <string.h>

int main()
{
    int i=0,j=0,k=0;
    char str1[100] = {0},substr[100][100]={0},c;
    printf("enter a sentence:\n");
    gets(str1);
    printf("enter the character to split\n");
    scanf("%c",&c);
    while(str1[k]!='\0')
    {
        j=0;
        while(str1[k]!=c && str1[k]!='\0')
        {
            substr[i][j]=str1[k];
            k++;
            j++;
        }
        substr[i][j] = '\0';
        i++;
        if(str1[k]!='\0')
        {
            k++;
        }
    }
    int len=i;
    printf("\nWords after the splitting sentence are:\n");
    for(i=0;i<len;i++)
    {
        printf("%s\n",substr[i]);
    }
}
