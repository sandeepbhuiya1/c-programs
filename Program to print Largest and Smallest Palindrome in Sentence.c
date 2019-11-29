#include<stdio.h>
#include<string.h>
main()
{
    int i=0,j=0,k=0,a,minIndex=0,maxIndex=0,max=0,min=0,flag=0;
    char str1[100]={0},substr[100][100]={0},c,substr1[100][100]={0},rev[100];
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
    k=0;
    for(i=0;i<len;i++)
    {
     strcpy(rev,substr[i]);
     if(strcmp(strrev(rev),substr[i])==0)
     {
      strcpy(substr1[k],substr[i]);
      printf("Palindrome %d ---- %s\n",k,substr1[k]);
      k++;
      flag=1;

     }
    }
    len=k;
    max=strlen(substr1[0]);
    min=strlen(substr1[0]);
    //After splitting getting length of string and finding its index having max length and index having min length
    if(flag==1)
    {
      for(i=0;i<len;i++)
       {
       a=strlen(substr1[i]);
       if(a>max)
        {
            max=a;
            maxIndex=i;
        }
        if(a<min)
        {
            min=a;
            minIndex=i;
        }
       }
      printf("Largest Palindrome Word is %s \nSmallest Palindrome word is %s\n",substr1[maxIndex],substr1[minIndex]);
    }
    else{
     printf("No Palindrome Found\n");
    }
  }
