#include<stdio.h>

int main()
{
	int i,j,c,d;
	int arr[2][2];
	printf("Enter Elements Of 1st 2D array\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	
	int arr1[2][2];
	printf("Enter Elements Of 2nd 2D array\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
		printf("\n");
	}
	
	int arr2[2][2];
	
	 for(i=0;i<2;i++)
	 {
	 	for(j=0;j<2;j++)
	 	{
	 		arr2[i][j]=arr[i][j]+arr1[i][j];
		}
		 
	 }
	
	printf("2D array\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",arr2[i][j]);
		}
		printf("\n");
	}
	return 0;
}
