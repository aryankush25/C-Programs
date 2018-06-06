#include<stdio.h>
 int main()
 {
 	int total,a,x,y,z,b;
 	printf("Enter The Amount of first item = ");
 	scanf("%d",&x);
 	printf("Enter The Amount of second item = ");
 	scanf("%d",&y);
 	printf("Enter The Amount of third item = ");
 	scanf("%d",&z);
 	total=(x+y+z);
 	a=total;
 	printf("The Total Amount Is= %d",a);
 	b=a/10;
 	a=a%10;
 	printf("No. of 10s notes = %d",b);
	b=a/5;
	a=a%5;
	printf("No. of 5s notes = %d",b);
	b=a/2;
	a=a%2;
	printf("No. of 2s notes = %d",b);
	b=a/1;
	printf("No. of 1s notes = %d",b);
	return 0;
 	
 }
