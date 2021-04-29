#include<stdio.h>

void main()

{
	int n,s,c,t;
	printf("\n\n Sum Of Digits And Count Number Of Digits \n\n");
	printf(" Enter A Number : ");
	scanf("%d",&n);
	t = n;
	s = 0;
	c = 0;
	while(t)
	{
		s = s + (int)(t % 10);
		t = t / 10;
		c = c + 1;
	}
	printf("\n\n Sum of Digits Of %d Is %d And It Has %d Digits \n\n",n,s,c);

}