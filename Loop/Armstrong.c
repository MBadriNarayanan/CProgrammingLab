#include<stdio.h>

void main()

{
	int n,num,r,s,c,t;
	printf("\n\n Check If A Given Number Is An Armstrong Number Or Not \n\n");
	printf(" Enter A Number : ");
	scanf("%d",&n);
	num = n;
	t = n;
	s = 0;
	r = 0;
	c = 0;
	while(t)
	{
		t = t / 10;
		c = c + 1;
	}
	while(num)
	{
	    
	    r = num % 10;
	    
	    s = s + (int)ceil(pow(r,c));
	    
	    num = num / 10 ;

	}
	if(n == s)printf("\n\n %d Is An Armstrong Number \n\n",temp);
	    
	else printf("\n\n %d Is Not An Armstrong Number \n\n",temp);

}