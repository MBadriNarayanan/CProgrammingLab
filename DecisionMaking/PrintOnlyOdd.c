#include<stdio.h>

void main()
{
		int		a,b,c,d,e;
				printf("\n\n Get 5 Values From User And Print Only Odd Numbers \n\n");
				printf(" Enter Number 1 : ");
				scanf("%d",&a);
				printf(" Enter Number 2 : ");
				scanf("%d",&b);
				printf(" Enter Number 3 : ");
				scanf("%d",&c);
				printf(" Enter Number 4 : ");
				scanf("%d",&d);
				printf(" Enter Number 5 : ");
				scanf("%d",&e);
				if(a % 2 != 0)printf("\n\n %d Is Odd \n\n",a);
				if(b % 2 != 0)printf("\n\n %d Is Odd \n\n",b);
				if(c % 2 != 0)printf("\n\n %d Is Odd \n\n",c);
				if(d % 2 != 0)printf("\n\n %d Is Odd \n\n",d);
				if(e % 2 != 0)printf("\n\n %d Is Odd \n\n",e);
				
}