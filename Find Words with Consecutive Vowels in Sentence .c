#include<stdio.h>
#include<string.h>
#include<ctype.h>
int GetVowelOrNot(char c,char c1);
main()
{
 int i,j,k=0,flag=0,checkVowel,len,count=0;
 char str[100],substr[30],mainstr[30][20];
 printf("Enter a string to find words with consecutive vowels\n");
 gets(str);
 len=strlen(str);
 printf("Words with Consecutive Vowels\n");
 for(i=0;i<=len;i++)//i<=len for checking last word also because there will be no space at the end of sentence
 {
  if(str[i]!=' ' && i!=len)
  {
   substr[k++]=str[i];
  }
  else
  {
   substr[k]='\0';
   int sublen=strlen(substr);
   for(j=0;j<sublen-1;j++)
   {
       checkVowel=GetVowelOrNot(tolower(substr[j]),tolower(substr[j+1]));
    if(checkVowel==1)
    {
     flag=1;
     strcpy(mainstr[count],substr);
     count++;
        break;
    }
   }
   k=0;
  }
 }
 //To remove repeated words
 len=count;
   for(i=0;i<len;i++)
    {
      for(j=i+1;j<len;)
       {
         if(strcmp(mainstr[i],mainstr[j])==0)
          {
             for(k=j;k<len;k++)
              {
                strcpy(mainstr[k],mainstr[k+1]);
              }
                len--;
           }
          else
           {
             j++;
           }
        }
     }
   if(flag!=1)
   {
    printf("are not there\n");
   }
   else
   {
     for(i=0;i<len;i++)
     printf("%s\n",mainstr[i]);
   }
}
int GetVowelOrNot(char c,char c1)
{
 int x=0,y=0;
   if(c=='a' || c=='e'||c=='i'||c=='o'||c=='u')
   {
      x=1;
   }
   if(c1=='a' || c1=='e'||c1=='i'||c1=='o'||c1=='u')
   {
      y=1;
   }
    if(x==1 && y==1)
    return 1;
    else
    return 0;
}
