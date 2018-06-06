#include <stdio.h>
int main()
{
    long num, remainder, base = 1, binary = 0, count=0;
    printf("Enter a decimal integer \n");
    scanf("%d", &num);
    while (num > 0)
    {
        remainder = num % 2;
        binary = binary + remainder * base;
        num = num / 2;
        base = base * 10;
    }
    printf("Its binary equivalent is = %ld\n", binary);
    
    while (binary!=0)
    {
    	if(binary&1==1)
            {
                count++;
        	}
    	binary = binary/10;
	}
	
	if(count==1)
        {
            printf("IT IS A POWER OF 2");
        }
	else
        {
            printf("NOT A POWER OF 2");
        }
	return 0;
}
