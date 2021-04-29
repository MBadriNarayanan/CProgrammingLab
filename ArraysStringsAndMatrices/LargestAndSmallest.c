#include<stdio.h>

void main()
{
	int 	a[50],s,g,n,i;
			printf("\n\n To Find Largest & Smallest In An Array \n\n");
			s = 0;
			g = 0;
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
					if(i == 0) s = g =a[i];
					else
					{
						if(a[i] > g)g = a[i];
						if(a[i] < s)s = a[i];
					}
			}			
			printf("\n\n The Smallest Element In The Array Is %d \n\n",s);
			printf(" The Largest Element In The Array Is %d \n\n",g);

}