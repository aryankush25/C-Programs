  #include<stdio.h>
#include<stdlib.h>

int main()
{
	char str1[100],str2[10];
	int i=0,j=0,l=0;
	
	gets(str1);
	gets(str2);
	
	while(str1[i]!='\0')
	{
		i++;
	}
	
	str1[i++]=' ';
	
	j=0;
	
	while(str2[j]!='\0')
	{
		str1[i]=str2[j];
		i++;
		j++;
	}
	
	str1[i]='\0';
	
	puts(str1);
	
	return 0;
}
