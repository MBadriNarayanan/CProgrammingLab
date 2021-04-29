#include<stdio.h>
#include<math.h>

void main()
{
    int   a,b,c;
    float r1,r2;
    char  sig1,sig2,sig3;
    printf("\n\n Roots Of A Quadratic Equation \n\n");
    
    printf(" Enter Coefficient Of X^2 : ");
    scanf("%d",&a);
    printf(" Enter Coefficient Of Breadth : ");
    scanf("%f",&b);
    printf(" Enter Constant : ");
    scanf("%d",&c);
    d = (b * b) - (4 * a * c);
    (a >= 0)? sig1 = '+' : sig1 = '-';
    (b >= 0)? sig2 = '+' : sig2 = '-';
    (c >= 0)? sig3 = '+' : sig3 = '-';
    printf("\n\n Given Quadratic Equation \n\n");
    printf(" %c %d X^2 %c %d X %c %d = 0 \n\n",sig1,a,sig2,b,sig3,c);
    if(d > 0)
    {
        r1 = (- b + sqrt(d))/(2 * a);
        r2 = (- b - sqrt(d))/(2 * a);
        printf("\n\n The Roots Are %.2f & %.2f \n\n",r1,r2);
        
    }
    else if(d < 0)
    {
        printf("\n\n Discriminant Less Than Zero \n\n"):
        printf(" Imaginary Roots \n\n");
    }
    else
    {
         r1 = r2 = -b / 2;
         printf("\n\n The Roots Are %.2f and %.2f \n\n",r1,r2);
         
    }
} 