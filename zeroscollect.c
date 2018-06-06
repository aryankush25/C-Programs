#include<stdio.h>

int zeroscollect(int arr[], int n)
{
	int i,j=0;
	int arr1[100]={0};
	
	for(i=0;i<n;i++)
	{
		if(arr[i]!=0)
		{
			arr1[j]=arr[i];
			j++;
		}
	}
	printf("Final Array ");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr1[i]);
	}
	return 0;
}

int main()
{
	int i,n,arr[100]={0};
	
	printf("Enter Size ");
	scanf("%d",&n);
	
	printf("Enter Elements ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	zeroscollect(arr,n);
	
	return 0;
}
