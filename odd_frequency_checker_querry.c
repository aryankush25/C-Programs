#include<stdio.h>
int main()
{
	int a,n,i,b,c,k,flag=0;
	
	scanf("%d",&k);
	while(k--)
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
	printf("Enter The Number Of Query You Want Enter--> ");
	scanf("%d",&a);
	while(a--)
	{	
		printf("Enter The Number You Want To Check--> ");
		scanf("%d",&b);
		if((arr2[b]!=0) && (arr2[b]%2!=0))
		{
			printf("Yes\n");
		}
		else if ((arr2[b]!=0) && (arr2[b]%2==0))
		{
			printf("No\n");
		}
		else
		{
			printf("-1\n");
		}
	}}
	return 0;
}
