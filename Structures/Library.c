#include<stdio.h>
#include<conio.h>

typedef struct 
{
		char	title[20],author[20];
		int		isbn;
		float 	price;

}Library;

void input(Library a[],int n)
{
	printf("\n\n Creating Book Details \n\n");
	for(int i = 0; i < n ; i++)
	{
		printf(" Enter Title : ");
		gets(a[i].title);
		printf(" Enter ISBN : ");
		scanf("%d",&a[i].isbn);
		printf(" Enter Author : ");
		gets(a[i].author);
		printf(" Enter Price : ");
		scanf("%f",&a[i].price);
		printf("\n");
	}
	printf("\n\n");
}

void display(Library a[],int n)
{
	printf("\n\n Displaying Book Details \n\n");
	for(int i = 0; i < n ; i++)
	{
		printf(" Title : %d",a[i].title);
		printf(" ISBN : %d",a[i].isbn);
		printf(" Author : %s",a[i].author);
		printf(" Price : %.2f",a[i].price);
		printf("\n");
	}
	printf("\n\n");
}


void search(Library a[],int n)
{
	int 	flag;
			printf("\n\n Search Based On Book Name \n\n");
			printf(" Enter Book To Be Searched : ");
			gets(book);
			for(int i = 0; i < n ; i++)
			{
				if(strcmpi(book,a[i].title) == 0)
				{
					printf("\n\n Book Found \n\n");
					printf(" ISBN : %d \n",a[i].isbn);
					printf(" Author : %s \n",a[i].author);
					printf(" Price : %.2f \n\n",a[i].price);
					flag = 1;
				}
			}
			if(flag == 0)printf("\n\n Book Does Not Exist \n\n");
}

void select_display(Library a[],int n)
{
	float	newprice;
	int 	i;
			printf("\n\n Print Book Details With Price > Given Price \n\n");
			printf(" Enter Price : ");
			scanf("%f",&newprice);
			printf("\n\n");
			i = 0 ;
			while(i < n)
			{
					if(a[i].price > newprice)
					{
						printf(" Title : %d",a[i].title);
						printf(" ISBN : %d",a[i].isbn);
						printf(" Author : %s",a[i].author);
						printf(" Price : %.2f",a[i].price);
						printf("\n");
						i++;
					}
			}
			printf("\n\n");
}
void main()
{
	Library a[100];
	int 	n;
			printf("\n\n Library Management \n\n");
			input(a,n);
			display(a,n);
			search(a,n);
			select_display(a,n);
}