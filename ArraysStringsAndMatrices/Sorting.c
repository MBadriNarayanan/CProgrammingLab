#include<stdio.h>

void main()
{
	int 	a[50],i,j,n;
			printf("\n\n Sorting An Array \n\n");
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
			printf("\n\n Array After Sorting In Ascending Order \n\n");
			for(i = 0 ; i < n-1 ; i++)
			{
				for(j = 0 ;j < n - i -1 ; j++)
				{
					if(a[j] > a[j+1])
					{
						int 	temp  = a[j];
								a[j]  = a[j + 1];
								a[j + 1] = temp;
					}
				}
			}
			for(i = 0 ; i < n ; i++)
			{
					printf("\n %d  ",a[i]);
			}
			printf("\n\n");	

}