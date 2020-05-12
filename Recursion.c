1) Factorial Of A Number

#include<stdio.h>

int factorial(int n)
{
	if (n == 0) return 1;
	else return n * factorial(n-1);
}

int main()
{
	int 	n,fact;
			printf("\n\n Factorial Of A Number \n\n");
			printf(" Enter A Number : ");
			scandf("%d",&n);
			fact = 0;
			fact = factorial(n);
			printf("\n\n %d ! = %d \n\n",fact);
			return 0;
}


2) Sum Of n Natural Numbers

#include<stdio.h>

int sum(int n,int s)
{
	if(n == 0) return s;
	else 
	{
		s = s + n;
		sum(--n,s);
	}
}

int main()
{
	int 	n,s;
			printf("\n\n Sum Of n Natural Numbers \n\n");
			printf(" Enter Value Of n : ");
			scanf("%d",&n);
			s = 0;
			s = sum(n,0);
			printf("\n\n Sum Of n Natural Numbers Till %d Is %d \n\n",n,s);
			return 0;
}


3) GCD Of 2 Numbers

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
