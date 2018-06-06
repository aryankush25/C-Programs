#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
	int min;
	int hr; 
}TIME;

TIME sum_time(TIME time[])
{
	int i=0;
	for(i=0;i<2;i++)
	{
		time[3].hr=time[3].hr+time[i].hr;
		time[3].min=time[3].min+time[i].min;
	}
	if(time[3].min>=60)
	{
		time[3].hr=time[3].hr+(time[3].min/60);
		time[3].min=time[3].min%60;
	}
	return time[3];
}

int main()
{   TIME time[4];
	int i,temp,choice,start;
		time[3].hr=0;
		time[3].min=0;
		
	start = 1;
	while(start)
	{
	printf("Press 1 For Read Time \n");
	printf("Press 2 For Display Time \n");
	printf("Press 3 For Add Time \n");
	printf("Press 4 For Exit \n");  
    printf("enter choice: ");
    scanf("%d",&choice);
    switch(choice)
   {
      case 1:
      	for(i=0;i<2;i++)
      	{
        printf("Enter hour ");
		scanf("%d",&time[i].hr);
		printf("Enter Miniuts ");
		scanf("%d",&time[i].min);
	}
        break;
      case 2:
	    printf("The Time Is %d hours and %d min\n",time[3].hr,time[3].min);
	    break;
	  case 3:
	  	time[3]=sum_time(time);
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
