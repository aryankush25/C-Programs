#include<stdio.h>
int main()
{
	int n,i;
	
	printf("Enter No. Of enteties you want ");
	scanf("%d",&n);
	int arr1[n];
	for(i=0;i<n;i++)
	{
		printf("Enter No. up to 99 ");
		scanf("%d",&arr1[i]);
	}
	
	int arr2[100]={0};
	
	for(i=0;i<n;i++)
	{
		arr2[arr1[i]]++;
	}
	
	for(i=0;i<100;i++)
	{
		if(arr2[i]!=0)
		{
			printf("The Count of %d is %d\n",i,arr2[i]);
		}
	}
	return 0;
}
