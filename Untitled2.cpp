#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student
{
	int a;
	float b;
	char *c=calloc(100*sizeof(char));
};

int main()
{
	
	struct student s1,s2;
	
	s1.a=3;
	s1.b=3.54;
	s1.c[100]="Aryan";
	
	printf("%d %f %s",s1.a,s1.b,s1.c);
	
	/*char c[100]="hi world";
	printf("--------------------");
	printf("%s",c);
	printf("--------------------");
	puts(c);
	printf("--------------------");*/
	return 0;
}
