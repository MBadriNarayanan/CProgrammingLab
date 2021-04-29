#include<stdio.h>

void main()
{
	int 	a,b,s ; 
			s = 0;
			printf("\n\n To Check If Two Numbers Are Amicable Numbers Or Not \n\n");
			printf(" Enter Number 1 : ");
			scanf("%d",&a);
			printf(" Enter Number 2 : ");
			scanf("%d",&b);
			for(int i = 1; i < a ; i++)
			{
				if( a % i == 0) s += i;
			}
			if(s == b)printf("\n\n The Numbers Are Amicable Numbers \n\n");
			else printf("\n\n The Numbers Are Not Amicable Numbers \n\n");
}