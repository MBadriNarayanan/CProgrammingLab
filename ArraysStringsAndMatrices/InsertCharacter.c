#include<stdio.h>
#include<string.h>

void main()
{
	int 	i,j,pos;
	char 	s[100],data;
			printf("\n\n Insert A Symbol Into A String At Given Position \n\n");
			printf(" Enter String : ");
			gets(s);
			printf("\n\n Enter Symbol To Be Inserted : ");
			scanf("%c",&data);
			printf("\n Enter Position At Which The Symbol Is To Be Inserted : ");
			scanf("%d",&pos);	
			if(pos > strlen(s))printf("\n\n Invalid Position \n\n");
			else
			{
				j = strlen(s);
				for(i = strlen(s) - 1 ; i > pos - 1; i--)
				{
					s[i] = s[i - 1];
				}
				s[pos] = data;
				s[j + 1] = '\0';
				printf("\n\n String After Inserting Symbol Is %s \n\n",s);
			}		

}