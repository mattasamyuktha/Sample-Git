#include<stdio.h>
main()
{
	int r,n;
	printf("\n enter n value:");
	scanf("%d",&n);
	printf("\n Reverse number:");
	while(n>0)
	{
	r=n%10;
	printf("%d",r);
	n=n/10;
	}
}

