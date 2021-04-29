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