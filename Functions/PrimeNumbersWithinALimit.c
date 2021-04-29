void prime(int a)
{
	int 	flag = 0;
			for(int i = 2 ; i < = a / 2 ; i++)
			{
				if (a % i == 0)
				{
					flag = 1;
					break;
				}
			}
			if(flag == 0)
			{
				printf("  %d  ",a);
				printf("\n");
			}
}
void prime_print(lowerlimit,upperlimit)
{
	printf("\n\n Prime Numbers Within %d & %d Are \n\n",lowerlimit,upperlimit);
	for(int i = lowerlimit; i < upperlimit; i++)
	{
		prime(i);
	}
	printf("\n\n");
}
int main()
{
	int		upperlimit,lowerlimit;
			printf("\n\n Print List Of Prime Numbers Within A Given Limit \n\n");
			printf(" Enter Lowerlimit : ");
			scanf("%d",&lowerlimit);
			printf("\n\n Enter Number 2 : ");
			scanf("%d",&upperlimit);
			prime_print(lowerlimit,upperlimit);
			return 0;
}
