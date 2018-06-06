#include<stdio.h>
int main()
{
	int flag=0;
	char ch;
	xy:
	printf("Enter your gender (M/F) : ");
	scanf("\n%c",&ch);
	if(ch=='m' || ch=='M' || ch=='f' || ch=='F')
	{
		if(ch>=97 && ch<=122)
		{
			ch=ch-32;
		}
	}
	switch(ch)
	{
		case 'M':
			{
				printf("Male");
				break;
			}
		case 'F':
			{
				printf("Female");
				break;
			}
		default:
			{
				printf("You Have Entered Invalid\n");
				goto xy;
				break;
			}
	}
	return 0;
}
