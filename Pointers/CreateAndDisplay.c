#include<stdio.h>

void main()
{
	int 	a[100],n;
			printf("\n\n Access Elements Of An Array Using Pointers \n\n");
			printf(" Enter Number Of Elements : ");
			scanf("%d",&n);
			printf("\n\n Creating The Array \n\n");
			for(i = 0 ; i < n ; i++)
			{
					printf("\n Enter Value : ");
					scanf("%d",a + i);
			}
			printf("\n\n The Entered Array Is \n\n");
			for(i = 0 ; i < n ; i++)
			{
					printf("\n %d  ",*(a + i));
			}
			printf("\n\n");
}