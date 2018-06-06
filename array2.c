#include<stdio.h>

void convert_dectobin(int x)
{
	int
}

int main()
{
	int i,arr[5],z;
	
	for(i=0;i<5;i++)
	{
		printf("arr[%d]=",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		z=convert_dectobin(arr[i]);
		printf("arr[%d]=%d\n",i+1,z);
	}
	return 0;
}
