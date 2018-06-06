#include<stdio.h>
int main()
{
	int x,y,z,i=1;
	printf("Enter The Number : ");
	scanf("%d",&x);
	printf("************************************************************\n");
	while(i<=x)
	{
		y=i*i;
		z=i*i*i;
		printf("|	%d	|	%d	|	%d	|\n",i,y,z);
		i++;
	}
	printf("**********************************************************");
	return 0;
}
