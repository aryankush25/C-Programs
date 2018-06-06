#include<stdio.h>
#include<math.h>
int prime(int x)
{
	int i,z=0;
	
	for (i=2;i<=x/2;i++)
	{
		if(x%i==0)
		{
			z=1;
			break;
		}
	}
	
	return z;
}

int main()
{
	int y,i;
	printf("Enter A Number = ");
	scanf("\n%d",&y);
	i=prime(y);
	if(i!=1)
	{
		printf("\nThe Number %d Is Prime",y);
	}
	else
	{
		printf("\nThe Number %d Is not Prime",y);
	}
	return 0;
}
