#include<stdio.h>
int main()
{
	long long int n,i,j,count=0;
	
	printf("Enter Number No. of Mobile Numbers You Want To Enter ");
	scanf("%lld",&n);
	long long int arr[n];
	for(i=0;i<n;i++)
	{
		printf("Enter Mobile Number ");
		scanf("%lld",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
				arr[j]=0;
			}
		}
		if(arr[i])
		{
			printf("The Number %lld occurs %lld times\n",arr[i],count+1);
		}
		count=0;
	}
	return 0;
}
