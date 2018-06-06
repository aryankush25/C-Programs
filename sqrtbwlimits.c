#include<stdio.h>
#include<math.h>
int main()
{
	int x,a,b,i,j,count=0;
	
	printf("Enter Lower Limit And Upper Limit\n");
	scanf("%d %d",&a,&b);
	
	for(i=1;i<=sqrt(b);i++)
	{
		x=i*i;
		if(x>=a && x<=b)
		{
			count++;
		}
	}
	
	printf("The count is %d",count);
	return 0;
}
