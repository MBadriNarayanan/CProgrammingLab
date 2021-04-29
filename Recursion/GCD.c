#include<stdio.h>

int GCD(int a,int b)
{
	if(b != 0) return GCD(b,a % b);
	else return a;
}
int main()
{
	int 	a,b,gcd;
			printf("\n\n GCD Of 2 Numbers \n\n");
			printf(" Enter Number 1 : ");
			scanf("%d",&a);
			printf("\n Enter Number 2 : ");
			scanf("%d",&b);
			gcd = 0;
			gcd = GCD(a,b);
			printf("\n\n GCD Of %d & %d Is %d \n\n",a,b,gcd);
			return 0;
}