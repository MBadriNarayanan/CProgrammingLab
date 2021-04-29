#include<stdio.h>
#include<string.h>

void main()
{
	int 	i,j;
	char	s[100],b[100];
			printf("\n\n To Reverse A String \n\n");
			printf(" Enter A String : ");
			gets(s);
			for(i = strlen(s) - 1; i >= 0 && j < strlen(s); i--,j++)
			{
				b[j] = s[i];
			}
			b[j] = '\0';
			printf("\n\n The Reverse Of %s Is %s \n\n",s,b);
}
