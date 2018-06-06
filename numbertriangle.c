#include<stdio.h>
int main()
{
	int x,y,i,z=0;
	for (i=1;i<=5;i++)
	{
		for (x=1;x<=i;x++)
		{
			printf(" %d ",z);
			z++;
		}
		printf("\n");
	}
	return 0;
}
