#include<stdio.h>
#include<math.h>

int pfive(int x)
{
	int i,y,flag=0;
	
	for(i=1;i<=x;i++)
	{
		y=pow(5,i);
		if(x==y)
		{
			flag=1;
			break;
		}
	}
	return flag;
}

int magic(int x)
{
	int i,y,u,v,flag=0;
	
	for(i=5;i<=x;i=i*5)
	{
		y=x-i;
		if(y==i)
		{
			break;
		}
		u=pfive(i);
		v=pfive(y);
		if(u==1 && v==1)
		{
			flag=1;
			break;
		}
	}
	return flag;
}

int main()
{
	int n,m,y;
	
	printf("Enter Number ");
	scanf("%d",&n);
	
	m=pfive(n);
	
	if(m==1)
	{
		printf("%d is a Magic Number",n);
	}
	
	else
	{
		y=magic(n);
		
		if(y==1)
		{
			printf("%d is a Magic Number",n);
		}
		
		else
		{
			printf("%d is not a Magic Number",n);
		}
	}
	return 0;
}
