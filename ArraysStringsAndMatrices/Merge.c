#include<stdio.h>

void main()
{
	int 	a[50],b[50],c[100],i,j,k,n,n2;
			printf("\n\n To Find Number Of Odd & Even Numbers In An Array \n\n");
			printf(" Enter Number Of Elements For Array 1 : ");
			scanf("%d",&n);
			printf("\n\n Creating Array 1 \n\n");
			for(i = 0 ; i < n ; i++)
			{
					printf("\n Enter Value : ");
					scanf("%d",&a[i]);
			}
			printf("\n\n Displaying Array 1 \n\n");
			for(i = 0 ; i < n ; i++)
			{
					printf("\n %d  ",a[i]);
			}
			printf("\n\n Enter Number Of Elements For Array 2 : ");
			scanf("%d",&n);
			printf("\n\n Creating Array 2 \n\n");
			for(i = 0 ; i < n2 ; i++)
			{
					printf("\n Enter Value : ");
					scanf("%d",&b[i]);
			}
			printf("\n\n Displaying Array 2 \n\n");
			for(i = 0 ; i < n2 ; i++)
			{
					printf("\n %d  ",b[i]);
			}
			i = j = k = 0;
			while(i < n)
			{
				c[k] = a[i];
				i++;
				k++;			
			}
			while(j < n2)
			{
				c[k] = b[j];
				j++;
				k++;			
			}
			printf("\n\n The Merged Array Is \n\n");
			for(i = 0 ; i < n + n1 ; i++)
			{
					printf("\n %d  ",c[i]);
			}
			printf("\n\n");

}