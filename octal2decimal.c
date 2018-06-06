#include <stdio.h>
#include <math.h> 
int main()
{
    int num,i=0, remainder, binary = 0;
 
    printf("Enter a decimal integer \n");
    scanf("%d", &num);
    while (num > 0)
    {
        remainder = num % 10;
        binary = binary + remainder * pow(8,i);
        num = num / 10;
        i++;
    }
    printf("Its octal equivalent is = %ld\n", binary);
	return 0;
}
