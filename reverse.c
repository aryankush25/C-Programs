#include<stdio.h>
int main()
{
	int r,x,rev=0;
	printf("Enter A Number : ");
	scanf("\n%d",&x);
	while (x!=0)
  	{
		r=x%10;
		rev=rev*10+r;
		x=x/10;
	}
	printf("The Reverse Is %d ",rev);
	return 0;
}
