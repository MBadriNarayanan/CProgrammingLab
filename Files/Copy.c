#include<stdio.h>
void main()
{
	char	ch,fname[50];
	FILE 	*p,*q;
			printf("\n\n Copy One File To Another \n\n");
			p = fopen("Sample.txt","r");
			if(p == NULL)printf("\n\n ERROR Cannot Open File \n\n");
			else
			{
				q = fopen("Copy.txt","w");
				fscanf(p,"%c",&ch);
				while(!feof(p))
				{
					fprintf(q,"%c",ch);
					fscanf(p,"%c",&ch);
				}
			}
			printf("\n\n");
			fclose(p);
			fclose(q);
}