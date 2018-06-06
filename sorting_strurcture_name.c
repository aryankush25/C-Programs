#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int i,j;
	
	typedef struct
	{
		char name[20];
		int age;
		char branch[5];
		//char dob[10];
		//float fees;
	}student;
	
	student var[5];
	
	for(i=0;i<3;i++)
	{
		printf("Enter\n");
		gets(var[i].name);
		scanf("%d",&var[i].age);
		fflush(stdin);
		scanf("%s",var[i].branch);
		//fflush(stdin);
		//scanf("%s",var[i].dob);
		//scanf("%f",&var[i].fees);
		fflush(stdin);
	}
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<2-i;j++)
		{
			if(strcmp((var[j].name),(var[j+1].name))>0)
			{
				var[4]=var[j];
				var[j]=var[j+1];
				var[j+1]=var[4];
			}
		}
	}
	
	for(i=0;i<3;i++)
	{
		puts(var[i].name);
		printf("%d\n",var[i].age);
		printf("%s\n",var[i].branch);
		//printf("%s\n",var[i].dob);
		//printf("%f\n",var[i].fees);
	}
	
	return 0;
}
