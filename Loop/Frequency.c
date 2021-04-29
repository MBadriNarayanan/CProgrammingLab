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