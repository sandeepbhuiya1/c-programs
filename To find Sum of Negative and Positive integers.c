#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i,size,pos=0,neg=0;
    float avg;
    printf("enter the size of array:\n");
    scanf("%d",&size);
    int array[size];
    printf("enter numbers to find sum of positive and negative numbers:");
    {
        for(i=0;i<size;i++)
        {
            scanf("%d",&array[i]);
        }
    }
    for(i=0;i<size;i++)
    {
        if(array[i]>0)
        {
            pos+=array[i];
        }
        if(array[i]<0)
        {
            neg+=array[i];
        }

    }
    printf("the sum of positive integers are :%d\n",pos);
    printf("the sum of negative integers are :%d\n",neg);
}
