#include<stdio.h>
int main()
{
	int y,r,x,rev=0;
	printf("Enter A Number : ");
	scanf("\n%d",&x);
	y=x;
	while (x!=0)
  	{
		r=x%10;
		rev=rev*10+r;
		x=x/10;
	}
	if(y==rev)
	{
		printf("The Number Is Palindrome");
	}
	else
	{
		printf("The Number Is Not Palindrome");
	}
	return 0;
}
