1) To Read & Display The Array Elements & Find Its Sum

#include<stdio.h>

void main()
{
	int 	a[50],sum,n,i;
			printf("\n\n To Read & Display The Array Elements & Find Its Sum \n\n");
			sum = 0;
			printf(" Enter Number Of Elements : ");
			scanf("%d",&n);
			printf("\n\n Creating The Array \n\n");
			for(i = 0 ; i < n ; i++)
			{
					printf("\n Enter Value : ");
					scanf("%d",&a[i]);
					sum = sum + a[i];
			}
			printf("\n\n The Entered Array Is \n\n");
			for(i = 0 ; i < n ; i++)
			{
					printf("\n %d  ",a[i]);
			}
			printf("\n\n The Sum Of Elements Of The Entered Array Is %d \n\n",sum);
}


2) To Find Largest & Smallest In An Array

#include<stdio.h>

void main()
{
	int 	a[50],s,g,n,i;
			printf("\n\n To Find Largest & Smallest In An Array \n\n");
			s = 0;
			g = 0;
			printf(" Enter Number Of Elements : ");
			scanf("%d",&n);
			printf("\n\n Creating The Array \n\n");
			for(i = 0 ; i < n ; i++)
			{
					printf("\n Enter Value : ");
					scanf("%d",&a[i]);
			}
			printf("\n\n The Entered Array Is \n\n");
			for(i = 0 ; i < n ; i++)
			{
					printf("\n %d  ",a[i]);
					if(i == 0) s = g =a[i];
					else
					{
						if(a[i] > g)g = a[i];
						if(a[i] < s)s = a[i];
					}
			}			
			printf("\n\n The Smallest Element In The Array Is %d \n\n",s);
			printf(" The Largest Element In The Array Is %d \n\n",g);

}


3) Sorting An Array 

#include<stdio.h>

void main()
{
	int 	a[50],i,j,n;
			printf("\n\n Sorting An Array \n\n");
			printf(" Enter Number Of Elements : ");
			scanf("%d",&n);
			printf("\n\n Creating The Array \n\n");
			for(i = 0 ; i < n ; i++)
			{
					printf("\n Enter Value : ");
					scanf("%d",&a[i]);
			}
			printf("\n\n The Entered Array Is \n\n");
			for(i = 0 ; i < n ; i++)
			{
					printf("\n %d  ",a[i]);
			}	
			printf("\n\n Array After Sorting In Ascending Order \n\n");
			for(i = 0 ; i < n-1 ; i++)
			{
				for(j = 0 ;j < n - i -1 ; j++)
				{
					if(a[j] > a[j+1])
					{
						int 	temp  = a[j];
								a[j]  = a[j + 1];
								a[j + 1] = temp;
					}
				}
			}
			for(i = 0 ; i < n ; i++)
			{
					printf("\n %d  ",a[i]);
			}
			printf("\n\n");	

}


4) Insert Data Item At A Specific Position

#include<stdio.h>

void main()
{
	int 	a[50],i,j,data,pos,n;
			printf("\n\n Insert Data Item At A Specific Position \n\n");
			printf(" Enter Number Of Elements : ");
			scanf("%d",&n);
			printf("\n\n Creating The Array \n\n");
			for(i = 0 ; i < n ; i++)
			{
					printf("\n Enter Value : ");
					scanf("%d",&a[i]);
			}
			printf("\n\n The Entered Array Is \n\n");
			for(i = 0 ; i < n ; i++)
			{
					printf("\n %d  ",a[i]);
			}
			printf("\n\n Enter Data To Be Inserted : ");
			scanf("%d",&data);
			printf("\n Enter Position At Which The Data Is To Be Inserted : ");
			scanf("%d",&pos);	
			if(pos > n)printf("\n\n Invalid Position \n\n");
			else
			{
				printf("\n\n Array After Inserting The Data \n\n");
				for(i = n ; i >= pos ; i--)
				{
					a[i] = a[i - 1];
				}
				a[pos] = data;
				n = n + 1;
				for(i = 0 ; i < n ; i++)
				{
					printf("\n %d  ",a[i]);
				}
			}
			printf("\n\n");		

}



5) Delete A Data Item 

#include<stdio.h>

