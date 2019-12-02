#include<stdio.h>
main()
{
 int i,n,num,k,frequency[10],flag=0;
 for(i=0;i<10;i++)
 {
  frequency[i]=0;
 }
 printf("Enter number of elements in an array\n");
 scanf("%d",&n);
 int a[n];
 printf("Enter numbers\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  //for incrementing occured number
  num=a[i];
  while(num>0)
  {
   k=num%10;
   frequency[k]++;
   num=num/10;
  }
 }
 for(i=0;i<10;i++)
 {
  if(frequency[i]!=0)
  {
   flag=1;
   printf("%d occured %d times\n",i,frequency[i]);
  }
 }
 if(flag==0)
 {
  printf("No elements repeated\n");
 }
}
