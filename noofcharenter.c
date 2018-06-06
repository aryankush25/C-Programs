	#include<stdio.h>
	int main()
	{
		int x=0,y=0,z=0;
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
			printf("Enter Any Character : ");
			scanf("\n%c",&ch);
		}
		printf("No. of U.B Character = %d\n",y);
		printf("No. of L.B Character = %d\n",x);
		printf("No. of Numeric Character = %d\n",z);
		return 0;
	}
