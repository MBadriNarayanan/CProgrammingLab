#include<stdio.h>

void main()
{
	int 	a[50],sum,n,i;
			printf("\n\n To Read & Display The Array Elements & Find Its Sum \n\n");
			sum = 0;
			printf(" Enter Number Of Elements : ");
			scanf("%d",&n);
			printf("\n\n Creating The Array \n\n");
			for(i = 0 ; i < n ; i++)
			{
					printf("\n Enter Value : ");
					scanf("%d",&a[i]);
					sum = sum + a[i];
			}
			printf("\n\n The Entered Array Is \n\n");
			for(i = 0 ; i < n ; i++)
			{
					printf("\n %d  ",a[i]);
			}
			printf("\n\n The Sum Of Elements Of The Entered Array Is %d \n\n",sum);
}