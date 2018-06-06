#include<stdio.h>

int main()
{
	int arr[100],a,b,p,i;
	
	printf("Enter Number Of Elements You Want To Enter in Array \n");
	scanf("%d",&a);
	printf("Enter Elements Of Array\n");
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter Number You Want To Insert\n");
	scanf("%d",&b);
	
	printf("Enter Position\n");
	scanf("%d",&p);
	
	for(i=a-1;i>=p-1;i--)
	{
		arr[i+1]=arr[i];
	}
	printf("--------------------\n");
	arr[p-1]=b;
	
	for(i=0;i<=a;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
