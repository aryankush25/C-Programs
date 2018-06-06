#include<stdio.h>

int main()
{
	int x,y,z,i,n;
	printf("Enter the number of numbers you want to enter ");
	scanf("%d",&n);
	
	int arr[n];
	
	for(i=0;i<n;i++)
	{   
	    printf("Enter Number\t");
		scanf("%d",&arr[i]);
	}
	
	printf("Enter Number you want to check when it last occur\t");
	scanf("%d",&x);
	
	for(i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			y=i+1;
		}
	}
	
	printf("The last occurance of number is %d",y);
	return 0;
}
