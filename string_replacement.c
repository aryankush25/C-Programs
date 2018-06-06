#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int i=0,j=0,k,l1,l2;
	char str1[100],str2[100];
	
	gets(str1);
	gets(str2);
	
	l1=strlen(str1);
	l2=strlen(str2);
	
	while(str1[i]!='\0')
	{
		if(str1[i]!=str2[j] && str1[i-1]!=32)
		{
			i++;
			j=0;
		}
		else
		{
			i++;
			j++;
			if(j==l2 && str1[i]==32)
			{
				break;
			}
		}
	}
	
	if(j==l2)
	{
		printf("String Exist");
	}
	else
	{
		printf("String not Exist");
	}
	return 0;
}
