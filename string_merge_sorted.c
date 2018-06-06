#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *mergeTwo(char str1[],char str2[])
{
	
	strcat(str1,str2);
	//puts(str1);
	
	return str1;
}

int main() {
    char str1[100],str2[100],*str3;
    gets(str1);
    gets(str2);
    str3= mergeTwo(str1,str2);
    puts(str3);
    return 0;
}
