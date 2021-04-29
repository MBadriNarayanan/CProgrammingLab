#include<stdio.h>

void main()
{
    float basic,gross,da,ta;
    printf("\n\n Gross Salary \n\n");
    
    printf(" Enter Basic Salary : ");
    scanf("%f",&basic);
    da = 10 * basic / 100 ;
    ta = 12 * basic / 100;
    gross = basic + da + ta ;
    printf("\n\n Gross Salary : %.2f \n\n",gross);
}
