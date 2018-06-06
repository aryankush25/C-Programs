#include<stdio.h>
#include<string.h>

typedef struct
{
	char states[50];
	char cities[5][50];
}GPS;

int main()
{
    GPS enter[5],temp;
    int i,j,a,k;
    char s[100];
    
    for(i=0;i<5;i++)
    {
    	printf("Enter State\n ");
        gets(enter[i].states);
        fflush(stdin);
        for(j=0;j<5;j++)
        {
        	printf("Enter City\n ");
            gets(enter[i].cities[j]);
            fflush(stdin);
        }  
    }
    
    for(i=0;i<5;i++)
    {
        for(j=0;j<5-1-i;j++)
        {
            if(strcmp(enter[j].states,enter[j+1].states)>0)
            {
                temp=enter[j];
                enter[j]=enter[j+1];
                enter[j+1]=temp;
            }
        }
    }
    
    for(k=0;k<5;k++)
    {
    	//printf("Array\n");
    	for(i=0;i<5;i++)
    	{
    		//printf("States\n");
        	for(j=0;j<5-1-i;j++)
        	{
            	if(strcmp(enter[k].cities[j],enter[k].cities[j+1])>0)
            	{
                	strcpy(s,enter[k].cities[j]);
                	strcpy(enter[k].cities[j],enter[k].cities[j+1]);
                	strcpy(enter[k].cities[j+1],s);	
            	}
        }
    }
    }
    
    for(i=0;i<5;i++)
    {
        printf("%s\n",enter[i].states);
        for(j=0;j<5;j++)
        {
            printf("%s\n",enter[i].cities[j]);
        }
    }
    
    
    return 0;
}
