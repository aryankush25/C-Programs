#include<stdio.h>
void convert_dectobin(int num)
{
	while(num!=0)
	{
		int i,a,z,arr[32]={0};
		for(i=31;i>=0;i--)
		{
		z=num&1;
		arr[i]=z;
		num=num>>1;
	    }
	    for(i=0;i<32;i++)
		{
			a=arr[i];
			printf("%d",a);
		}
		printf("\n");
    }
}
int main()
{
	int i,z,a;
	printf("Enter The Number of values you want to enter ");
	scanf("%d",&a);
	int bin_arr[a];
	for(i=0;i<a;i++)
	{   
	    printf("Enter Number\t");
		scanf("%d",&bin_arr[i]);
	}
	for(i=0;i<a;i++)
	{   
		z=bin_arr[i];
		convert_dectobin(z);
	}
    return 0;
}
