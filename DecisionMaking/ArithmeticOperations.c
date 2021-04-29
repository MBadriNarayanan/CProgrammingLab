#include<stdio.h>

void main()
{
		int     a,b;
		char    operation;
				printf("\n\n Arithmetic Operations Using Switch \n\n");
				printf(" 1. Additon \n");
				printf(" 2. Subtraction \n");
				printf(" 3. Multiplication \n");
				printf(" 4. Division \n\n");
				printf(" Enter Number 1 : ");
				scanf("%d",&a);
				printf(" Enter Number 2 : ");
				scanf("%d",&b);
				printf(" Enter Operation : ")
				scanf("%c",&operation);
				switch(operation)
				{
					case 1 :
							{
								printf("\n\n Sum Of %d & %d Is %d \n\n",a,b,a+b);
								break;
							}
					case 2 :
							{
								printf("\n\n Difference Of %d & %d Is %d \n\n",a,b,a-b);
								break;
							}
					case 3 :
							{
								printf("\n\n Product Of %d & %d Is %d \n\n",a,b,a*b);
								break;
							}
					case 4 :
							{
								printf("\n\n Division Of %d & %d Is %d \n\n",a,b,a/b);
								break;
							}

					default :
							{
								printf("\n\n Wrong Input \n\n");
								break;
							}
				}
				
}
