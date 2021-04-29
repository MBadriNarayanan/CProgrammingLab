#include<stdio.h>

void main()
{
	int 	a,b,min ;
			printf("\n\n LCM Of Two Numbers \n\n");
			printf(" Enter Number 1 : ");
			scanf("%d",&a);
			printf(" Enter Number 2 : ");
			scanf("%d",&b);
			min = (a > b) ? a : b ;
			while(1)
			{
				if((min % a == 0) && (min % b == 0))
				{
					printf("\n\n LCM Is %d \n\n",min);
					break;
				}
				min ++;
			}
}
