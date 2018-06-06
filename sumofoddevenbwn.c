#include<stdio.h>

int main()
{
	int i,x,y,c=0,d=0;
	printf("Enter Upper Number = \n");
	scanf("%d",&x);
	printf("Enter Lower Number = \n");
	scanf("%d",&y);
	for(i=y;i<=x;i++)
	{
		if(i%2==0)
		{
			c=c+i;
		}
		else if(i%2!=0)
		{
			d=d+i;
		}
	}
	printf("Even = %d\n",c);
	printf("Odd = %d",d);
	return 0;
}
