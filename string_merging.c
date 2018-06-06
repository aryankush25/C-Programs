#include<stdio.h>
#include<stdlib.h>

int main()
{
	char str1[10],str2[10],str[20];
	int i=0,j=0;
	
	gets(str1);
	gets(str2);
	
	while(str1[i]!='\0')
	{
		str[j]=str1[j];
		i++;
		j++;
	}
	
	str[j++]=' ';
	
	i=0;
	
	while(str2[i]!='\0')
	{
		str[j]=str2[i];
		i++;
		j++;
	}
	
	str[j]='\0';
	
	puts(str);
	
	return 0;
}
