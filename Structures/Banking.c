#include<stdio.h>

typedef struct 
{
		char	name[20];
		int		accno;
		float 	balance;
}Bank;

void input(Bank a[],int n)
{
	printf("\n\n Creating Customer Details \n\n");
	for(int i = 0; i < n ; i++)
	{
		printf(" Enter Name : ");
		scanf("%s", a[i].name);
		printf(" Enter Account No : ");
		scanf("%d",&a[i].accno);
		printf(" Enter Balance : ");
		scanf("%f",&a[i].balance);
		printf("\n");
	}
	printf("\n\n");
}

void display(Bank a[],int n)
{
	printf("\n\n Displaying Customer Details \n\n");
	for(int i = 0; i < n ; i++)
	{
		printf(" Name : %s ",a[i].name);
		printf(" Account No : %d",a[i].accno);
		printf(" Balance : %f",a[i].balance);
		printf("\n");
	}
	printf("\n\n");
}

void transaction(Bank a[],int n)
{
	int 	accountnumber;
			printf(" Enter Account Number : ");
			scanf("%d",&accountnumber);
			for(int i = 0 ;i < n ; i++)
			{
				if(a[i].accno == accountnumber)
				{
					int option;
					printf(" Name : %s ",a[i].name);
					printf(" Balance : %.2f",a[i].balance);
					printf("\n\n");
					printf(" 1. Withdrawal \n");
					printf(" 2. Deposit \n");
					printf(" Please Select Option : ");
					scanf("%d",&option);
					if(option !=1 && option !=2)
					{
						printf("\n\n Enter Valid Option \n\n");
						printf(" Please Select Option : ");
						scanf("%d",&option);
					}
					float 	amount;
					switch(option)
					{
						case 1 :
								{
									printf("\n Enter Amount To Be Withdrawn : ");
									scanf("%f",&amount);
									if(amount > a[i].balance)printf("\n\n You Do Not Have Enough Money In Your Account \n\n");
									else
									{
										printf("\n\n Withdrawal Successful \n\n");
										a[i].balance = a[i].balance - amount ;
										printf("\n\n Remaining Balance : %.2f \n\n",a[i].balance);
									}
									break;
								}
						case 2 :
								{

									printf("\n Enter Amount To Be Deposited : ");
									scanf("%f",&amount);
									printf("\n\n Deposit Successful \n\n");
									a[i].balance = a[i].balance + amount ;
									printf("\n\n New Balance : %.2f \n\n",a[i].balance);
									break;
								}
					}
				}
			}
			printf("\n\n");
}
void main()
{
	int		n;
	Bank 	a[100];
			printf("\n\n Banking Operations \n\n");
			printf(" Enter Number Of Customers : ");
			scanf("%d",&n);
			input(a,n);
			display(a,n);
			transaction(a,n);
			printf("\n\n Displaying Customer Details After Transaction \n\n");
			display(a,n);
}