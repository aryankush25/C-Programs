#include<stdio.h>
#include<stdlib.h>

struct course
{
	int marks;
	char subject[5];
};

int main()
{
	struct course var; 
/*	int s,i;
	scanf("%d",&s);
	
	struct course *ptr=(struct course*)malloc(s*sizeof(struct course));
	
	//printf("Size = %d\n",sizeof(*ptr));
	
	for(i=0;i<s;i++)
	{
		scanf("%d",&(ptr+i)->marks);
		fflush(stdin);
		scanf("%s",(ptr+i)->subject);
		
	}
	
	for(i=0;i<s;i++)
	{
	printf("\nprint %d\n%s",(ptr+i)->marks,(ptr+i)->subject);
	}
	//free(ptr);*/
	printf("\nSize = %d\n",sizeof(struct course));
	return 0;
}
