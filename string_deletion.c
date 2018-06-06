#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int x=0,y,z,i=0,p,d;
	char str1[100],str[100];
	
	gets(str);
	
	printf("Position");
	scanf("%d",&p);
	
	printf("Number Delete");
	scanf("%d",&d);
	
	while(str[i]!='\0')
	{
		if(i<p)
		{
			str1[x]=str[i];
			i++;
			x++;
		}
		else if(i<p+d)
		{
			i++;
		}
		else
		{
			str1[x]=str[i];
			i++;
			x++;
		}
	}
	str1[x]='\0';
	
	puts(str1);
	
	return 0;
}
