#include<stdio.h>
#include<stdlib.h>

int main()
{
	char str1[100];
	
	scanf("%s",str1);
	fflush(stdin);
	gets(str1);
	
	puts(str1);
	printf("%s",str1);
	
	return 0;
}
