#include<stdio.h>

void main()
{
	int 	a[50],i,data,flag,n;
			printf("\n\n Search For A Data Item & Display Its Position \n\n");
			printf(" Enter Number Of Elements : ");
			scanf("%d",&n);
			printf("\n\n Creating The Array \n\n");
			for(i = 0 ; i < n ; i++)
			{
					printf("\n Enter Value : ");
					scanf("%d",&a[i]);
			}
			printf("\n\n The Entered Array Is \n\n");
			for(i = 0 ; i < n ; i++)
			{
					printf("\n %d  ",a[i]);
			}
			printf("\n\n Enter Data To Be Searched : ");
			scanf("%d",&data);
			flag = -1;
			for(i = 0;i < n ; i++)
			{
				if(a[i] == data)
				{
					printf("\n\n Data Found @ %d \n\n",i+1);
					flag = 1;
				}
			}
			if(flag == -1)printf("\n\n Data Not Found \n\n");			

}