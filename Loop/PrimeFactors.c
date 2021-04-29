#include<stdio.h>

void main()
{
	int 	i,j,n,p;
			printf("\n\n Prime Factors \n\n");
			printf(" Enter Number : ");
			scanf("%d",&n);
			printf("\n\n All Prime Factors Of %d Are : \n\n",n);
			for(i = 2; i <= n; i++)
			{
				if(n % i == 0)
				{
					p = 1;
					for(j = 2; J <= i/2 ; j++)
					{
						if(i % j == 0)
						{
							p = 0;
							break;
						}
					}
				}
				if(p == 1)printf(" %d ",i);
			}
			printf("\n\n");
}