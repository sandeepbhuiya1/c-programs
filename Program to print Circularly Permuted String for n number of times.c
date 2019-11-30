#include<stdio.h>
#include<string.h>
main()
{
 int i,j,permute;
 char str[100];
 printf("Enter a Sentence\n");
 gets(str);
 printf("Enter number of times it should circulate\n");
 scanf("%d",&permute);
 for(i=0;i<permute;i++)
 {
  char c=str[0];
  for(j=0;str[j]!='\0';j++)
  {
   if(str[j+1]!='\0')
   str[j]=str[j+1];
   else
   break;
  }
  str[j]=c;
  str[j+1]='\0';
 }
printf("%s",str);
printf("\n");
}
