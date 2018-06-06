#include<stdio.h>
#include<stdlib.h>

int main()
{
	int l=0,i=0,k=0,n;
	char str[100],str1[100];
	
	gets(str);
	
	
	printf("Enter No. Of characters you want to extract\n");
	scanf("%d",&n);
	
	printf("Enter The position from where you want to extract\n");
	scanf("%d",&i);
	
	n=n+i;
	
	while(str[i]!='\0' && i<n)
	{
		str1[k]=str[i];
		i++;
		k++;
	}
	str1[i]='\0';
	
	puts(str1);
	
	return 0;
}
