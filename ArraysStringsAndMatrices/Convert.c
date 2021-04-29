#include<stdio.h>
#include<string.h>

void main()
{
	int 	i,j;
	char	s[100],b[100];
			printf("\n\n To Convert Case Of A String \n\n");
			printf(" Enter A String : ");
			gets(s);
			for(i = 0; s[i] != '\0'; i++)
			{
				if((s[i] >= 'a') &&(a[i] <= 'z')) b[i] = s[i] - 32;
				else if ((s[i] >= 'A') && (s[i] <= 'Z')) b[i] = s[i] + 32 ;
			}
			b[i] = '\0';
			printf("\n\n The Case Of %s Is Converted Into %s \n\n",s,b);
}