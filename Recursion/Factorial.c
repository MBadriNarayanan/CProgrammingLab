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