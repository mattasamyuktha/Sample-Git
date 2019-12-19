#include<stdio.h>
#include<stdlib.h>
main()
{
   int bal=7000,minbal=5000,avbal,ch,temp;
   while(1) //for(;;)
   {
	printf("\n 1.Deposit");
	printf("\n 2.Withdraw");
	printf("\n 3.Show Balance");
	printf("\n 4.Exit");
	
	printf("\n enter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: // deposit
		     printf("\n enter amount to deposit");
		    scanf("%d",&temp);
	       	bal=bal+temp;
		    printf("\n Rs.%d is Deposited Successfully",temp);
		    break;
		case 2: // withdraw
		        avbal=bal-minbal;
		        printf("enter amount to withdraw");
		        scanf("%d",&temp);
		        if(temp<=avbal)
		        {
		        	bal=bal-temp;
		        	printf("\n Plz collect your cash...");
				}
				else
				    printf("\n Insufficient Funds...!!");
		        break;
		case 3://show bal
		            avbal=bal-minbal;
		            printf("\n Available Balance:%d",avbal);
		            printf("\n Ledger Balance :%d",bal);
					break;
		case 4:exit(0);
		     default:printf("\n Invalid Choice...!");
			}
}
}
