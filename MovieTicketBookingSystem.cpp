#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

void design();
void movies();
int calculate(int,int);
int conform(int);
void cancel();
void prospond();
void credits();
void exits();
void designtec();
int ll[10]={0,124,130,110};
int gnp=0;
int gmn=0;
int gtn=0;
int gtc=0;
char list[5][20]={"CONJURING 2","DYE HARD  4","HOBBIT  2"};
main()
{
stt:
int ch,a;
design();
scanf("%d",&ch);
ext:
switch(ch)
{
case 1:
{ 
printf("\n\n");
movies();
//goto g2;
}
break;
case 2:
{
int tk;
movies();
g1:
printf("\n\nEnter your Movie Choice:\n");
scanf("%d",&a);
gmn=a;
if(a<4)
{
printf("CHOSEN MOVIE:\t\t%s",list[a-1]);
printf("\n\nDIWALI OFFER\n");
printf("\n0-5  Tickets     No Discount");
printf("\n6-10 Tickets     5  Pecent off");
printf("\n >10             10 Percent off");
}
else
{
	printf("Wrong Entry!Try Again:");
	goto g1;
}
printf("\n\nEnter the Number of Tickets you want to Book:");
scanf("%d",&tk);
gnp=tk;
calculate(a,tk);
}
break;
case 3:
{
	cancel();
}
break;
case 4:
{
	prospond();
}
break;
case 5:
{
	credits();
}
break;
case 6:
{
	exits();
}
break;
default:
	{
     printf("\n\n                         Are You Mad!Wrong choice.Try Again.");
	 goto stt;	
    }

 }
}
void design()
{ 
    system(" COLOR 5F");
    printf("                        * * * * * * * * * * * * * * * * * * * * *");
	printf("\n\n\t\t\t*   Press 1 to see the Movie list:      *");
	printf("\n\n\t\t\t*   Press 2 to Book a Ticket:           *");
	printf("\n\n\t\t\t*   Press 3 to Canceal a Ticket:        *");
	printf("\n\n\t\t\t*   Press 4 to Postpone a Ticket:       *");
	printf("\n\n\t\t\t*   Press 5 to see Credits:             *");
	printf("\n\n\t\t\t*   Press 6 to Exit:                    *");
	printf("");
	printf("");
	printf("\n");
	printf("\n                        * * * * * * * * * * * * * * * * * * * * *");
}
void movies()
{
	
    printf("SL.NO     MOVIE NAME    DURATION(hr:min)    COST");
	printf("\n\n1.        CONJURING 2        2:35           125 ");
	printf("\n2.        DYE HARD 4         2:40           130 ");
	printf("\n3.        HOBBIT 2           1:45           110");
}
int calculate(int a1,int tk1)
{
	if(a1<4)
	{
		int g,cnf;
	  if(tk1<=5)
	  {
	  printf("\nYour ticket cost Rs:");
	  g=ll[a1]*tk1;
	  printf("%d",g);	
	  }
	  else if(tk1>5 && tk1<=10)
	  {
	  	
	  	int tkt=ll[a1]*tk1;
	  	printf("\nYour Ticket Cost Rs:%d\n",tkt);
	  	int ds=(float)0.05*tkt;
	  	printf("5 percent Discount Applied Rs:%d\n",ds);
	  	g=tkt-ds;
	  	printf("Amount to be Paid Rs:%d\n",g);
	  }
	  else
	  {
	  	int tkt2=ll[a1]*tk1;
	  	printf("\nYour Ticket Cost Rs:%d\n",tkt2);
	  	int ds2=0.10*tkt2;
	  	printf("10 percent Discount Applied Rs:%d\n",ds2);
	  	g=tkt2-ds2;
	  	printf("Amount to be Paid Rs%d\n",g);
	  }
	  g3:
	printf("\nPress 1 to CONFORM\n");
	printf("\nPress 0 to CANCEL\n");
	scanf("%d",&cnf);
	gtc=g;
	if(cnf==0)
	{
	printf("Canceled by User");
	exit(0);	
	}
	else if(cnf==1)
	{
		conform(g);
	}
	else
	{
		printf("Wrong Choice!Try Again");
		goto g3;
	}
   }
}
   int conform(int g)
   {
   	int txno=12345*g;
   	gtn=txno;
   	printf("\nYour Transaction Number:%d\n",txno);
   	printf("\nCONGRATULATIONS Your Tickets Has Been CONFORMED\n");
   	printf("Please note Your Transaction Numbere and Amount paid for Future use of prospond or cancelation");
   	designtec();
   }
   void cancel()
   {
   	int txno,apd;
   	printf("Enter your Transaction Number:\n");
   	scanf("%d",&txno);
   	printf("Enter the Exact Amount You have Paid:");
   	scanf("%d",&apd);
   	int chk=txno/12345;
   	if(chk==apd)
   	{
   	printf("Your Ticket has been successfuly canceled.\n" );
   	printf("Your amount will be refunded shortly by reverse payment");
    }
    else
    {
    	printf("Sorry!Transaction no. or amount entered wrong"); 
    }
}
void prospond()
{
 	int txno,apd,dd;
   	printf("Enter your Transaction Number:\n");
   	scanf("%d",&txno);
   	printf("Enter the Exact Amount You have Paid:");
   	scanf("%d",&apd);
   	int chk=txno/12345;
   	printf("Enter the Day you want to prospond:");
   	scanf("%d",&dd);
   	if(chk==apd)
   	{
   	printf("Your Ticket has been successfuly prosponded by %d Days:",dd);
   	printf("You will get your conformation sms shortly");
   }
   else
   {
   printf("Sorry!Transaction no. or amount entered wrong.Prospond not done."); 
    }
}
void credits()
{
	printf("I would like to thank my computer miss MRS.GURPREET KAUR for\n");
	printf("giving me such an wonderful project.She also helped me a lot\n");
	printf("to finish this project.");
}
void exits()
{
 exit(0);	
}
void designtec()
{
	printf("\n\n\t\t\t\--------------------------------------\n");
	printf("\t\t\to          CINEMA   TICKET           \n");
	printf("\t\t\t|                                    |\n");
	printf("\t\t\to  NUMBER OF PERSONS:    %d           \n",gnp);
	printf("\t\t\t|                                    |\n");
	printf("\t\t\to  MOVIE NAME:           %s      \n",list[gmn-1]);
	printf("\t\t\t|                                    |\n");
	printf("\t\t\to  TRANSACTION NUMBER:   %d     \n",gtn);
	printf("\t\t\t|                                    |\n");
	printf("\t\t\to  COST:                Rs.%d         \n",gtc);
	printf("\t\t\t|            THANK YOU               |\n");
	printf("\t\t\t-------------------------------------\n\n\n");
	
	
}
   
