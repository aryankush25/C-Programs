	#include<stdio.h>
	int main()
	{
		int q,num,sum;
		printf("Enter a number : ");
		scanf("%d",&num);
		sum=num;
		myv:
		num=sum;
		sum=0;
		while(num!=0)
		{
			q=num%10;
			sum=sum+q;
			num=num/10;
		}
		if(sum<10)
		{
			printf("sum = %d ",sum);
		}
		else
		{
			goto myv;
		}
		
		return 0;
	}
