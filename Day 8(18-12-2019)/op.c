#include<stdio.h>
main()
{
int a,b;
char ch;
       printf("\n enter two values:");
       scanf("%d %d",&a,&b);
       printf("\n enter operator of your choice:");
       ch=getch();
       //fflush(stdin);
      //scanf("%c",&ch);
     switch(ch)
    {
      case '+':printf("\n Sum:%d",a+b);break;
      case '-':printf("\n Difference:%d",a-b);break;
      default:printf("\n Invalid Choice...!");break;
    }
}
