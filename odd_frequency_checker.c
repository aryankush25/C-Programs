#include<stdio.h>
int main()
{
	int a,n,i,flag=0;
	
	printf("Enter The Number Of Time You Want Enter Loop--> ");
	scanf("%d",&a);
	
	while(a--)
	{
		int arr2[100]={0};
	printf("Enter The Number Of Elements You Want Enter --> ");
	scanf("%d",&n);
	
	int arr1[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter Number %d --> ",i+1);
		scanf("%d",&arr1[i]);		
	}
	
	printf("-----------\n");
	
	for(i=0;i<n;i++)
	{
		arr2[arr1[i]]++;
	}
	
	for(i=0;i<100;i++)
	{
		if((arr2[i]!=0) && (arr2[i]%2!=0))
		{
			flag=1;
			printf("%d\n",i);
		}
	}
	}
	return 0;
}
