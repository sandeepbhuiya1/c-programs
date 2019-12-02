#include<stdio.h>
main()
{
int i,j,num,temp,maxDiff=0;
printf("Enter number of elements\n");
scanf("%d",&num);
int a[num];
printf("Enter numbers\n");
for(i=0;i<num;i++)
{
 scanf("%d",&a[i]);
}

for(i=0;i<num;i++)
{
 for(j=i+1;j<num;j++)
 {
  if(a[j]-a[i]>maxDiff)
  {
   maxDiff=a[j]-a[i];
  }
 }
}

printf("Maximum Difference is %d\n",maxDiff);

}
