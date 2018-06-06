#include<stdio.h>
int main()
{
	int i,x,f=1;
	printf("Enter A Number : ");
	scanf("\n%d",&x);
	for(i=1;i<=x;i++)
	{
		f=f*i;
	}
	printf("The Value is %d ",f);
	return 0;
}
