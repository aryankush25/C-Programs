#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int pos,i=0,j=0,k=0,l1,l2;
	char str[100],str1[50],str2[50];
	
	gets(str1);
	gets(str2);
	
	printf("Enter the place where you want to enter the new string\n");
	scanf("%d",&pos);
	pos--;
	
	l1=strlen(str1);
	l2=strlen(str2);
	
	while(str1[i]!='\0')
	{
		if(i<pos)
		{
			str[k]=str1[i];
			i++;
		}
		else if(j<l2)
		{
			str[k]=str2[j];
			j++;
		}
		else
		{
			str[k]=str1[i];
			i++;
		}
		k++;
	}
	str[k]='\0';
	
	puts(str);
	
}
