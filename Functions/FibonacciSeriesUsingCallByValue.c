#include<stdio.h>

void fibo(int a,int b,int n)
{
	int 	c;
			printf("\n\n Fibonacci Series Starting With %d & %d Till %d \n\n",a,b,n);
			c = 0;
			c = a + b;
			while(c <= num)
			{
    
			    printf(" %d  ",c);
			    a = b;
				b = c;
			    c = a + b;
			}
			printf("\n\n");
}

int main()
{
	int 	a,b,num;
			printf("\n\n Fibonacci Series Using Call By Value \n\n");
			printf(" Enter Term 1 : ");
			scanf("%d",&a);
			printf("\n\n Enter Term 2 : ");
			scanf("%d",&b);
			printf("\n\n Enter The Term Till Which The Series Is To Be Printed : ");
			scanf("%d",&num);
			fibo(a,b,num);
			return 0;
}