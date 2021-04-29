#include<stdio.h>

void main()
{
	int		rows;
			printf("\n\n Print Pattern 2 \n\n");
			printf(" Enter Number Of Rows : ");
			scanf("%d",&rows);
			printf("\n\n");
			for(int i = 0; i < n; i++)
			{
				for(int j = 0; j < n; j++)
				{
					if( i + j >= n -1)printf("*");
					else printf(" ");
				}
				printf("\n");
			}
			printf("\n\n");
}