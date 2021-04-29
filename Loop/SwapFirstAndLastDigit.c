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