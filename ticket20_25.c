#include<stdio.h>
#include<math.h>
int main()
{
	int i,x,y,c,a,count=0,b;
	for(i=32;i<=999;i++)
	{
		count=0;
		a=i;
		while(a!=0)
		{
			a=a/10;
			count++;
		}
		x=i*i;
		b=pow(10,count);
		y=x/b;
		c=x%b;
		if(i==(c+y))
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
