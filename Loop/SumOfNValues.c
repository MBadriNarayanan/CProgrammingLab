#include <stdio.h>

void main()
{
	int		n,num,sum;
			printf("\n\n Sum Of N Numbers \n\n");
			printf(" Enter Value Of N : ");
			scanf("%d",&n);
			for(int i = 0;i <= n; i++)
			{
				printf(" Enter A Number : ");
				scanf("%d",&num);
				s = s + num;
			}
			printf("\n\n Sum Of %d Numbers Is %d \n\n",n,s);
}