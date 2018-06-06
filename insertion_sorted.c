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
	
	for(i=0;i<a;i++)
	{
		if(b<=arr[i])
		{
			p=i;
			break;
		}
	}
	
	for(i=a-1;i>=p;i--)
	{
		arr[i+1]=arr[i];
	}
	printf("--------------------\n");
	arr[p]=b;
	
	for(i=0;i<=a;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
