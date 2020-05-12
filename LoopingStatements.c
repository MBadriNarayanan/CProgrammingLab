1)  Sum Of First N Numbers

#include <stdio.h>

void main()
{
	int		n,sum;
			printf("\n\n Sum Of First N Numbers \n\n");
			printf(" Enter Value Of N : ");
			scanf("%d",&n);
			for(int i = 0;i <= n; i++)
			{
				s = s + i ;
			}
			printf("\n\n Sum Of First %d Numbers Is %d \n\n",n,s);
}

1)  Sum Of N Numbers

#include <stdio.h>

void main()
{
	int		n,num,sum;
			printf("\n\n Sum Of N Numbers \n\n");
			printf(" Enter Value Of N : ");
			scanf("%d",&n);
			for(int i = 0;i <= n; i++)
			{
				printf(" Enter A Number : ");
				scanf("%d",&num);
				s = s + num;
			}
			printf("\n\n Sum Of %d Numbers Is %d \n\n",n,s);
}


3) Reverse A Number


#include <stdio.h>

void main()
{
	int		r,num,n;
			printf("\n\n Reverse A Number \n\n");
			printf(" Enter A Number : ");
			scanf("%d",&num);
			n = num;
			while(n != 0)
			{
				r = r * 10 ;
				r = r + (n % 10);
				n = n / 10;
			}
			printf("\n\n Reverse Of %d Is %d \n\n",num,r);
}

4) Multiplication Table

#include <stdio.h>

void main()
{
	int		num;
			printf("\n\n Multiplication Table \n\n");
			printf(" Enter Number Whose Table Is To Be Printed : ");
			scanf("%d",&num);
			for(int i = 0; i <= 10; i++)
			{
				printf("\n %d * %d = %d \n",n,i,n * i);
			}
			printf("\n\n");
}

5) Check Palindrome

#include <stdio.h>

void main()
{
	char    a[100];
	int 	i,j;
			printf("\n\n Check Palindrome \n\n");
			printf(" Enter A String : ");
			gets(a);
			i = strlen(a) - 1;
			j = 0;
			for(; ((a[i] == a[j]) && (j <= i)) ; i--,j++);
			if (i <= j)printf("\n\n %s Is A Palindrome \n\n",a);
			else printf("\n\n %s Is Not A Palindrome \n\n",a)
			printf("\n\n");
}


6) Print Pattern 1

#include<stdio.h>

void main()
{
	int		i,j,rows;
			printf("\n\n Print Pattern 1 \n\n");
			printf(" Enter Number Of Rows : ");
			scanf("%d",&rows);
			printf("\n\n");
			for(int i = 1; i <= rows; i++)
			{
				for(int j = 1; j <= i; j++)
				{
					printf("*");
				}
				printf("\n");
			}
			printf("\n\n");
}


7) Fibonacci Series

#include<stdio.h>

void main()
{
	int		a,b,c,n;
			printf("\n\n Fibonacci Series \n\n");
			printf(" Enter The Term Till Which The Series Is To Be Printed : ");
			scanf("%d",&n);
			a = -1;
			b = 1;
			c = 0;
			c = a + b;
			while(c < num)
			{
    
			    print(" %d  ",c);
			    a = b;
				b = c;
			    c = a + b;
			}
			printf("\n\n");
}


8) Factorial Of A Number 

#include<stdio.h>

void main()
{
	int		a,b,c,n;
			printf("\n\n Factorial Of A Number \n\n");
			printf(" Enter A Number : ");
			scanf("%d",&n);
			a = -1;
			b = 1;
			c = 0;
			c = a + b;
			while(c < num)
			{
    
			    print(" %d  ",c);
			    a = b;
				b = c;
			    c = a + b;
			}
			printf("\n\n");
}

9) Check If A Given Number Is Prime Or Composite

#include<stdio.h>

void main()
{
	int		n,s;
			printf("\n\n Check If A Given Number Is Prime Or Composite \n\n");
			printf(" Enter A Number : ");
			scanf("%d",&n);
			s = 0;
			for(int i = 2; i <= n/2 ; i++)
			{
				if(n % i == 0) s++ ;
			}
			if(s ==0)printf("\n\n %d Is Prime \n\n",n);
			else printf("\n\n %d Is Composite \n\n",n);
}


10) Sum Of Series 

#include<stdio.h>

void main()
{
	float	x,n,s;
			printf("\n\n Sum Of Series \n\n");
			printf(" Enter Value For X : ");
			scanf("%f",&x);
			printf(" Enter Value For N : ");
			scanf("%f",&n);
			s = 0;
			for(int i = 0; i <= n ; i++)
			{
				s = s + ( 1.0 / pow(x,i));
			}
			printf("\n\n Sum Of Series = %.2f \n\n",s);
}

11) Check If A Given Number Is An Armstrong Number

#include<stdio.h>

void main()

{
	int n,num,r,s,c,t;
	printf("\n\n Check If A Given Number Is An Armstrong Number Or Not \n\n");
	printf(" Enter A Number : ");
	scanf("%d",&n);
	num = n;
	t = n;
	s = 0;
	r = 0;
	c = 0;
	while(t)
	{
		t = t / 10;
		c = c + 1;
	}
	while(num)
	{
	    
	    r = num % 10;
	    
	    s = s + (int)ceil(pow(r,c));
	    
	    num = num / 10 ;

	}
	if(n == s)printf("\n\n %d Is An Armstrong Number \n\n",temp);
	    
	else printf("\n\n %d Is Not An Armstrong Number \n\n",temp);

}


