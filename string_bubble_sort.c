#include<stdio.h>

int main()
{
	int x,i,j,k;
	
	char a,arr[5][10]={"Ram","Sham","Aryan","Karan","Hari"};
	
	for(i=0;i<=5;i++)
	{
		for(j=0;j<5-1-i;j++)
		{
			if(arr[j][0]>arr[j+1][0])
			{
				a=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=a;
			}
		}
	}
	
	//printf("----------------\n");
	
	for(i=0;i<=5;i++)
	{
		puts(arr[i]);
	}
	return 0;
}
