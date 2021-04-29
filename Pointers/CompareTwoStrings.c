#include<stdio.h>

int compare(char *a,char *b)
{
	int 	c;
			while(*a == *b)
			{
				c = *a - *b;
			}
			return c;
}

void main()
{
	char	a[50],b[50];
	int 	c
			printf("\n\n Compare 2 Strings Using Pointers \n\n");
			printf(" Enter String 1 : ");
			gets(a);
			printf("\n\n enter String 2 : ");
			gets(b);
			c = compare(a,b);
			if(c > 0)printf("\n\n %s > %s \n\n",a,b);
			else if (c < 0)printf("\n\n %s > %s \n\n",b,a);
			else printf("\n\n String %s == %s \n\n",a,b);
}