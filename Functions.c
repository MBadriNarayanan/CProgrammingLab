1) Sqaure Of A Number

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


2) Fibonacci Series Using Call By Value

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


3) Swap Two Numbers Using Call By Reference

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


4) Print List Of Prime Numbers Within A Given Limit

void prime(int a)
{
	int 	flag = 0;
			for(int i = 2 ; i < = a / 2 ; i++)
			{
				if (a % i == 0)
				{
					flag = 1;
					break;
				}
			}
			if(flag == 0)
			{
				printf("  %d  ",a);
				printf("\n");
			}
}
void prime_print(lowerlimit,upperlimit)
{
	printf("\n\n Prime Numbers Within %d & %d Are \n\n",lowerlimit,upperlimit);
	for(int i = lowerlimit; i < upperlimit; i++)
	{
		prime(i);
	}
	printf("\n\n");
}
int main()
{
	int		upperlimit,lowerlimit;
			printf("\n\n Print List Of Prime Numbers Within A Given Limit \n\n");
			printf(" Enter Lowerlimit : ");
			scanf("%d",&lowerlimit);
			printf("\n\n Enter Number 2 : ");
			scanf("%d",&upperlimit);
			prime_print(lowerlimit,upperlimit);
			return 0;
}




5) Sum Of n Numbers

#include<stdio.h>

int sum(int n)
{
	int 	s ,a ;
			s = 0;
			for(int i = 0; i < n ; i++)
			{
				printf("\n Enter A Number : ");
				scanf("%d",&a);
				s = s + a;
			}
			return s;
}

int main()
{
		int 	n;
				printf("\n\n Sum Of n Numbers \n\n");
				printf(" Enter The Value Of n : ");
				scanf("%d",&n);
				printf("\n\n Sum Of n Numbers Is %d \n\n",sum(n));
				return 0;
}