void main()
{
	int 	a[50],i,data,flag,n;
			printf("\n\n Delete A Data Item \n\n");
			printf(" Enter Number Of Elements : ");
			scanf("%d",&n);
			printf("\n\n Creating The Array \n\n");
			for(i = 0 ; i < n ; i++)
			{
					printf("\n Enter Value : ");
					scanf("%d",&a[i]);
			}
			printf("\n\n The Entered Array Is \n\n");
			for(i = 0 ; i < n ; i++)
			{
					printf("\n %d  ",a[i]);
			}
			printf("\n\n Enter Data To Be Deleted : ");
			scanf("%d",&data);
			flag = -1;
			for(i = 0;i < n ; i++)
			{
				if(a[i] == data)
				{
					for(j = i;j < n;j++)
					{
						a[j] = a[j + 1]
					}
					flag = 1;
				}
			}
			if(flag == -1)printf("\n\n Data Not Found \n\n");	
			else
			{
				printf("\n\n Array After Deleting The Data \n\n");
				for(i = 0 ; i < n ; i++)
				{
						printf("\n %d  ",a[i]);
				}
				printf("\n\n");
			}		

}

6) Search For A Data Item & Display Its Position

#include<stdio.h>

void main()
{
	int 	a[50],i,data,flag,n;
			printf("\n\n Search For A Data Item & Display Its Position \n\n");
			printf(" Enter Number Of Elements : ");
			scanf("%d",&n);
			printf("\n\n Creating The Array \n\n");
			for(i = 0 ; i < n ; i++)
			{
					printf("\n Enter Value : ");
					scanf("%d",&a[i]);
			}
			printf("\n\n The Entered Array Is \n\n");
			for(i = 0 ; i < n ; i++)
			{
					printf("\n %d  ",a[i]);
			}
			printf("\n\n Enter Data To Be Searched : ");
			scanf("%d",&data);
			flag = -1;
			for(i = 0;i < n ; i++)
			{
				if(a[i] == data)
				{
					printf("\n\n Data Found @ %d \n\n",i+1);
					flag = 1;
				}
			}
			if(flag == -1)printf("\n\n Data Not Found \n\n");			

}


7) To Find Number Of Odd & Even Numbers In An Array

#include<stdio.h>

void main()
{
	int 	a[50],i,n,no,ne;
			printf("\n\n To Find Number Of Odd & Even Numbers In An Array \n\n");
			printf(" Enter Number Of Elements : ");
			scanf("%d",&n);
			printf("\n\n Creating The Array \n\n");
			for(i = 0 ; i < n ; i++)
			{
					printf("\n Enter Value : ");
					scanf("%d",&a[i]);
			}
			printf("\n\n The Entered Array Is \n\n");
			for(i = 0 ; i < n ; i++)
			{
					printf("\n %d  ",a[i]);
			}
			no = 0;
			ne = 0;
			for(i = 0;i < n ; i++)
			{
				if(a[i] % 2 == 0)ne += 1;
				else if(a[i] % 2 != 0)no += 1;
			}
			printf("\n\n No Of Odd Numbers Is %d & No Of Even Numbers Is %d \n\n",no,ne);		

}


8) Merge Two Arrays

#include<stdio.h>

void main()
{
	int 	a[50],b[50],c[100],i,j,k,n,n2;
			printf("\n\n To Find Number Of Odd & Even Numbers In An Array \n\n");
			printf(" Enter Number Of Elements For Array 1 : ");
			scanf("%d",&n);
			printf("\n\n Creating Array 1 \n\n");
			for(i = 0 ; i < n ; i++)
			{
					printf("\n Enter Value : ");
					scanf("%d",&a[i]);
			}
			printf("\n\n Displaying Array 1 \n\n");
			for(i = 0 ; i < n ; i++)
			{
					printf("\n %d  ",a[i]);
			}
			printf("\n\n Enter Number Of Elements For Array 2 : ");
			scanf("%d",&n);
			printf("\n\n Creating Array 2 \n\n");
			for(i = 0 ; i < n2 ; i++)
			{
					printf("\n Enter Value : ");
					scanf("%d",&b[i]);
			}
			printf("\n\n Displaying Array 2 \n\n");
			for(i = 0 ; i < n2 ; i++)
			{
					printf("\n %d  ",b[i]);
			}
			i = j = k = 0;
			while(i < n)
			{
				c[k] = a[i];
				i++;
				k++;			
			}
			while(j < n2)
			{
				c[k] = b[j];
				j++;
				k++;			
			}
			printf("\n\n The Merged Array Is \n\n");
			for(i = 0 ; i < n + n1 ; i++)
			{
					printf("\n %d  ",c[i]);
			}
			printf("\n\n");

}


9) To Read A String & Display Its Length


#include<stdio.h>
#include<string.h>

