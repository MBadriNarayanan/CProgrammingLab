#include<stdio.h>

void main()
{
    float length,breadth;
    printf("\n\n Area & Perimeter Of A Rectangle \n\n");
    
    printf(" Enter Length : ");
    scanf("%f",&length);
    printf(" Enter Breadth : ");
    scanf("%f",&breadth);
    printf(" Area Of Rectangle = %.2f \n\n",length * breadth);
    printf(" Perimeter Of Rectangle = %.2f \n\n",2 * (length + breadth));
}