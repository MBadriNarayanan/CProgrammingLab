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