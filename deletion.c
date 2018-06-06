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
	
	printf("Enter Number You Want To Delete\n");
	scanf("%d",&b);
	
	for(i=0;i<a;i++)
	{
		if(b==arr[i])
		{
			p=i;
		}
	}
	
	for(i=p;i<a-1;i++)
	{
		arr[i]=arr[i+1];
	}
	printf("--------------------\n");
	
	for(i=0;i<a-1;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
