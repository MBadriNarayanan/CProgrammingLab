
#include<stdio.h>

void main()
{
    float p,n,r,amount,si;
    printf("\n\n Simple Interest \n\n");
    
    printf(" Enter Principle : ");
    scanf("%f",&p);
    printf(" Enter Number Of Years : ");
    scanf("%f",&n);
    printf(" Enter Rate Of Interest : ");
    scanf("%f",&r);
    si = (p * n * r)/100 ;
    amount = si + p ;
    printf("\n\n Simple Interest : %.2f \n\n",si);
    printf("\n\n Amount : %.2f \n\n",amount);
}