#include<stdio.h>
main()
{
int i,size;
printf("Enter size of array\n");
scanf("%d",&size);
int a[size];
printf("Enter numbers to separate even and odd\n");
for(i=0;i<size;i++)
{
    scanf("%d",&a[i]);
}
printf("Even numbers are:\n");
for(i=0;i<size;i++)
{
    if(a[i]>=0)
    {
        if(a[i]%2==0)
        {
            printf("%d\n",a[i]);
        }

    }
}

printf("Odd numbers are:\n");
for(i=0;i<size;i++)
{
    if(a[i]>=0)
    {
        if(a[i]%2==1)
        {
            printf("%d\n",a[i]);
        }

    }
}

}
