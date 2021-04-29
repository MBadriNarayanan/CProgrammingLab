#include<stdio.h>

void main()
{
	int 	a[20][20];
	int 	rows,columns;
			printf("\n\n 2D Array Using Pointers \n\n");
			printf(" Enter Number Of Rows : ");
			scanf("%d",&rows);
			printf("\n\n Enter Number Of Columns : ");
			scanf("%d",&columns);
			printf("\n\n Creating 2D Array \n\n");
			for(i = 0; i < rows ; i++)
			{
				for ( j = 0 ; j < columns ; j++)
				{
					printf(" Enter Value : ");
					scanf("%d",(*(a+i)+j));
				}
				printf("\n");
			}
			printf("\n\n Displaying Matrix 1 \n\n");
			for(i = 0; i < rows ; i++)
			{
				for ( j = 0 ; j < columns ; j++)
				{
					printf(" %d  ",*(*(a+i)+j));
				}
				printf("\n");
			}
			printf("\n\n");
}