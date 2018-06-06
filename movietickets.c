#include<stdio.h>
int main()
{
	int tickets,kids,total,amount,discount,end;
	char seat,method,bank;
	printf("Enter total no. of tickets = ");
	scanf("%d",&tickets);
    printf("Enter total no. kids who are less then 5 yr = ");
	scanf("%d",&kids);
	total=tickets-kids;
	printf("Total payable tickets = %d \n",total);
    read:
	printf("Enter the type of seat(s/g) for (190/250) each = ");
	scanf("\n %c",&seat);
	if(seat=='s'||seat=='S')
	{
		amount=(total*190);
		printf("Total payable amount before discout = %d \n",amount);
	}
	else if(seat=='g'||seat=='G')
	{
		amount=(total*250);
		printf("Total payable amount before discout = %d \n",amount);
	}
	else
	{
		printf("invalid seat type \n");
		goto read;
    }
	if(amount>=1000 && amount<=1600)
	{
		printf("You get 1 free popcorn \n");
	}
	else if(amount>=1600 && amount<=2000)
	{
		printf("You get 1 wooper free \n");
	}
	else if(amount>2000)
	{
		printf("You 1 free ticket \n");
	}
	else
	{
		printf("No offer \n");
	}
	loop:printf("Enter Payment method (cash or credit card) in c or r respectively = ");
	scanf("\n %c",&method);
	if(method=='c'||method=='C')
	{
		printf("Pay on the counter \n");
	}
	else if(method=='r'||method=='R')
	{
		printf("Which bank (Axis(a)/others(o)) = ");
		scanf("\n %c",&bank);
		if(bank=='a')
		{
			printf("Discount = 10%% \n");
			end=amount-(amount*0.1);
			printf("Amount to be paid = %d \n",end);
			
		}
		else
		{
			printf("Discount = 5%% \n");
			end=amount-(amount*0.05);
			printf("Amount to be paid = %d \n",end);
		}
		
		
	}
	else
	{
		printf("Invalid method \n");
		goto loop;
	}
		printf("Thanks for Buying Tickets \n");
		return 0;
}