void main()
{
	int 	i,length;
	char	s[100];
			printf("\n\n To Read A String & Display Its Length \n\n");
			printf(" Enter A String : ");
			gets(s);
			for(i = 0 ; s[i] != '\0'; i++)
			{
					length++;
			}
			printf("\n\n The Length Of %s Is %d \n\n",s,length);

}


10) To Reverse A String

#include<stdio.h>
#include<string.h>

void main()
{
	int 	i,j;
	char	s[100],b[100];
			printf("\n\n To Reverse A String \n\n");
			printf(" Enter A String : ");
			gets(s);
			for(i = strlen(s) - 1; i >= 0 && j < strlen(s); i--,j++)
			{
				b[j] = s[i];
			}
			b[j] = '\0';
			printf("\n\n The Reverse Of %s Is %s \n\n",s,b);
}



11) To Convert Case Of A String

#include<stdio.h>
#include<string.h>

void main()
{
	int 	i,j;
	char	s[100],b[100];
			printf("\n\n To Convert Case Of A String \n\n");
			printf(" Enter A String : ");
			gets(s);
			for(i = 0; s[i] != '\0'; i++)
			{
				if((s[i] >= 'a') &&(a[i] <= 'z')) b[i] = s[i] - 32;
				else if ((s[i] >= 'A') && (s[i] <= 'Z')) b[i] = s[i] + 32 ;
			}
			b[i] = '\0';
			printf("\n\n The Case Of %s Is Converted Into %s \n\n",s,b);
}

12) To Search For A Substring In Given String

#include<stdio.h>
#include<string.h>

void main()
{
	int 	i,j,length;
	char	s[100],b[100];
			printf("\n\n To Search For A Substring In Given String \n\n");
			printf(" Enter A String : ");
			gets(s);
			printf("\n\n Enter Substring : ");
			gets(b);
			length = strlen(b);
			for( i = 0, j = 0; s[i] ! = '\0' && b[j] != '\0' ; i++)
			{
				if(a[i] == b[j]) j++;
				else j = 0;
			}
			if( j == length)printf("\n\n Substring Found @ %d \n\n",i - j + 1);
			else printf("\n\n Substring Not Found \n\n");
}


13) Insert A Symbol Into A String At Given Position

#include<stdio.h>
#include<string.h>

void main()
{
	int 	i,j,pos;
	char 	s[100],data;
			printf("\n\n Insert A Symbol Into A String At Given Position \n\n");
			printf(" Enter String : ");
			gets(s);
			printf("\n\n Enter Symbol To Be Inserted : ");
			scanf("%c",&data);
			printf("\n Enter Position At Which The Symbol Is To Be Inserted : ");
			scanf("%d",&pos);	
			if(pos > strlen(s))printf("\n\n Invalid Position \n\n");
			else
			{
				j = strlen(s);
				for(i = strlen(s) - 1 ; i > pos - 1; i--)
				{
					s[i] = s[i - 1];
				}
				s[pos] = data;
				s[j + 1] = '\0';
				printf("\n\n String After Inserting Symbol Is %s \n\n",s);
			}		

}


14) Replace A Character Withn Another Character

#include<stdio.h>
#include<string.h>

void main()
{
	int 	i,flag;
	char 	s[100],data,newdata;
			printf("\n\n Replace A Character Withn Another Character \n\n");
			printf(" Enter String : ");
			gets(s);
			printf("\n\n Enter Character To Be Modified : ");
			scanf("%c",&data);
			printf("\n Enter New Character : ");
			scanf("%c",&newdata);	
			flag = -1;
			for(i = 0 ; s[i] != '\0'; i++)
			{
				if(s[i] == data) 
				{
					s[i] = newdata;
					flag = 1;
				}
			}
			if(flag == 1)printf("\n\n String After Replacing %c With %c Is %s \n\n",data,newdata,s);
			else printf("\n\n Character Not Found \n\n");		

}

15) Merge Two Strings 

#include<stdio.h>
#include<string.h>

void main()
{
	int 	i,j,k;
	char 	s[100],b[100],c[100]data,newdata;
			printf("\n\n Merge Two Strings ( Second String First ) \n\n");
			printf(" Enter String 1 : ");
			gets(s);
			printf("\n\n Enter String 2 : ");
			gets(b);	
			i = 0;
			k = 0;
			j = 0;
			while(b[j] != '\0')
			{
				c[k] = b[j] ;
				j++;
				k++;
			}
			while(s[i] != '\0')
			{
				c[k] = s[i] ;
				i++;
				k++;
			}
			c[k] = '\0'
			printf("\n\n Merged String ( Second String First ) Is %s \n\n",c)		

}


3) Sorting An Array Of Strings

