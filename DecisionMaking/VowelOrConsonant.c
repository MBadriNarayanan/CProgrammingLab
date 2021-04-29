#include<stdio.h>
#include<string.h>

void main()
{
		char 	a,b;
				printf("\n\n Check If A Given Character Is A Vowel Or A Consonant \n\n");
				printf(" Enter A Character  : ");
				scanf("%c",&a);
				b = tolower(a);
				if(isalpha(b))
				{

					if ((b == 'a') || (b == 'e') || (b == 'i') || (b == 'o') || (b == 'u')) printf("\n\n %c Is A Vowel \n\n",a);
					else printf("\n\n %c Is A Consonant \n\n",a);
				}
				else printf("\n\n Wrong Input \n\n");
				
}