#include<stdio.h>

int algorithm(int *num1,int *num2)
{
	int sum,prod;
	sum=*num1+*num2;
	prod=sum*sum;
	*num1=(*num1)*100+(*num2);
	if(*num1==prod)
	{
		printf("Permission Granted");
	}
	else
	{
		printf("Invalid Ticket");
	}
	return 0;
}
int main()
{
	int num1,num2;
	printf("TICKET ID 1\n");
	scanf("%d",&num1);
	printf("TICKET ID 2\n");
	scanf("%d",&num2);
	algorithm(&num1,&num2);
	return 0;
}

