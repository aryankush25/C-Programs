#include<stdio.h>

int *area(int a,int b)
{
	int d;
	d=a*b;
	return d;
}

int main()
{
	int x,y,*c;
	scanf("%d %d",&x,&y);
	c=area(x,y);
	printf("%d",c);
	return 0;
}
