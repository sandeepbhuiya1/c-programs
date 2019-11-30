#include<stdio.h>
#include<conio.h>
main()
{
 int i,count;
 char str[100];
 printf("Enter number of characters to limit input\n");
 scanf("%d",&count);
 printf("Enter the string less than or equal to %d characters\n",count);
 for(i=0;i<count;i++)
 {
  str[i]=getche();
  if(str[i]==13)
  break;
 }
 str[i]='\0';
 printf("\nEntered string %s\n",str);
}
