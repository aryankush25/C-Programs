#include <stdio.h>
#include <math.h> 
int main()
{
    int num,i=0, remainder, base = 1, binary = 0;
 
    printf("Enter a decimal integer \n");
    scanf("%d", &num);
    while (num > 0)
    {
        remainder = num % 8;
        binary = binary + remainder * pow(10,i);
        num = num / 8;
        i++;
    }
    printf("Its octal equivalent is = %ld\n", binary);
	return 0;
}
