#include<stdio.h>
int main()
{
	int x,y;
	for(x=1;x<=5;x++)
	{
		for (y=1;y<=5-x;y=y+1)
			{
	   			printf("  ");
			}
		for(y=1;y<=x;y++)
		{
			printf("%d ",y);
		}
		printf("\n");
	}
return 0;
}
