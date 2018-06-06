#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i=0,n;
	char str[100],str1[100];
	
	gets(str);
	
	printf("Enter No. Of characters you want to extract\n");
	scanf("%d",&n);
	
	while(str[i]!='\0' && i<n)
	{
		str1[i]=str[i];
		i++;
	}
	
	str1[i]='\0';
	
	puts(str1);
	
	return 0;
}
