#include <stdio.h>

void main()
{
	int		r,num,n;
			printf("\n\n Reverse A Number \n\n");
			printf(" Enter A Number : ");
			scanf("%d",&num);
			n = num;
			while(n != 0)
			{
				r = r * 10 ;
				r = r + (n % 10);
				n = n / 10;
			}
			printf("\n\n Reverse Of %d Is %d \n\n",num,r);
}