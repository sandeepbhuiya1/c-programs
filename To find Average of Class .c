#include<stdio.h>
main()
{
    int i,j,sum=0,num;
    float avg;
    printf("Enter number of students in class\n");
    scanf("%d",&num);
    int marks[num];
    printf("Enter marks of all students\n");
    for(i=0;i<num;i++)
    {
        scanf("%d",&marks[i]);
        sum+=marks[i];
    }
    avg=(float)sum/num;
    printf("Average of class is %f\n",avg);
}
