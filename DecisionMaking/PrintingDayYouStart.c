#include<stdio.h>

void main()
{
		int		a;
				printf("\n\n Printing From The Day You Start \n\n");
				printf(" 1. Sunday \n");
				printf(" 2. Monday \n");
				printf(" 3. Tuesday \n");
				printf(" 4. Wednesday \n");
				printf(" 5. Thursday \n");
				printf(" 6. Friday \n");
				printf(" 7. Saturday \n\n");
				printf(" Enter Option : ");
				scanf("%d",&a);
				switch(option)
				{
						case 1 :
								{
									printf(" 1. Sunday \n");
								}

						case 2  :
								{
									printf(" 2. Monday \n");
								}

						case 3  :	
								{
									printf(" 3. Tuesday \n");
								}

						case 4  :
								{	
									printf(" 4. Wednesday \n");
								}

						case 5  :
								{
									printf(" 5. Thursday \n");
								}

						case 6  :
								{	
									printf(" 6. Friday \n");
								}

						case 7  :
								{	
									printf(" 7. Saturday \n\n");
									break;
								}
								
						default :
								{
									printf("\n\n Wrong Input \n\n");
								}
				}
				
}