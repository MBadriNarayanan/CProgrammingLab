#include<stdio.h>

void main()
{
    int a,b;
    printf("\n\n Swap Without Using Temporary Variable \n\n");
    
    printf(" Enter Value 1 : ");
    scanf("%d",&a);
    printf(" Enter Value 2 : ");
    scanf("%d",&b);
    printf("\n\n Values Before Swapping Are %d & %d \n\n",a,b);
    a = a + b;
    b = a- b;
    a = a - b;
    printf("\n\n Values After Swapping Are %d & %d \n\n",a,b);
}