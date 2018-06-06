#include<stdio.h>
#include<stdlib.h>

int main()
{
	int s,i;
	scanf("%d",&s);
	
	int *ptr=malloc(s*sizeof(int));
	
	//printf("Size = %d\n",sizeof(*ptr));
	
	/*for(i=0;i<3;i++)
	{
		scanf("%d",(ptr+i));
		//fflush(stdin);
	}*/
	
	for(i=0;i<s;i++)
	{
		printf("\nprint %d",*(ptr+i));
	}

	free(ptr);
	//printf("\nSize = %d\n",sizeof(ptr));
	return 0;
}
