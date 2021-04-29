#include<stdio.h>

void main()
{
	int 	a,b,c;
	int		*p,*q,*x;
			printf("\n\n Add Two Numbers Using Pointers \n\n");
			p = &a;
			q = &b;
			x = &c;
			printf(" Enter Number 1 : ");
			scanf("%d",&a);
			printf("\n\n Enter Number 2 : ");
			scanf("%d",&b);
			*x = *p + *q;
			printf("\n\n Sum Of %d & %d Is %d \n\n",a,b,c);
}