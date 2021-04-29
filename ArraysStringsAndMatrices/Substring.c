#include<stdio.h>
#include<string.h>

void main()
{
	int 	i,j,length;
	char	s[100],b[100];
			printf("\n\n To Search For A Substring In Given String \n\n");
			printf(" Enter A String : ");
			gets(s);
			printf("\n\n Enter Substring : ");
			gets(b);
			length = strlen(b);
			for( i = 0, j = 0; s[i] ! = '\0' && b[j] != '\0' ; i++)
			{
				if(a[i] == b[j]) j++;
				else j = 0;
			}
			if( j == length)printf("\n\n Substring Found @ %d \n\n",i - j + 1);
			else printf("\n\n Substring Not Found \n\n");
}