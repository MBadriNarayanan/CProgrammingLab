1) Print Any Message

#include<stdio.h>

void main()
{

    printf("\n\n To Print Any Message \n\n");
    
    printf(" My name is M Badri Narayanan \n\n");
    
}


2) Sum Of Two Numbers

#include<stdio.h>

void main()
{
    int a,b;
    printf("\n\n Sum Of Two Numbers \n\n");
    
    printf(" Enter Number 1 : ");
    scanf("%d",&a);
    printf(" Enter Number 2 : ");
    scanf("%d",&b);
    printf(" %d + %d = %d \n\n",a,b,a+b);
    
}


3) Area & Perimeter Of A Rectangle

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


4) Roots Of A Quadratic Equation

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



5) Marks In Five Subjects & Find The Percentage

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

6) Swap Using Temporary Variable

#include<stdio.h>

void main()
{
    int a,b,t;
    printf("\n\n Swap Using Temporary Variable \n\n");
    
    printf(" Enter Value 1 : ");
    scanf("%d",&a);
    printf(" Enter Value 2 : ");
    scanf("%d",&b);
    printf("\n\n Values Before Swapping Are %d & %d \n\n",a,b);
    t = a;
    a = b;
    b = t;
    printf("\n\n Values After Swapping Are %d & %d \n\n",a,b);
}

7) Swap Without Using Temporary Variable

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


8) Convert From Celsius To Farenheit

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

9) Simple Interest

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


10) Gross Salary

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

11) Multiply Two Float Values

#include<stdio.h>

void main()
{
    float a,b;
    printf("\n\n Multiply Two Float Values \n\n");
    
    printf(" Enter Value 1 : ");
    scanf("%f",&a);
    printf(" Enter Value 2 : ");
    scanf("%f",&b);
    printf("\n\n Product Of %.2f & %.2f Is %.2f \n\n",a,b,a*b);
}


12) Print ASCII Value Of A Character 

#include<stdio.h>

void main()
{
    char c;
    printf("\n\n ASCII Value Of A Character \n\n");
    
    printf(" Enter A Character : ");
    scanf("%c",&a);
    printf("\n\n ASCII Value Of %c Is %d \n\n,a,a);
}

13) Compute Quotient & Remainder

#include<stdio.h>

void main()
{
    int dividend,divisor;
    float quotient,remainder;
    printf("\n\n Compute Quotient & Remainder \n\n");
    
    printf(" Enter Dividend : ");
    scanf("%d",&dividend);
    printf(" Enter Divisor : ");
    scanf("%d",divisor):
    quotient = dividend / divisor ;
    remainder = dividend % divisor ;
    printf("\n\n Quotient = %.2f & Remainder = %.2 f \n\n,quotient,remainder);
}

14) Accept A String Using Gets & Print Its Length

#include<stdio.h>

void main()
{
    char st[100];
    printf("\n\n Accept A String Using Gets & Print Its Length \n\n");
    
    printf(" Enter A String : ");
    gets(s);
    printf("\n\n Length Of String %s Is %d \n\n",st,strlen(st));
}

15) Diagonal Display

#include<stdio.h>

void main()
{
    char name[20],n[4];
    int  i,j,age;
    float h;
    printf("\n\n Diagonal Display \n\n");
    
    printf(" Enter Name : ");
    gets(name);
    printf(" Enter Age : ");
    scanf("%d",&age);
    printf(" Enter Height : ");
    scanf("%f",&h);
    n[0] = a[0];
    n[1] = a[1];
    n[2] = a[2];
    n[3] = '\0';
    printf("\n\n %s ",n);
    printf("\n %4d%d",0,age);
    printf("\n%11.2f\n\n",h);
    
}
