#include <stdio.h>
void sumofeven (int a[],int num,int sum);
main()
{
    int i,a[100],num,sum=0;
    printf("enter the number of array elements");
    scanf("%d",&num);
    printf("enter the array elements");
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    sumofeven(a,num-1,sum);
}

void sumofeven(int a[],int num,int sum)
{
    if(num>=0)
    {
        if ((a[num])%2==0)
        {
            sum+=(a[num]);
        }
        sumofeven(a,num-1,sum);
    }

else
{
    printf("sum=%d\n",sum);
    return 0;
}
}
