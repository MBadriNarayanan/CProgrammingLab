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