	#include<stdio.h>
	int main()
	{
		int x=0,y=0,z=0,n=0;
		char ch;
		printf("Enter Any Character : ");
		scanf("\n%c",&ch);
		while(ch!='*')
		{
			if(ch>=97 && ch<=122)
			{
				x++;
			}
			else if(ch>=65 && ch<=90)
			{
				y++;
			}
			else if(ch>=48 && ch<=57)
			{
				z++;
			}
			if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
			{
				n++;
			}
			if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
			{
				n++;
			}
			printf("Enter Any Character : ");
			scanf("\n%c",&ch);
		}
		printf("No. of U.B Character = %d\n",y);
		printf("No. of L.B Character = %d\n",x);
		printf("No. of Numeric Character = %d\n",z);
		printf("No. of Vowels = %d\n",n);
		return 0;
	}
