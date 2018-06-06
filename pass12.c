#include<stdio.h>
int main()
{
	int x,y,z;
	for(x=1;x<=5;x++)
	{
		printf("Pass %d - ",x);
		for(y=1;y<=5;y++)
		{
			printf("%d ",y);
		}
		printf("\n");
	}
return 0;
}
