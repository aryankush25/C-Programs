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
	x=arr[0];
	
	for(i=1;i<n;i++)
	{
		if(x<arr[i])
		{
			x=arr[i];
			y=i;
		}
	}
	
	printf("The largest number is %d",x);
	printf("The index of largest number is %d",y);
	return 0;
}
