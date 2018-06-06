#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,z,i,n,j;
	printf("Enter the number of numbers you want to enter ");
	scanf("%d",&n);
	
	int arr[n];
	
	for(i=0;i<n;i++)
	{   
	    printf("Enter Number\t");
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{   
		z=0;
		x=arr[i];
		for (j=2;j<=sqrt(x);j++)
	{
		if(x%j==0)
		{
			z=1;
			
		}
	}

	if(z!=1)
	{
		printf("\nThe Number %d Is Prime\n",x);
	}
	else 
	{
		printf("The Number %d Is not Prime\n",x);
	}
	}

	return 0;
}
