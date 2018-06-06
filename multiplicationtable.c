#include<stdio.h>
int main()
{
	int x=1,y=1,i=1;
	printf("Enter The Number for Table : ");
	scanf("\n%d",&x);
	while(i<=20)
	{
		y=i*x;
		printf("\n %d * %d = %d",x,i,y);
		i++;
	}
	return 0;
}
