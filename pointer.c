#include<stdio.h>

int main()
{
	int a=9;
	int *ptr;
	ptr=&a;
	printf("%d\n",a);
	printf("%d\n",&a);
	printf("%d\n",ptr);
	printf("%d\n",*ptr);
	*ptr=25;
	printf("%d\n",*ptr);
	printf("%d\n",a);
	ptr=ptr+1;
	printf("%d\n",ptr);
	ptr=ptr+2;
	printf("%d\n",ptr);
	return 0;
}
