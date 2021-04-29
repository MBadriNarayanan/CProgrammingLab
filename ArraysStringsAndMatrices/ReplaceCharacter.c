#include<stdio.h>
#include<string.h>

void main()
{
	int 	i,flag;
	char 	s[100],data,newdata;
			printf("\n\n Replace A Character Withn Another Character \n\n");
			printf(" Enter String : ");
			gets(s);
			printf("\n\n Enter Character To Be Modified : ");
			scanf("%c",&data);
			printf("\n Enter New Character : ");
			scanf("%c",&newdata);	
			flag = -1;
			for(i = 0 ; s[i] != '\0'; i++)
			{
				if(s[i] == data) 
				{
					s[i] = newdata;
					flag = 1;
				}
			}
			if(flag == 1)printf("\n\n String After Replacing %c With %c Is %s \n\n",data,newdata,s);
			else printf("\n\n Character Not Found \n\n");		

}