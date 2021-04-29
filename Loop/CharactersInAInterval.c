#include<stdio.h>

void main()
{
	char 	a,b;
			printf("\n\n Print Characters In A Given Interval \n\n");
			printf(" Enter Alphabet To Begin With : ");
			a = getch();
			putchar(a);
			printf("\n");
			printf(" Enter Alphabet To End With : ");
			b = getche();
			printf("\n\n The Alphabets Are \n\n");
			for(char i = a; i <= b; i++)
			{
				if(i == a)printf(" %18c \n",i);
				else printf(" %18c \n",i);
			}
			printf("\n\n");
}