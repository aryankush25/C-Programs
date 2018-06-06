#include<stdio.h>

int add (int a,int b)
{
	int c;
	c=a+b;
	return c;
}

int main()
{
	int x,y,c;
	printf("Enter 2 Numbers = \n");
	scanf("%d",&x);
	scanf("%d",&y);
	c=add(x,y);
	printf("The sum is %d",c);
}

