#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int i=0,j=0,k,l1,l2;
	char str1[10][100],str2[100];
	
	for(i=0;i<3;i++)
	{
		gets(str1[i]);
	}
	
	for(i=0;i<5;i++)
	{
		puts(str1[i]);
	}
	
	return 0;
}
