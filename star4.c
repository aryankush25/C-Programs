#include<stdio.h>
int main()
{
int x,y,i;
    for (x=1;x<=6;x=x+1)
    {
    	for (y=1;y<=6-x;y=y+1)
			{
	   			printf(" ");
			}
    	for (i=1;i<=x;i=i+1)
			{
				printf("* ");
			}
		printf("\n");
    }
        for (x=5;x>=1;x=x-1)
    {
    	for (y=1;y<=6-x;y=y+1)
			{
	   			printf(" ");
			}
    	for (i=1;i<=x;i=i+1)
			{
				printf("* ");
			}
		printf("\n");
    }
	return 0;
}
