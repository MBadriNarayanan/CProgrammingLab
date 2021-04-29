#include<stdio.h>

void main()
{
    float a,b,c,d,e,total,percentage;
    printf("\n\n Marks In Five Subjects & Find The Percentage \n\n");
    
    printf(" Enter Mark In Subject 1 Out Of 100 : ");
    scanf("%f",&a);
    printf(" Enter Mark In Subject 2 Out Of 100 : ");
    scanf("%f",&b);
    printf(" Enter Mark In Subject 3 Out Of 100 : ");
    scanf("%f",&c);
    printf(" Enter Mark In Subject 4 Out Of 100 : ");
    scanf("%f",&d);
    printf(" Enter Mark In Subject 5 Out Of 100: ");
    scanf("%f",&e);
    total = a + b + c + d + e ;
    avg = total / 500 ;
    percentage = avg * 100 ;
    printf("\n\n Total Marks In Five Subjects Is %.2f \n\n",total);
    printf(" Percentage Is %.2f \n\n ",percentage);
}