#include<stdio.h>

void main()
{
	float	x,n,s;
			printf("\n\n Sum Of Series \n\n");
			printf(" Enter Value For X : ");
			scanf("%f",&x);
			printf(" Enter Value For N : ");
			scanf("%f",&n);
			s = 0;
			for(int i = 0; i <= n ; i++)
			{
				s = s + ( 1.0 / pow(x,i));
			}
			printf("\n\n Sum Of Series = %.2f \n\n",s);
}
