#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
	char name[20];
	int age;
}RECORD;

void display(RECORD rec[])
{
	int i;
	for(i=0;i<4;i++)
	{
		printf("The Name Is %s  ",rec[i].name);
		printf("The Age Is %d\n",rec[i].age);
	}
}

void sort_name(RECORD var[])
{
	int i,j;
	for(i=0;i<6;i++)
	{
		for(j=0;j<3-i;j++)
		{
			if(strcmp((var[j].name),(var[j+1].name))>0)
			{
				var[4]=var[j];
				var[j]=var[j+1];
				var[j+1]=var[4];
			}
		}
	}
}

void sort_age(RECORD var[])
{
	int i,j;
	for(i=0;i<6;i++)
	{
		for(j=0;j<3-i;j++)
		{
			if((var[j].age)>(var[j+1].age))
			{
				var[4]=var[j];
				var[j]=var[j+1];
				var[j+1]=var[4];
			}
		}
	}
}


int main()
{   RECORD rec[5];
	int i,temp, choice,start;
	for(i=0;i<4;i++)
	{
		printf("Enter name:");
		scanf("%s",&rec[i].name);
		printf("Enter age:");
		scanf("%d",&rec[i].age);
		fflush(stdin);
	}
	start = 1;
	while( start )
	{
		printf("\n Press 1 For Sorting By Age ");
		printf("\n Press 2 For Sorting By Name ");
		printf("\n Press 3 For Display ");
		printf("\n Press 4 For Exit \n");  
        printf("enter choice:");
        scanf("%d",&choice);
    switch(choice)
   {
      case 1:
        sort_age(rec);
        printf("sorting by agewise is done");
        break;
      case 2:
	    sort_name(rec);
	    printf("sorting by namewise is done");
	    break;
	  case 3:
	  	printf("details are:\n");
	  	display(rec);
	  	break;
	  case 4:
	  	start=0;
	  	printf("bye bye");
	  	break;
	  default:
      {
       printf("Entered Choice is Invalid, Try Again");	
      }
   }
   }
   return 0;
}
