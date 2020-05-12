1) Access Elements Of An Array Using Pointers

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


2) Swap Numbers Using Call By Reference

#include<stdio.h>

void swap(int *a,int *b)
{
	int 	t;
			printf("\n\n Numbers Before Swapping a = %d & b = %d \n\n",*a,*b);
			t = *a;
			*a = *b;
			*b = t;
			printf("\n\n Numbers After Swapping a = %d & b = %d \n\n",*a,*b);
}


int main()
{
	int		a,b;
			printf("\n\n Swap Two Numbers Using Call By Reference \n\n");
			printf(" Enter Number 1 : ");
			scanf("%d",&a);
			printf("\n\n Enter Number 2 : ");
			scanf("%d",&b);
			swap(&a,&b);
			return 0;
}


3) Add Two Numbers Using Pointers

#include<stdio.h>

void main()
{
	int 	a,b,c;
	int		*p,*q,*x;
			printf("\n\n Add Two Numbers Using Pointers \n\n");
			p = &a;
			q = &b;
			x = &c;
			printf(" Enter Number 1 : ");
			scanf("%d",&a);
			printf("\n\n Enter Number 2 : ");
			scanf("%d",&b);
			*x = *p + *q;
			printf("\n\n Sum Of %d & %d Is %d \n\n",a,b,c);

}


4) Largest Number Using Dynamic Memory Allocation

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


5) 2D Array Using Pointers

#include<stdio.h>

void main()
{
	int 	a[20][20];
	int 	rows,columns;
			printf("\n\n 2D Array Using Pointers \n\n");
			printf(" Enter Number Of Rows : ");
			scanf("%d",&rows);
			printf("\n\n Enter Number Of Columns : ");
			scanf("%d",&columns);
			printf("\n\n Creating 2D Array \n\n");
			for(i = 0; i < rows ; i++)
			{
				for ( j = 0 ; j < columns ; j++)
				{
					printf(" Enter Value : ");
					scanf("%d",(*(a+i)+j));
				}
				printf("\n");
			}
			printf("\n\n Displaying Matrix 1 \n\n");
			for(i = 0; i < rows ; i++)
			{
				for ( j = 0 ; j < columns ; j++)
				{
					printf(" %d  ",*(*(a+i)+j));
				}
				printf("\n");
			}
			printf("\n\n");
}


6) Compare 2 Strings Using Pointers

#include<stdio.h>

int compare(char *a,char *b)
{
	int 	c;
			while(*a == *b)
			{
				c = *a - *b;
			}
			return c;
}

void main()
{
	char	a[50],b[50];
	int 	c
			printf("\n\n Compare 2 Strings Using Pointers \n\n");
			printf(" Enter String 1 : ");
			gets(a);
			printf("\n\n enter String 2 : ");
			gets(b);
			c = compare(a,b);
			if(c > 0)printf("\n\n %s > %s \n\n",a,b);
			else if (c < 0)printf("\n\n %s > %s \n\n",b,a);
			else printf("\n\n String %s == %s \n\n",a,b);
}
