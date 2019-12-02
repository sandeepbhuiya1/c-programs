#include<stdio.h>
int GetPalindrome(int num);
int GetArmstrong(int num);
main()
{
 int i,j=0,k=0,n,flagArm=0,flagPalin=0,lenPalin,lenArm;
 printf("Enter number of elements in an array\n");
 scanf("%d",&n);
 int a[n],palindrome[n],armstrong[n];
 printf("Enter numbers\n");
 for(i=0;i<n;i++)
 {
  flagPalin=0;
  flagArm=0;
  scanf("%d",&a[i]);
  flagArm=GetArmstrong(a[i]);
  flagPalin=GetPalindrome(a[i]);
  if(flagPalin==1)
  {
   palindrome[j]=a[i];
   j++;
  }
  if(flagArm==1)
  {
   armstrong[k]=a[i];
   k++;
  }

 }
 lenPalin=j;
 lenArm=k;
 printf("Number of armstrongs in array=%d\nNumber of Palindromes in array=%d\n",lenArm,lenPalin);
 if(lenArm!=0){
 printf("Armstrong numbers in array are:\n");
    for(i=0;i<lenArm;i++)
    {
     printf("%d\n",armstrong[i]);
    }
   }
   if(lenPalin!=0)
   {
    printf("Palindrome numbers in array are:\n");
     for(i=0;i<lenPalin;i++)
     {
     printf("%d\n",palindrome[i]);
     }
   }
}
int GetArmstrong(int num)
{
   int i,temp,sum=0;;
   temp=num;
   while(num>0)
   {
     i=num%10;
     sum+=i*i*i;
     num=num/10;
    }
   if(sum==temp)
    {
     return 1;
     }
     else
     {
      return 0;
      }
}

int GetPalindrome(int num)
{
 int dummy,rev=0,x;
    dummy=num;
    while(num>0)
    {
       x=num%10;
       rev=rev*10+x;
       num=num/10;
    }
     if(dummy==rev)
       return 1;
     else
      return 0;

}
