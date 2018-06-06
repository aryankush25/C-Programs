#include<stdio.h>

int reverse(int x)
{
	int rev=0,r;
	while (x!=0)
	{
		r=x%10;
		rev=rev*10+r;
		x=x/10;
	}
	return rev;
}

int main()
{
	int a,c;
	printf("Enter A Number : ");
	scanf("\n%d",&a);
	c=reverse(a);
	printf("The reverse is %d",c);
	return 0;
}


