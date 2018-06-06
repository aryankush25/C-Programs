#include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	printf("Enter The Number = ");
	scanf("%d",&n);
	while(i<n+1)
	{
		sum=sum+i;
		i++;
	}
	printf("%d\n",sum);
	return 0;
}
