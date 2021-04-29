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