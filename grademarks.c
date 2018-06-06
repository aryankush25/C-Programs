#include<stdio.h>
int main()
{
	float m1,m2,m3,total;
	float percent;
	char grade;
	printf("Enter marks of subject one out of 40: ");
	scanf("%f",&m1);
	printf("Enter marks of subject two out of 40: ");
	scanf("%f",&m2);
	printf("Enter marks of subject three out of 40: ");
    scanf("%f",&m3);
    total=m1+m2+m3;
    printf("Total marks= %f\n",total);
    percent=((total)/120)*100;
    
    printf("Total percent=%f %%\n",percent);
     if(percent>=90)
	 	{
	 	 	printf("You scored grade A \n");
	 	 	grade='A';
	 	}
	 else if(percent<=90 && percent>=80)
		{
			printf("You scored grade B\n"); 
			grade='B';
		}
	 else if(percent<=80 && percent>=70)
	    {	
			printf("You scored grade C\n");
			grade='C';
	    }
	 else if(percent<=70 && percent>=60)
	    {	
			printf("You scored grade D\n");
	 		grade='D';
	    }
	 else if(percent<=60 && percent>=50)
	 	{
	 		printf("You scored grade e\n");
	 		grade='E';
	 	}
	 
	switch(grade)
	{
	 	case 'A':{
	 		printf("Excellent\n");
	 		break;
	  }
         case 'B':{		
         	printf("Good\n");
         	break;
      }
        case 'C':{
         	printf("Average\n");
         	break;
      }
        case 'D':{
			printf("Fair\n");
         	break;
   	  }
 		case 'E':{
		 	printf("Better Try Again\n");
         	break;
      }
        default:
         	{	 
			printf("Invalid Grade");
         	}
	}    
	return 0;
}
