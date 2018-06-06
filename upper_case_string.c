#include<stdio.h>
#include<stdlib.h>

int main()
{
	char str1[10],upper[10];
	int i=0,j=0;
	
	gets(str1);
	
	
	while(str1[i]!='\0')
	{
		if(str1[i]>=97 && str1[i]<=122)
		{
			upper[j]=str1[i]-32;
		}
		else if(str1[i]>=65 && str1[i]<=90)
		{
			upper[j]=str1[i]+32;
		}
		else
		{
			upper[j]=str1[i];
		}
		i++;
		j++;
	}
	
	upper[j]='\0';
	
	puts(upper);
	
	return 0;
}
