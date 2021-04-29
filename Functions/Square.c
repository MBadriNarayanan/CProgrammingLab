#include<stdio.h>

int square(int a)
{
	int 	sq;
			sq = a * a;
			return sq;
}

int main()
{
	int 	a;
			printf("\n\n Sqaure Of A Number \n\n");
			printf(" Enter A Number : ");
			scanf("%d",&a);
			printf("\n\n %d ^ 2 = %d \n\n",a,square(a));
			return 0;
}
