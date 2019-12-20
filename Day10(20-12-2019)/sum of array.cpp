/* arrays*/
#include<stdio.h>
main()
{
	int a[10],i,sum=0;
	printf("\n Array elements are:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("\n Sum of array:%d",sum);
	}