#include<stdio.h>
#include<string.h>

void main()
{
	char 	a[100][100];
	int 	i,j,n;
			printf("\n\n Sorting An Array Strings \n\n");
			printf(" Enter Number Of Elements : ");
			scanf("%d",&n);
			printf("\n\n Creating The Array \n\n");
			for(i = 0 ; i < n ; i++)
			{
					printf("\n Enter A String : ");
					gets(a[i]);
			}
			printf("\n\n The Entered Array Is \n\n");
			for(i = 0 ; i < n ; i++)
			{
					printf("\n %s  ",a[i]);
			}	
			printf("\n\n Array After Sorting In Ascending Order \n\n");
			for(i = 0 ; i < n-1 ; i++)
			{
				for(j = 0 ;j < n - i -1 ; j++)
				{
					if(strcmp(a[j],a[j+1]) > 0)
					{
						char 	temp[100];
								strcpy(temp,a[j]);
								strcpy(a[j],a[j + 1]);
								strcpy(a[j + 1],temp);
					}
				}
			}
			for(i = 0 ; i < n ; i++)
			{
					printf("\n %s  ",a[i]);
			}
			printf("\n\n");	

}


17) Create & Display A Matrix

#include<stdio.h>

void main()
{
	int 	a[20][20],i,j,rows,columns;
			printf("\n\n Create & Display A Matrix \n\n");
			printf(" Enter Number Of Rows : ");
			scanf("%d",&rows);
			printf("\n\n Enter Number Of Columns : ");
			scanf("%d",&columns);
			printf("\n\n Creating The Matrix \n\n");
			for(i = 0; i < rows ; i++)
			{
				for ( j = 0 ; j < columns ; j++)
				{
					printf(" Enter Value : ");
					scanf("%d",&a[i][j]);
				}
				printf("\n");
			}
			printf("\n\n Displaying The Matrix \n\n");
			for(i = 0; i < rows ; i++)
			{
				for ( j = 0 ; j < columns ; j++)
				{
					printf(" %d  ",a[i][j]);
				}
				printf("\n");
			}
			printf("\n\n");
}


17) Create & Display A Matrix

#include<stdio.h>

void main()
{
	int 	a[20][20],i,j,rows,columns;
			printf("\n\n Create & Display A Matrix \n\n");
			printf(" Enter Number Of Rows : ");
			scanf("%d",&rows);
			printf("\n\n Enter Number Of Columns : ");
			scanf("%d",&columns);
			printf("\n\n Creating The Matrix \n\n");
			for(i = 0; i < rows ; i++)
			{
				for ( j = 0 ; j < columns ; j++)
				{
					printf(" Enter Value : ");
					scanf("%d",&a[i][j]);
				}
				printf("\n");
			}
			printf("\n\n Displaying The Matrix \n\n");
			for(i = 0; i < rows ; i++)
			{
				for ( j = 0 ; j < columns ; j++)
				{
					printf(" %d  ",a[i][j]);
				}
				printf("\n");
			}
			printf("\n\n");
}


18) Matrix Transpose

#include<stdio.h>

void main()
{
	int 	a[20][20],i,j,rows,columns;
			printf("\n\n Matrix Transpose \n\n");
			printf(" Enter Number Of Rows : ");
			scanf("%d",&rows);
			printf("\n\n Enter Number Of Columns : ");
			scanf("%d",&columns);
			printf("\n\n Creating The Matrix \n\n");
			for(i = 0; i < rows ; i++)
			{
				for ( j = 0 ; j < columns ; j++)
				{
					printf(" Enter Value : ");
					scanf("%d",&a[i][j]);
				}
				printf("\n");
			}
			printf("\n\n Displaying The Matrix \n\n");
			for(i = 0; i < rows ; i++)
			{
				for ( j = 0 ; j < columns ; j++)
				{
					printf(" %d  ",a[i][j]);
				}
				printf("\n");
			}
			printf("\n\n Matrix Transpose \n\n")
			for( i = 0 ; i < columns ; i++)
			{
				for( j = 0 ; j < rows ; j++)
				{
					printf(" %d  ",a[j][i]);
				}
			}
			printf("\n\n");
}


19) Matrix Addition

#include<stdio.h>

