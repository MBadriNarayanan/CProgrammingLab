#include<stdio.h>
#include<string.h>

void main()
{
	int 	i,j,k;
	char 	s[100],b[100],c[100]data,newdata;
			printf("\n\n Merge Two Strings ( Second String First ) \n\n");
			printf(" Enter String 1 : ");
			gets(s);
			printf("\n\n Enter String 2 : ");
			gets(b);	
			i = 0;
			k = 0;
			j = 0;
			while(b[j] != '\0')
			{
				c[k] = b[j] ;
				j++;
				k++;
			}
			while(s[i] != '\0')
			{
				c[k] = s[i] ;
				i++;
				k++;
			}
			c[k] = '\0'
			printf("\n\n Merged String ( Second String First ) Is %s \n\n",c)		

}
