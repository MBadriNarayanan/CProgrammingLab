#include<stdio.h>

void main()
{
		int		a;
				printf("\n\n Check If Given Number Is Positive Or Negative \n\n");
				printf(" Enter A Number  : ");
				scanf("%d",&a);
				if (a > 0) printf("\n\n %d Is +ve \n\n",a);
				else if(a < 0) printf("\n\n %d Is -ve \n\n",a);
				else printf("\n\n The Number Is %d \n\n",a);
}