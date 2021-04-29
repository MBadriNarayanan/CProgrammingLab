#include<stdio.h>

void main()
{
		int		a,b,c;
				printf("\n\n Maximum Of 3 Numbers \n\n");
				printf(" Enter Number 1 : ");
				scanf("%d",&a);
				printf(" Enter Number 2 : ");
				scanf("%d",&b);
				printf(" Enter Number 3 : ");
				scanf("%d",&c);
				if ((a > b) && (a > c)) printf("\n\n %d Is Greater Than %d & %d \n\n",a,b,c);
				else if ((b > a) && (b > c))printf("\n\n %d Is Greater Than %d & %d \n\n",b,a,c);
				else if ((c > a) && (c > b))printf("\n\n %d Is Greater Than %d & %d \n\n",c,a,b);
}