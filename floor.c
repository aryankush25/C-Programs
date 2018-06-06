#include<stdio.h>
int main()
{
	int a,b,c,n,save,arr2[10]={0},lar,i;
	
	printf("Enter Number of Entities Tou Want To Enter ");
	scanf("%d",&n);
	
	int arr1[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter Floor Number ");
		scanf("%d",&arr1[i]);
	}
	
	for(i=0;i<n;i++)
	{
		arr2[arr1[i]]++;
	}
	
	lar=arr2[0];
	for(i=0;i<10;i++)
	{
		if(lar<arr2[i])
		{
			lar=arr2[i];
			save=i;
		}
	}
	
	printf("Max no. of rooms alloted in %d floor\n",save);
	
	printf("No rooms were alloted to floors :- ");
	
	for(i=0;i<10;i++)
	{
		if(arr2[i]==0)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
