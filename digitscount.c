	#include<stdio.h>
	int main()
	{
		int q,num,count;
		printf("Enter a number : ");
		scanf("%d",&num);
		while(num!=0)
		{
			q=num/10;
			count++;
			num=q;
		}
		printf("count = %d ",count);
		return 0;
	}
