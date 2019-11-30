#include<stdio.h>
#include<string.h>
main()
{
  char s1[25],*t,s2[25];
  int noofCharacters,pos,i=0,k=0;
  printf("Enter a string\n");
  gets(s1);
  printf("Enter Position(counting from zero)from where string has to be copied(includes space)\n");
  scanf("%d",&pos);
  printf("Enter No of characters from the position %d to be copied to another string\n",pos);
  scanf("%d",&noofCharacters);
  t=s1;//copying base address of string
  while(*t!='\0')
  {
   if(i>=pos && noofCharacters!=0)
   {
    s2[k]=*t;
    k++;
    noofCharacters--;
   }
   i++;
   t++;
  }
  s2[k]='\0';
  printf("Copied String is(includes space also) %s\n",s2);
}
