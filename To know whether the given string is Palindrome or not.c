#include<stdio.h>
#include<string.h>
main()
{
int i,j=0;
char str1[100],str2[100]={0};
printf("Enter a string to know whether it is palindrome or not\n");
gets(str1);
for(i=strlen(str1)-1;i>=0;i--)
{
str2[j]=str1[i];
j++;
}
str2[j]='\0';
printf("The reverse of the given string is---> %s\n",str2);
if(strcmp(str1,str2)==0)
{
    printf("The given string is Palindrome\n");
}
else
{
    printf("The given string is Not Palindrome\n");
}
}
