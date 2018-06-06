#include<stdio.h>

typedef struct
{
	int x;
	int y;
}test;


test anshika(test d)
{
	d.x=15;
	d.y=20;
	
	return d;
}

int main()
{
	test t,a;
	
	t.x=5;
	t.y=10;
	
	a=anshika(t);
	
	printf("%d\n",a.x);
	printf("%d\n",a.y);
}
