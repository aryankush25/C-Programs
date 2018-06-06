#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int i;
	
	struct student
	{
		char name[20];
		int roll;
		char branch[5];
		char dob[10];
		float fees;
	};
	
	struct student var[2];
	
	for(i=0;i<1;i++)
	{
		printf("Enter");
		gets(var[i].name);
		scanf("%d",&var[i].roll);
		fflush(stdin);
		scanf("%s",var[i].branch);
		fflush(stdin);
		scanf("%s",var[i].dob);
		scanf("%f",&var[i].fees);
		fflush(stdin);
	}
	
	var [1] = var[0] ;
	
	for(i=1;i<2;i++)
	{
		puts(var[i].name);
		printf("%d\n",var[i].roll);
		printf("%s\n",var[i].branch);
		printf("%s\n",var[i].dob);
		printf("%f\n",var[i].fees);
	}
	
	return 0;
}
