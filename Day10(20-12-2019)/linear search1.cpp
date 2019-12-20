#include<stdio.h>
main()
{
	int a[10],i,n,count=0;
	printf("\n enter 10 values:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n enter search element:");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	
		{
			printf("\n %d is found",n);
			break;
		}
	
	if(i==10)
	printf("\n %d is not found",n);
}
	// printf("\n %d is not found",n);
