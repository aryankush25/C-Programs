#include<stdio.h>
int main()
{
	int num,i,count=0,small,z;
	printf("Enter the quantity of numbers\n");
	scanf("%d",&num);
	int arr[num];
	for(i=0;i<num;i++)
	{
		printf("Enter Number\t");
		scanf("%d",&arr[i]);		
	}
	
	 small=arr[0];
    
    for(i=1;i<num;i++)
    {
    	 if(arr[i]<small)  
        {
        	small=arr[i];
		}
	}
	
	for(i=0;i<num;i++)
	{
		if(small==arr[i])
		{
			count++;
		}
	
	}
	if(count%2==0)
	{
		printf("0");
	}else 
	{
		printf("1");
	}
	return 0;
}
