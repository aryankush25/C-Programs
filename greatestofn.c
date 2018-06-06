#include<stdio.h>
int main()
{
	int x,y,n,i=1;
	printf("Enter The Number of elements you want to enter := ");
	scanf("%d",&n);
	printf("Enter a number : ");
	scanf("%d",&x);
	while(i<n)
	{
		printf("Enter a number : ");
		scanf("%d",&y);
		if(x<y)
		{
			x=y;
		}
	i++;
	}
	printf("Greatest Number is : %d ",x);
	return 0;
}
