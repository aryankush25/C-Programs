#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,z,i,sum=0,count=0;
	printf("Enter a number ");
	scanf("%d",&x);
	y=x;
	while(y!=0)
	{
		count++;
		y=y/10;
	}
	for(i=1;i<count;i++)
	{
		z=x%10;
		z=z*pow(10,count-1);
		x=x/10;
		x=z+x;
		printf("cyclic order id %d\n",x);
	}
	return 0;
}
