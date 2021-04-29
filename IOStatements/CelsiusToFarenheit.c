#include<stdio.h>

void main()
{
    float temp;
    printf("\n\n Convert From Celsius To Farenheit \n\n");
    
    printf(" Enter Temperature In Celsius : ");
    scanf("%f",&temp);
    printf("\n\n Temperature In Celsius : %.2f \n\n",temp);
    temp = (temp * (9/5)) + 32 ; 
    printf("\n\n Temperature In Farenheit : %.2f \n\n",temp);
}
