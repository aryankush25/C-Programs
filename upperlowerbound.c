#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter The Upper Bound = ");
	scanf("%d",&n);
	printf("Enter The Lower Bound = ");
	scanf("%d",&i);
	while(i<n+1)
	{
		printf("%d\n",i);	
		i++;
	}
	return 0;
}
