#include<stdio.h>
#include<string.h>

void main()
{
	int 	i,length;
	char	s[100];
			printf("\n\n To Read A String & Display Its Length \n\n");
			printf(" Enter A String : ");
			gets(s);
			for(i = 0 ; s[i] != '\0'; i++)
			{
					length++;
			}
			printf("\n\n The Length Of %s Is %d \n\n",s,length);

}
