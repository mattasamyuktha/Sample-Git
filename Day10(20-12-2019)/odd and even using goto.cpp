#include<stdio.h>
#include<stdlib.h>
main()
{
	int n;
	printf("\n enter a no:");
	scanf("%d",&n);
	if(n%2==0)
	goto even;
	else
	goto odd;
	even:printf("\n Even no");exit(0);
	odd:printf("\n Odd no");
}
