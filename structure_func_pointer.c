#include<stdio.h>

typedef struct
{
	int x;
	int y;
}test;


void testf(test *t)
{
	t->x=15;
	t->y=20;
}

int main()
{
	test t;
	
	t.x=5;
	t.y=10;
	
	testf(&t);
	
	printf("%d\n",t.x);
	printf("%d\n",t.y);
}
