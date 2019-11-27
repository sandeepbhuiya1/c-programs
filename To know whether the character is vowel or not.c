#include<stdio.h>
main()
{
  char c;
  printf("Enter a character to know whether it is vowel or not\n");
  scanf("%c",&c);
  if(c=='A'||c=='a'||c=='e'||c=='E'||c=='I'||c=='i'||c=='O'||c=='o'||c=='U'||c=='u')
    printf("The character %c is vowel\n",c);
  else
    printf("The character %c is not vowel\n",c);
}

