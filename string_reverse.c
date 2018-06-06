#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i=0,l=0,j;
	char r,str[20];
	
	gets(str);
	
	while(str[i]!='\0')
	{
		i++;
		l++;
	}
	
	i=0;
	l--;
	
	
	while(i<l)
		{
		r=str[i];
		str[i]=str[l];
		str[l]=r;
		i++;
		l--;
		}
	puts(str);
	
	return 0;
}