12) Sum Of Digits And Count Number Of Digits

#include<stdio.h>

void main()

{
	int n,s,c,t;
	printf("\n\n Sum Of Digits And Count Number Of Digits \n\n");
	printf(" Enter A Number : ");
	scanf("%d",&n);
	t = n;
	s = 0;
	c = 0;
	while(t)
	{
		s = s + (int)(t % 10);
		t = t / 10;
		c = c + 1;
	}
	printf("\n\n Sum of Digits Of %d Is %d And It Has %d Digits \n\n",n,s,c);

}


13) Pascals Triangle

#include<stdio.h>

void main()

{
	int r,s,c,i,j;
	printf("\n\n Pascal's Triangle \n\n");
	printf(" Enter Number Of Rows : ");
	scanf("%d",&r);
	s = 0;
	c = 0;
	printf("\n\n")
	for(i = 0; i < r; i++)
	{
		for(s = 1; s <= r - 1;s++)
		{
			printf(" %6 ");
		}
		for(j = 0; j <= i; j++)
		{
			if((j == 0)||(i == 0)) c = 1;
			else c = c * (i - j + 1) / j;
			printf(" %6d ",c);
		}
	}
	printf(" \n\n");

}



14) LCM Of Two Numbers

#include<stdio.h>

void main()
{
	int 	a,b,min ;
			printf("\n\n LCM Of Two Numbers \n\n");
			printf(" Enter Number 1 : ");
			scanf("%d",&a);
			printf(" Enter Number 2 : ");
			scanf("%d",&b);
			min = (a > b) ? a : b ;
			while(1)
			{
				if((min % a == 0) && (min % b == 0))
				{
					printf("\n\n LCM Is %d \n\n",min);
					break;
				}
				min ++;
			}
}

15) Swap First & Last Digit Of A Number

#include<stdio.h>

void main()
{
	int 	n,last,first,temp,swap,count;
			printf("\n\n Swap First And Last Digit Of A Number \n\n");
			printf(" Enter A Number  : ");
			scanf("%d",&n);
			count = 0;
			temp = n;
			last = temp % 10;
			count = (int)log10(temp);
			while(temp >= 10)
			{

					temp /= 10;					
			}
			first = temp;
			swap = (last * pow(10,count) + first) + (n - (first * pow(10,count) + last)) ;
			printf("\n\n %d Is Swapped To %d \n\n",n,swap);
}


16) To Check If Two Numbers Are Amicable Numbers Or Not

#include<stdio.h>

void main()
{
	int 	a,b,s ; 
			s = 0;
			printf("\n\n To Check If Two Numbers Are Amicable Numbers Or Not \n\n");
			printf(" Enter Number 1 : ");
			scanf("%d",&a);
			printf(" Enter Number 2 : ");
			scanf("%d",&b);
			for(int i = 1; i < a ; i++)
			{
				if( a % i == 0) s += i;
			}
			if(s == b)printf("\n\n The Numbers Are Amicable Numbers \n\n");
			else printf("\n\n The Numbers Are Not Amicable Numbers \n\n");
}

17) To Print The Prime Factors Of A Number

#include<stdio.h>

void main()
{
	int 	i,j,n,p;
			printf("\n\n Prime Factors \n\n");
			printf(" Enter Number : ");
			scanf("%d",&n);
			printf("\n\n All Prime Factors Of %d Are : \n\n",n);
			for(i = 2; i <= n; i++)
			{
				if(n % i == 0)
				{
					p = 1;
					for(j = 2; J <= i/2 ; j++)
					{
						if(i % j == 0)
						{
							p = 0;
							break;
						}
					}
				}
				if(p == 1)printf(" %d ",i);
			}
			printf("\n\n");
}


18) To Print The Frequency Of A Digit In A Number 

#include<stdio.h>

void main()
{
	int 	i,l,f[10];
			printf("\n\n Frequency Of Digits In A Number \n\n");
			for(int i = 0; i < 10 ; i++)
			{
				f[i] = 0;
			}
			printf(" Enter Number : ");
			scanf("%d",&n);
			while(n != 0)
			{
				l = n % 10;
				n /= 10;
				f[l] ++ ;
			}
			printf("\n\n Frequency Is \n\n");
			for(int i = 0;i < 10; i++)
			{
				printf(" Frequency Of %d = %d \n\n",i,f[i]);
			}
}

19) Print Pattern 2

#include<stdio.h>

void main()
{
	int		rows;
			printf("\n\n Print Pattern 2 \n\n");
			printf(" Enter Number Of Rows : ");
			scanf("%d",&rows);
			printf("\n\n");
			for(int i = 0; i < n; i++)
			{
				for(int j = 0; j < n; j++)
				{
					if( i + j >= n -1)printf("*");
					else printf(" ");
				}
				printf("\n");
			}
			printf("\n\n");
}


20) Print Characters In A Given Interval

#include<stdio.h>

void main()
{
	char 	a,b;
			printf("\n\n Print Characters In A Given Interval \n\n");
			printf(" Enter Alphabet To Begin With : ");
			a = getch();
			putchar(a);
			printf("\n");
			printf(" Enter Alphabet To End With : ");
			b = getche();
			printf("\n\n The Alphabets Are \n\n");
			for(char i = a; i <= b; i++)
			{
				if(i == a)printf(" %18c \n",i);
				else printf(" %18c \n",i);
			}
			printf("\n\n");
}
