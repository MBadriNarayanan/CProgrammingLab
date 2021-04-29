#include<stdio.h>
#include<string.h>

void main()
{
	char 	a[100][100];
	int 	i,j,n;
			printf("\n\n Sorting An Array Strings \n\n");
			printf(" Enter Number Of Elements : ");
			scanf("%d",&n);
			printf("\n\n Creating The Array \n\n");
			for(i = 0 ; i < n ; i++)
			{
					printf("\n Enter A String : ");
					gets(a[i]);
			}
			printf("\n\n The Entered Array Is \n\n");
			for(i = 0 ; i < n ; i++)
			{
					printf("\n %s  ",a[i]);
			}	
			printf("\n\n Array After Sorting In Ascending Order \n\n");
			for(i = 0 ; i < n-1 ; i++)
			{
				for(j = 0 ;j < n - i -1 ; j++)
				{
					if(strcmp(a[j],a[j+1]) > 0)
					{
						char 	temp[100];
								strcpy(temp,a[j]);
								strcpy(a[j],a[j + 1]);
								strcpy(a[j + 1],temp);
					}
				}
			}
			for(i = 0 ; i < n ; i++)
			{
					printf("\n %s  ",a[i]);
			}
			printf("\n\n");	

}
