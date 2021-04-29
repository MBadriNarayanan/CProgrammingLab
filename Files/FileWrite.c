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