#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i,j,k,n,add,size,flag;
    printf("enter the numbers of elements in the array:\n");
    scanf("%d",&n);
    int a[n];
    printf("enter an added number for which you want distinct pairs for any array:\n");
    scanf("%d",&add);
    printf("enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array elements which when added gives %d\n",add);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==add)
            {
                flag=1;
                printf("(%d,%d) found at[%d,%d]\n",a[i],a[j],i+1,j+1);
            }
        }
    }
    if(flag==0)
    {
        printf("not found\n");

    }
    printf("\n");
}
