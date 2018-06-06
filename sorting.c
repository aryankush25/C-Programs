#include<stdio.h>

int main()
{
	int x,i,a,j,k;
	
	printf("Enter size\n");
	scanf("%d",&x);
	
	int arr[x];
	
	printf("Enter values\n");
	
	for(i=0;i<x;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<x;i++)
	{
		for(j=i+1;j<x;j++)
		{
			if(arr[j]<arr[i])
			{
				a=arr[j];
				
				for(k=j;k>=i;k--)
				{
					arr[k]=arr[k-1];
				}
				arr[i]=a;
			}
		}
	}
	
	printf("----------------\n");
	
	for(i=0;i<x;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
