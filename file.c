#include<stdio.h>
#include<string.h>

int main()
{
	FILE *fptr;
	fptr=fopen("demo.txt","r");
	
	int i;
	char state[10],ch[10],ch1[10],ch2[10];
	//gets(state);
	//scanf("%d",&i);
	
	if(fptr==NULL)
	{
		printf("does not exist");
	}
	else
	{
		
		//fseek(fptr,5,SEEK_SET);
		//fputs("Hello",fptr);
		
		/*for(i=0;i<strlen(state);i++)
		{
			printf("wiriting %c successfully\n",state[i]);
		}*/
		//fprintf(fptr,"%s\n %d\n",state,i);
		
		//fwrite(ch,1,sizeof(ch),fptr);
		
		/*while(!feof(fptr))
		{
			//ch=fgetc(fptr);
			
			//fgets(ch,10,fptr);
			
			
			
			break;	
		}*/
		fscanf(fptr,"%s %s %s %d",ch,ch1,ch2,&i);
		printf("%s %s %s %d",ch,ch1,ch2,i);
		fclose(fptr);
	}
	return 0;
}
