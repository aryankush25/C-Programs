#include<stdio.h>
int main()
{
	int i,m,x,f=1,g=1;
	printf("Enter A Number : ");
	scanf("\n%d",&x);
	printf("%d\n",f);
	for(i=1;i<=x-1;i++)
	{	
		printf("%d\n",f);
		m=f;
		f=f+g;
		g=m;
	}
	return 0;
}
