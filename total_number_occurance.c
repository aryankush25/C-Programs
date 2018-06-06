#include<stdio.h>
int main()
{
	int a,n,i,j,count=0,rem,arr1[10]={0},arr2[3]={0};
	
	printf("Enter Number of Numbers You Want To Enter ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("Enter Number ");
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		
		a=arr[i];
		
		while(a)
		{
			rem=a%10;
			arr1[rem]++;
			a=a/10;
		}
	}
	
	for(i=0;i<10;i++)
	{
		printf("The Count of %d is %d\n",i,arr1[i]);
		
	}
	
	printf("The Count of prime no. is %d\n",arr1[2]+arr1[3]+arr1[5]+arr1[7]);
	printf("The Count of even no. is %d\n",arr1[2]+arr1[4]+arr1[6]+arr1[8]);
	printf("The Count of odd no. is %d\n",arr1[1]+arr1[3]+arr1[5]+arr1[7]+arr1[9]);
	return 0;
}
