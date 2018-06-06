#include<stdio.h>
int main()
{
	float x,y,z,total,a,amt,dis;
	char g;
	printf("Enter The Amount of first item = ");
 	scanf("%f",&x);
 	printf("Enter The Amount of second item = ");
 	scanf("%f",&y);
 	printf("Enter The Amount of third item = ");
 	scanf("%f",&z);
 	total=(x+y+z);
 	a=total;
 	printf("The Total Amount Is= %f\n",total);
	
	
		printf("Enter your gender (M/F) : ");
		scanf("\n%c",&g);
		if(g=='M' || g=='m')
		{
			printf("You get 5%% discount\n");
			dis=a*0.05;
			amt=a-dis;
		}
		else
		{
			printf("You get 10%% discount\n");
			dis=a*0.10;
			amt=a-dis;	
		}
	
	if(a>10000)
	{
		printf("You get 20%% additional discount\n");
		dis=a*0.20;
		amt=amt-dis;		
	}
	printf("Total amount to pay after discount is = %f\n",amt);
	printf("You save = %f\n",a-amt);
	printf("**Thankyou For Shopping");
	return 0;
}
