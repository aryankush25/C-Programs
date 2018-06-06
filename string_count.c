#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int i=0,j=0,k,l1,l2,count=0;
	char str1[100],str2[100];
	
	gets(str1);
	fflush(stdin);
	gets(str2);
	
	l1=strlen(str1);
	l2=strlen(str2);
	
	while(str1[i]!='\0')
	{
		if(str1[i]==str2[j] && j==i)
		{
			i++;
			j++;
			
			if(j==l2 && str1[i]==32)
			{
				count++;
			}
		}
		if(str1[i]==str2[j] && i==(l1-l2+j) )
		{
			i++;
			j++;
			if(j==l2)
			{
				count++;
			}
		}
		else if(str1[i]==str2[j])
		{
			i++;
			j++;
			
			if(j==l2 && str1[i]==32 && str1[i-l2-1]==32)
			{
				count++;
			}
		}
		else
		{
			i++;
			j=0;
		}
	}

	printf("The count is %d",count);
	return 0;
}
