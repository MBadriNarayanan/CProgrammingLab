#include<stdio.h>

void main()
{
	int		n,s;
			printf("\n\n Check If A Given Number Is Prime Or Composite \n\n");
			printf(" Enter A Number : ");
			scanf("%d",&n);
			s = 0;
			for(int i = 2; i <= n/2 ; i++)
			{
				if(n % i == 0) s++ ;
			}
			if(s ==0)printf("\n\n %d Is Prime \n\n",n);
			else printf("\n\n %d Is Composite \n\n",n);
}