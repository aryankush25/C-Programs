#include<stdio.h>
#include<stdlib.h>

int main()
{
	char str[10];
	int i=0,length=0;
	
	gets(str);
	
	while(str[i]!='\0')
	{
		length++;
		i++;
	}
	
	printf("%d\n",length);
	
	puts(str);
	
	return 0;
}
