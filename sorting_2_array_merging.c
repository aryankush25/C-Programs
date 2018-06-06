#include<stdio.h>
int main()
{
	int x,y,z,a=0,b=0,c=0,d=0,i;
	
	printf("Enter Size Of Array 1 \n");
	scanf("%d",&x);
	
	int arr1[x];
	
	printf("Enter Values Of Array 1 \n");
	
	for(i=0;i<x;i++)
	{
		scanf("%d",&arr1[i]);
	}
	
	printf("Enter Size Of Array 2 \n");
	scanf("%d",&y);
	
	int arr2[y];
	
	printf("Enter Values Of Array 2 \n");
	
	for(i=0;i<y;i++)
	{
		scanf("%d",&arr2[i]);
	}
	
	z=x+y;
	
	int arr[z];
	
	for(i=0;i<z;i++)
	{
		if(a<x && b<y)
		{
			if(arr1[a]<arr2[b])
			{
				arr[i]=arr1[a];
				a++;
			}
			
			else
			{
				arr[i]=arr2[b];
				b++;
			}
		}
		
		else
		{
			if(a<x)
			{
				arr[i]=arr1[a];
				a++;
			}
			if(b<y)
			{
				arr[i]=arr2[b];
				b++;
			}
		}
	}
	printf("-------------------\n");
	for(i=0;i<z;i++)
	{
		printf("%d\n",arr[i]);
	}
	
	return 0;
}
