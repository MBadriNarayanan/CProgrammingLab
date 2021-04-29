#include<stdio.h>

void main()
{
		int 	year;
				printf("\n\n Checking If Given Year Is A Leap Year \n\n");
				printf(" Enter A Year : ");
				scanf("%d",&year);
				if (year % 4 == 0 )
				{
					if (year % 100 = 0)
					{
						if (year % 400 == 0) printf(" %d Is A Leap Year \n\n",year);
						else printf(" %d Is Not A Leap Year \n\n",year);
					}
					else printf(" %d Is A Leap Year \n\n",year);
				}
				else printf(" %d Is Not A Leap Year \n\n",year);
}