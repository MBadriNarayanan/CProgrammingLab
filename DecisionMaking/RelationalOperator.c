#include<stdio.h>

void main()
{
		int		a,b;
				printf("\n\n Relationship Between Two Numbers \n\n");
				printf(" Enter Number 1 : ");
				scanf("%d",&a);
				printf(" Enter Number 2 : ");
				scanf("%d",&b);
				if(a > b)printf("\n\n %d > %d \n\n",a,b);
				if(b > a)printf("\n\n %d > %d \n\n",b,a);
				if(a == b)printf("\n\n %d = %d \n\n",a,b);
				
}