void main()
{
	int 	a[20][20],b[20][20],c[20][20];
	int 	i,j,rows,columns,rows1,columns1;
			printf("\n\n Matrix Addition\n\n");
			printf(" Enter Number Of Rows For Matrix 1 : ");
			scanf("%d",&rows);
			printf("\n\n Enter Number Of Columns For Matrix 1 : ");
			scanf("%d",&columns);
			printf("\n\n Creating Matrix 1 \n\n");
			for(i = 0; i < rows ; i++)
			{
				for ( j = 0 ; j < columns ; j++)
				{
					printf(" Enter Value : ");
					scanf("%d",&a[i][j]);
				}
				printf("\n");
			}
			printf("\n\n Displaying Matrix 1 \n\n");
			for(i = 0; i < rows ; i++)
			{
				for ( j = 0 ; j < columns ; j++)
				{
					printf(" %d  ",a[i][j]);
				}
				printf("\n");
			}
			printf("\n\n");
			printf(" Enter Number Of Rows For Matrix 2 : ");
			scanf("%d",&rows1);
			printf("\n\n Enter Number Of Columns For Matrix 2 : ");
			scanf("%d",&columns1);
			printf("\n\n Creating Matrix 2 \n\n");
			for(i = 0; i < rows1 ; i++)
			{
				for ( j = 0 ; j < columns1 ; j++)
				{
					printf(" Enter Value : ");
					scanf("%d",&b[i][j]);
				}
				printf("\n");
			}
			printf("\n\n Displaying Matrix 2 \n\n");
			for(i = 0; i < rows1 ; i++)
			{
				for ( j = 0 ; j < columns1 ; j++)
				{
					printf(" %d  ",b[i][j]);
				}
				printf("\n");
			}
			if((rows == rows1) && (columns == columns1))
			{
				printf("\n\n Matrix Addition Possible \n\n");
				for(i = 0; i < rows ; i++)
				{
					for ( j = 0 ; j < columns ; j++)
					{
						c[i][j] = a[i][j] + b[i][j];
					}
				}
				printf("\n\n Displaying Resultant Matrix \n\n");
				for(i = 0; i < rows ; i++)
				{
					for ( j = 0 ; j < columns ; j++)
					{
						printf(" %d  ",c[i][j]);
					}
					printf("\n");
				}
				printf("\n\n");

			}
			else printf("\n\n Matrix Addition Not Possible \n\n")
}



20) Matrix Multiplication

#include<stdio.h>

void main()
{
	int 	a[20][20],b[20][20],c[20][20];
	int 	i,j,rows,columns,rows1,columns1;
			printf("\n\n Matrix Addition\n\n");
			printf(" Enter Number Of Rows For Matrix 1 : ");
			scanf("%d",&rows);
			printf("\n\n Enter Number Of Columns For Matrix 1 : ");
			scanf("%d",&columns);
			printf("\n\n Creating Matrix 1 \n\n");
			for(i = 0; i < rows ; i++)
			{
				for ( j = 0 ; j < columns ; j++)
				{
					printf(" Enter Value : ");
					scanf("%d",&a[i][j]);
				}
				printf("\n");
			}
			printf("\n\n Displaying Matrix 1 \n\n");
			for(i = 0; i < rows ; i++)
			{
				for ( j = 0 ; j < columns ; j++)
				{
					printf(" %d  ",a[i][j]);
				}
				printf("\n");
			}
			printf("\n\n");
			printf(" Enter Number Of Rows For Matrix 2 : ");
			scanf("%d",&rows1);
			printf("\n\n Enter Number Of Columns For Matrix 2 : ");
			scanf("%d",&columns1);
			printf("\n\n Creating Matrix 2 \n\n");
			for(i = 0; i < rows1 ; i++)
			{
				for ( j = 0 ; j < columns1 ; j++)
				{
					printf(" Enter Value : ");
					scanf("%d",&b[i][j]);
				}
				printf("\n");
			}
			printf("\n\n Displaying Matrix 2 \n\n");
			for(i = 0; i < rows1 ; i++)
			{
				for ( j = 0 ; j < columns1 ; j++)
				{
					printf(" %d  ",b[i][j]);
				}
				printf("\n");
			}
			if(columns == rows1)
			{
				printf("\n\n Matrix Multiplication Possible \n\n");
				int k = 0;
				for(i = 0; i < rows ; i++)
				{
					for ( j = 0 ; j < columns1 ; j++)
					{
						for( k = 0 ; k < rows2 ; k++)
						{
								c[i][j] += a[i][k] * b[k][j];
						}
					}
				}
				printf("\n\n Displaying Resultant Matrix \n\n");
				for(i = 0; i < rows ; i++)
				{
					for ( j = 0 ; j < columns1 ; j++)
					{
						printf(" %d  ",c[i][j]);
					}
					printf("\n");
				}
				printf("\n\n");

			}
			else printf("\n\n Matrix Multiplication Not Possible \n\n")
}
