#include<stdio.h>
void main()
{
	char	ch,fname[50];
	FILE 	*p;
			printf("\n\n Display File Contents \n\n");
			p = fopen("Sample.txt","r");
			if(p == NULL)printf("\n\n ERROR Cannot Open File \n\n");
			else
			{
				fscanf(p,"%c",&ch);
				while(!feof(p))
				{
					printf("%c",ch);
					fscanf(p,"%c",&ch);
				}
			}
			printf("\n\n");
			fclose(p);
}

