#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i=0,j,k,length1=0,flag=1,length2=0;
	char arr1[10],arr2[10];
	
	gets(arr1);
	gets(arr2);
	
	while(arr1[i]!='\0')
	{
		length1++;
		i++;
	}
	i=0;
	while(arr2[i]!='\0')
	{
		length2++;
		i++;
	}
	i=0;
	if(length1==length2)
	{
		while(i!=length1)
		{
			if(arr1[i]!=arr2[i])
			{
				printf("WORD IS NOT SAME");
				flag=1;
				break;
			}
			else
			{
				flag=0;
			}
			i++;
		}
	}
	else
	{
		printf("WORD IS NOT SAME");
	}
	if(flag==0)
	{
		printf("WORD IS SAME");
	}
	return 0;
}
