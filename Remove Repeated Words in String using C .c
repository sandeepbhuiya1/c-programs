#include<stdio.h>
#include<string.h>
main()
{
    int i=0,j=0,k=0,a,minIndex=0,maxIndex=0,max=0,min=0;
    char str1[100]={0},substr[100][100]={0},c;
    printf("Enter a sentence\n");
    gets(str1);
    while(str1[k]!='\0')//for splitting sentence
    {
        j=0;
        while(str1[k]!=' '&&str1[k]!='\0')
        {
            substr[i][j]=str1[k];
            k++;
            j++;
        }
        substr[i][j]='\0';
        i++;
        if(str1[k]!='\0')
        {
            k++;
        }
    }
    int len=i;
    //Removing repeated words same as removing repeated elements in arrays
    for(i=0;i<len;i++)
    {
      for(j=i+1;j<len;)
       {
         if(strcmp(substr[i],substr[j])==0)
          {
             for(k=j;k<len;k++)
              {
                strcpy(substr[k],substr[k+1]);
              }
                len--;
           }
          else
           {
             j++;
           }
        }
     }
 for(i=0;i<len;i++)
 {
  printf("%s ",substr[i]);
 }
 printf("\n");

}
