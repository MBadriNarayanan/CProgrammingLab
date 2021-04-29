#include<stdio.h>

void main()
{
	int 	a[20][20],b[20][20],c[20][20];
	int 	i,j,rows,columns,rows1,columns1;
			printf("\n\n Matrix Addition\n\n");
			printf(" Enter Number Of Rows For Matrix 1 : ");
			scanf("%d",&rows);
			printf("\n\n Enter Number Of Columns For Matrix 1 : ");
			scanf("%d",&columns);
			printf("\n\n Creating Matrix 1 \n\n");
			for(i = 0; i < rows ; i++)
			{
				for ( j = 0 ; j < columns ; j++)
				{
					printf(" Enter Value : ");
					scanf("%d",&a[i][j]);
				}
				printf("\n");
			}
			printf("\n\n Displaying Matrix 1 \n\n");
			for(i = 0; i < rows ; i++)
			{
				for ( j = 0 ; j < columns ; j++)
				{
					printf(" %d  ",a[i][j]);
				}
				printf("\n");
			}
			printf("\n\n");
			printf(" Enter Number Of Rows For Matrix 2 : ");
			scanf("%d",&rows1);
			printf("\n\n Enter Number Of Columns For Matrix 2 : ");
			scanf("%d",&columns1);
			printf("\n\n Creating Matrix 2 \n\n");
			for(i = 0; i < rows1 ; i++)
			{
				for ( j = 0 ; j < columns1 ; j++)
				{
					printf(" Enter Value : ");
					scanf("%d",&b[i][j]);
				}
				printf("\n");
			}
			printf("\n\n Displaying Matrix 2 \n\n");
			for(i = 0; i < rows1 ; i++)
			{
				for ( j = 0 ; j < columns1 ; j++)
				{
					printf(" %d  ",b[i][j]);
				}
				printf("\n");
			}
			if(columns == rows1)
			{
				printf("\n\n Matrix Multiplication Possible \n\n");
				int k = 0;
				for(i = 0; i < rows ; i++)
				{
					for ( j = 0 ; j < columns1 ; j++)
					{
						for( k = 0 ; k < rows2 ; k++)
						{
								c[i][j] += a[i][k] * b[k][j];
						}
					}
				}
				printf("\n\n Displaying Resultant Matrix \n\n");
				for(i = 0; i < rows ; i++)
				{
					for ( j = 0 ; j < columns1 ; j++)
					{
						printf(" %d  ",c[i][j]);
					}
					printf("\n");
				}
				printf("\n\n");

			}
			else printf("\n\n Matrix Multiplication Not Possible \n\n")
}

