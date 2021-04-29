#include<stdio.h>

void main()
{
	int		i,n;
	float	*data;
			printf("\n\n Largest Number Using Dynamic Memory Allocation \n\n");
			printf(" Enter Number Of Elements : ");
			scanf("%d",&n);
			data = (float *)calloc(n,sizeof(float));
			if(data == NULL)printf("\n\n Memory Not Allocated \n\n");
			printf("\n\n Creating The Array \n\n");
			for(i = 0 ; i < n ; i++)
			{
					printf("\n Enter Value : ");
					scanf("%d",data + i);
			}
			printf("\n\n The Entered Array Is \n\n");
			for(i = 0 ; i < n ; i++)
			{
					printf("\n %d  ",*(a + i));
			}
			printf("\n\n");
			for(i = 1; i < num; i++)
			{
				if(* data < *(data + i))*data = *(data + i);
			}
			printf("\n\n Largest Number Is %.2f \n\n",*data);


}