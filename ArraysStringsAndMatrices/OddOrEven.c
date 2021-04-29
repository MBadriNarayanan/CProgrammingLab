#include<stdio.h>

void main()
{
	int 	a[50],i,n,no,ne;
			printf("\n\n To Find Number Of Odd & Even Numbers In An Array \n\n");
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
			no = 0;
			ne = 0;
			for(i = 0;i < n ; i++)
			{
				if(a[i] % 2 == 0)ne += 1;
				else if(a[i] % 2 != 0)no += 1;
			}
			printf("\n\n No Of Odd Numbers Is %d & No Of Even Numbers Is %d \n\n",no,ne);		

}