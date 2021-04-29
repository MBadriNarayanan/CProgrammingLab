#include<stdio.h>

void main()
{
	int		i,j,rows;
			printf("\n\n Print Pattern 1 \n\n");
			printf(" Enter Number Of Rows : ");
			scanf("%d",&rows);
			printf("\n\n");
			for(int i = 1; i <= rows; i++)
			{
				for(int j = 1; j <= i; j++)
				{
					printf("*");
				}
				printf("\n");
			}
			printf("\n\n");
}
