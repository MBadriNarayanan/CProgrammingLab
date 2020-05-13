1) To Write Members Of An Array To A File Using Fwrite

#include<stdio.h>

void main()
{
	char 	s[] = " Hello World ";
	FILE 	*fp;
			printf("\n\n Write Members Of An Array To A File Using Fwrite \n\n");
			fp = open("Demo.txt","w");
			fwrite(s,1,sizeof(s),fp);
			fclose(fp);
			printf("\n\n Written %s Into The File Demo.txt \n\n",s);
}

2) To Read Name & Marks Of Students & Store It In A File

#include<stdio.h>
void main()
{
	char	ch,fname[50];
	FILE 	*p;
			printf("\n\n Read Name & Marks Of Students & Store It In A File \n\n");
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


3) Copy One File To Another

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
