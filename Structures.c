1) Banking Operations

#include<stdio.h>
#include<conio.h>

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
		gets(a[i].name);
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
									if(amount > c[i].balance)printf("\n\n You Do Not Have Enough Money In Your Account \n\n");
									else
									{
										printf("\n\n Withdrawal Successful \n\n");
										a[i].balance = a[i].balance - ammount ;
										printf("\n\n Remaining Balance : %.2f \n\n",a[i].balance);
									}
									break;
								}
						case 2 :
								{

									printf("\n Enter Amount To Be Deposited : ");
									scanf("%f",&amount);
									printf("\n\n Deposit Successful \n\n");
									a[i].balance = a[i].balance + ammount ;
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



2) Marksheet Of 5 Students


#include<stdio.h>
#include<conio.h>

typedef struct 
{
		char	name[20];
		int		regno;
		float 	chem,math,phy;

}Marksheet;

void input(Marksheet a[],int n)
{
	printf("\n\n Creating Student Details \n\n");
	for(int i = 0; i < n ; i++)
	{
		printf(" Enter Name : ");
		gets(a[i].name);
		printf(" Enter Register No : ");
		scanf("%d",&a[i].regno);
		printf(" Enter Mark In Maths : ");
		scanf("%f",&a[i].math);
		printf(" Enter Mark In Physics : ");
		scanf("%f",&a[i].phy);
		printf(" Enter Mark In Chemistry : ");
		scanf("%f",&a[i].chem);
		printf("\n");
	}
	printf("\n\n");
}

void grade(float mark,char subject[])
{
	if(mark >= 91)printf(" Grade In %s : O \n\n",subject);
	else if((mark >= 81) && (mark <= 90))printf(" Grade In %s : A+ \n",subject);
	else if((mark >= 71) && (mark <= 80))printf(" Grade In %s : A \n",subject);
	else if((mark >= 61) && (mark <= 70))printf(" Grade In %s : B+ \n",subject);
	else if((mark >= 51) && (mark <= 60))printf(" Grade In %s : B \n",subject);
	else printf(" Grade In %s : RA \n\n",subject);
}
void display(Marksheet a[],int n)
{
	printf("\t\t\t* MARKSHEET* \n");
	for(int i = 0; i < n ; i++)
	{
		printf("\t Name : %s \t\t\t\t\t Register Number : %d \n",a[i].name,a[i].regno);
		printf("\t Subject \t Marks \n");
		printf("\t Maths \t\t %.2f \n",a[i].math);
		printf("\t Physics \t\t %.2f \n",a[i].phy);
		printf("\t Chemistry \t\t %.2f \n",a[i].chem);
		printf("\n\n");
		grade(a[i].math,"Math");
		grade(a[i].phy,"Physics");
		grade(a[i].chem,"Chemistry");
		printf("\n\n");
	}
	printf("\n\n");
}
void main()
{
	Marksheet a[100];
			printf("\n\n Marksheet Of 5 Students \n\n");
			input(a,5);
			display(a,5);
}


3) Library Management


#include<stdio.h>
#include<conio.h>

typedef struct 
{
		char	title[20],author[20];
		int		isbn;
		float 	price;

}Library;

void input(Library a[],int n)
{
	printf("\n\n Creating Book Details \n\n");
	for(int i = 0; i < n ; i++)
	{
		printf(" Enter Title : ");
		gets(a[i].title);
		printf(" Enter ISBN : ");
		scanf("%d",&a[i].isbn);
		printf(" Enter Author : ");
		gets(a[i].author);
		printf(" Enter Price : ");
		scanf("%f",&a[i].price);
		printf("\n");
	}
	printf("\n\n");
}

void display(Library a[],int n)
{
	printf("\n\n Displaying Book Details \n\n");
	for(int i = 0; i < n ; i++)
	{
		printf(" Title : %d",a[i].title);
		printf(" ISBN : %d",a[i].isbn);
		printf(" Author : %s",a[i].author);
		printf(" Price : %.2f",a[i].price);
		printf("\n");
	}
	printf("\n\n");
}


void search(Library a[],int n)
{
	int 	flag;
			printf("\n\n Search Based On Book Name \n\n");
			printf(" Enter Book To Be Searched : ");
			gets(book);
			for(int i = 0; i < n ; i++)
			{
				if(strcmpi(book,a[i].title) == 0)
				{
					printf("\n\n Book Found \n\n");
					printf(" ISBN : %d \n",a[i].isbn);
					printf(" Author : %s \n",a[i].author);
					printf(" Price : %.2f \n\n",a[i].price);
					flag = 1;
				}
			}
			if(flag == 0)printf("\n\n Book Does Not Exist \n\n");
}

void select_display(Library a[],int n)
{
	float	newprice;
	int 	i;
			printf("\n\n Print Book Details With Price > Given Price \n\n");
			printf(" Enter Price : ");
			scanf("%f",&newprice);
			printf("\n\n");
			i = 0 ;
			while(i < n)
			{
					if(a[i].price > newprice)
					{
						printf(" Title : %d",a[i].title);
						printf(" ISBN : %d",a[i].isbn);
						printf(" Author : %s",a[i].author);
						printf(" Price : %.2f",a[i].price);
						printf("\n");
						i++;
					}
			}
			printf("\n\n");
}
void main()
{
	Library a[100];
	int 	n;
			printf("\n\n Library Management \n\n");
			input(a,n);
			display(a,n);
			search(a,n);
			select_display(a,n);
}
