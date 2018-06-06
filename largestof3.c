#include<stdio.h>

void largest(int *p1,int *p2,int *p3,int *result)
{
	if(p1>p2 && p1>p3)
	{
		result=p1;
	}
	
	else if(p2>p1 && p2>p3)
	{
		result=p2;
	}
	
	else
	{
		result=p3;
	}
}

int main()
{
	
	int num1,num2,num3,res;
	
	int *p1=&num1;
	int *p2=&num2;
	int *p3=&num3;
	
	scanf("%d%d%d",p1,p2,p3);
	
	largest(p1,p2,p3,&res); //call by reference
	
	printf("%d",res);
	
	return 0;
}
