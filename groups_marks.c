#include<stdio.h>

int main()
{
	int n,i,j,arr1[100]={0},arr2[10]={0};
	
	printf("Enter Number of Students ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("Enter Marks ");
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(arr[i]>=0 && arr[i]<=9)
		{
			arr2[0]++;
		}
		
		if(arr[i]>=10 && arr[i]<=19)
		{
			arr2[1]++;
		}
		
		if(arr[i]>=20 && arr[i]<=29)
		{
			arr2[2]++;
		}
		
		if(arr[i]>=30 && arr[i]<=39)
		{
			arr2[3]++;
		}
		
		if(arr[i]>=40 && arr[i]<=49)
		{
			arr2[4]++;
		}
		
		if(arr[i]>=50 && arr[i]<=59)
		{
			arr2[5]++;
		}
		
		if(arr[i]>=60 && arr[i]<=69)
		{
			arr2[6]++;
		}
		
		if(arr[i]>=70 && arr[i]<=79)
		{
			arr2[7]++;
		}
		
		if(arr[i]>=80 && arr[i]<=89)
		{
			arr2[8]++;
		}
		
		if(arr[i]>=90 && arr[i]<=100)
		{
			arr2[9]++;
		}
	}
	
	for(i=0;i<10;i++)
	{
		printf("%d %d ",i,arr2[i]);
		
		if(arr2[i]!=0)
		{
			for(j=1;j<=arr2[i];j++)
			{
				printf("*");
			}
		}
		else
		{
			printf("$");
		}
		printf("\n");
	}
	return 0;
}
