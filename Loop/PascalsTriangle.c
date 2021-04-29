#include<stdio.h>

void main()

{
	int r,s,c,i,j;
	printf("\n\n Pascal's Triangle \n\n");
	printf(" Enter Number Of Rows : ");
	scanf("%d",&r);
	s = 0;
	c = 0;
	printf("\n\n")
	for(i = 0; i < r; i++)
	{
		for(s = 1; s <= r - 1;s++)
		{
			printf(" %6 ");
		}
		for(j = 0; j <= i; j++)
		{
			if((j == 0)||(i == 0)) c = 1;
			else c = c * (i - j + 1) / j;
			printf(" %6d ",c);
		}
	}
	printf(" \n\n");

}