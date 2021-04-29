#include<stdio.h>

void main()
{
	int 	a[20][20],i,j,rows,columns;
			printf("\n\n Matrix Transpose \n\n");
			printf(" Enter Number Of Rows : ");
			scanf("%d",&rows);
			printf("\n\n Enter Number Of Columns : ");
			scanf("%d",&columns);
			printf("\n\n Creating The Matrix \n\n");
			for(i = 0; i < rows ; i++)
			{
				for ( j = 0 ; j < columns ; j++)
				{
					printf(" Enter Value : ");
					scanf("%d",&a[i][j]);
				}
				printf("\n");
			}
			printf("\n\n Displaying The Matrix \n\n");
			for(i = 0; i < rows ; i++)
			{
				for ( j = 0 ; j < columns ; j++)
				{
					printf(" %d  ",a[i][j]);
				}
				printf("\n");
			}
			printf("\n\n Matrix Transpose \n\n")
			for( i = 0 ; i < columns ; i++)
			{
				for( j = 0 ; j < rows ; j++)
				{
					printf(" %d  ",a[j][i]);
				}
			}
			printf("\n\n");
}
