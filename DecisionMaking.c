1) Check Odd Or Even

#include<stdio.h>

void main()
{
		int 	a;
				printf("\n\n To Check Odd Or Even \n\n");
				printf(" Enter A Number : ");
				scanf("%d",&a);
				if (a % 2 == 0 )printf(" %d Is Even \n\n",a);
				else printf(" %d Is Odd \n\n",a);
}

2) Checking If Given Year Is A Leap Year

#include<stdio.h>

void main()
{
		int 	year;
				printf("\n\n Checking If Given Year Is A Leap Year \n\n");
				printf(" Enter A Year : ");
				scanf("%d",&year);
				if (year % 4 == 0 )
				{
					if (year % 100 = 0)
					{
						if (year % 400 == 0) printf(" %d Is A Leap Year \n\n",year);
						else printf(" %d Is Not A Leap Year \n\n",year);
					}
					else printf(" %d Is A Leap Year \n\n",year);
				}
				else printf(" %d Is Not A Leap Year \n\n",year);
}


3) Maximum Of 3 Numbers

#include<stdio.h>

void main()
{
		int		a,b,c;
				printf("\n\n Maximum Of 3 Numbers \n\n");
				printf(" Enter Number 1 : ");
				scanf("%d",&a);
				printf(" Enter Number 2 : ");
				scanf("%d",&b);
				printf(" Enter Number 3 : ");
				scanf("%d",&c);
				if ((a > b) && (a > c)) printf("\n\n %d Is Greater Than %d & %d \n\n",a,b,c);
				else if ((b > a) && (b > c))printf("\n\n %d Is Greater Than %d & %d \n\n",b,a,c);
				else if ((c > a) && (c > b))printf("\n\n %d Is Greater Than %d & %d \n\n",c,a,b);
}

4) Check If Given Number Is Positive Or Negative

#include<stdio.h>

void main()
{
		int		a;
				printf("\n\n Check If Given Number Is Positive Or Negative \n\n");
				printf(" Enter A Number  : ");
				scanf("%d",&a);
				if (a > 0) printf("\n\n %d Is +ve \n\n",a);
				else if(a < 0) printf("\n\n %d Is -ve \n\n",a);
				else printf("\n\n The Number Is %d \n\n",a);
}

5) Check If A Given Character Is A Vowel Or A Consonant

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

6) Arithmetic Operations Using Switch

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


7) Get 5 Values From User And Print Only Odd Numbers

#include<stdio.h>

void main()
{
		int		a,b,c,d,e;
				printf("\n\n Get 5 Values From User And Print Only Odd Numbers \n\n");
				printf(" Enter Number 1 : ");
				scanf("%d",&a);
				printf(" Enter Number 2 : ");
				scanf("%d",&b);
				printf(" Enter Number 3 : ");
				scanf("%d",&c);
				printf(" Enter Number 4 : ");
				scanf("%d",&d);
				printf(" Enter Number 5 : ");
				scanf("%d",&e);
				if(a % 2 != 0)printf("\n\n %d Is Odd \n\n",a);
				if(b % 2 != 0)printf("\n\n %d Is Odd \n\n",b);
				if(c % 2 != 0)printf("\n\n %d Is Odd \n\n",c);
				if(d % 2 != 0)printf("\n\n %d Is Odd \n\n",d);
				if(e % 2 != 0)printf("\n\n %d Is Odd \n\n",e);
				
}


8) Relationship Between Two Numbers

#include<stdio.h>

void main()
{
		int		a,b;
				printf("\n\n Relationship Between Two Numbers \n\n");
				printf(" Enter Number 1 : ");
				scanf("%d",&a);
				printf(" Enter Number 2 : ");
				scanf("%d",&b);
				if(a > b)printf("\n\n %d > %d \n\n",a,b);
				if(b > a)printf("\n\n %d > %d \n\n",b,a);
				if(a == b)printf("\n\n %d = %d \n\n",a,b);
				
}

9) Printing From The Day You Start

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
