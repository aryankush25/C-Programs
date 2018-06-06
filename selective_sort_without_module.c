#include<stdio.h>

void selection_sort(int arr[],int n)
{
	int i,s,j,temp,smallest;
	
	for(i=0;i<2;i++)
	{
		s=i;
		smallest=arr[i];
		for(j=i+1;j<n;j++)
		{
			if(smallest>arr[j])
			{
				smallest=arr[j];
				s=j;
			}
		}
		
		temp=arr[i];
		arr[i]=arr[s];
		arr[s]=temp;
		
	}
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
