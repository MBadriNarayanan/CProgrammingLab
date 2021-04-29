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
