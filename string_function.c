#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int i,n=0;
	char str1[10],str2[10];
	
	gets(str1);
	//gets(str2);
	
	//strcat(str1,str2);
	//strncat(str1,str2,1);
	n=strchr(str1,'o');
	
	//puts(str1);
	printf("%d",n);
	//puts(str2);
}
