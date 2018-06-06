#include<stdio.h>

void selection_sort(int arr[],int n)
{
	int i,s,temp;
	
	for(i=0;i<n;i++)
	{
		s=smallest(arr,n,i);
		
		temp=arr[i];
		arr[i]=arr[s];
		arr[s]=temp;
		
	}
}

int smallest(int arr[],int n,int i)
{
	int smallest,j,index=i;
	
	smallest=arr[i];
	for(j=i+1;j<n;j++)
	{
		if(smallest>arr[j])
		{
			smallest=arr[j];
			index=j;
		}
	}
	return index;
}

int main()
{
	int x,i;
	
	printf("Enter size\n");
	scanf("%d",&x);
	
	int arr[x];
	
	printf("Enter values\n");
	
	for(i=0;i<x;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	selection_sort(arr,x);
	printf("----------------------\n");
	for(i=0;i<x;i++)
	{
		printf("%d\n",arr[i]);
	}
	
	return 0;
}
