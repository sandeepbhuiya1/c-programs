#include<stdio.h>
main()
{
    int i,size,position,insitem;
    printf("Enter size\n");
    scanf("%d",&size);
    int a[size],temp[size+1];
    printf("Enter numbers in array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter element to be inserted\n");
    scanf("%d",&insitem);
    printf("Enter position for an element to be inserted\n");
    scanf("%d",&position);
    position=position-1;
        for(i=0;i<=size;i++)
        {
        if(i<position)
        {
            temp[i]=a[i];
        }
        if(i>position)
        {
         temp[i]=a[i-1];
        }
        if(i==position)
        {
            temp[i]=insitem;
        }

        }

        printf("Array after inserting %d\n",insitem);
        for(i=0;i<=size;i++)
        {
        printf("%d\n",temp[i]);
         }
}
