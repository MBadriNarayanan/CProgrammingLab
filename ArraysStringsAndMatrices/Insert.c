#include<stdio.h>

void main()
{
	int 	a[50],i,j,data,pos,n;
			printf("\n\n Insert Data Item At A Specific Position \n\n");
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
			printf("\n\n Enter Data To Be Inserted : ");
			scanf("%d",&data);
			printf("\n Enter Position At Which The Data Is To Be Inserted : ");
			scanf("%d",&pos);	
			if(pos > n)printf("\n\n Invalid Position \n\n");
			else
			{
				printf("\n\n Array After Inserting The Data \n\n");
				for(i = n ; i >= pos ; i--)
				{
					a[i] = a[i - 1];
				}
				a[pos] = data;
				n = n + 1;
				for(i = 0 ; i < n ; i++)
				{
					printf("\n %d  ",a[i]);
				}
			}
			printf("\n\n");		

}