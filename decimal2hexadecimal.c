#include <stdio.h>
 
int main()
{
    int num, remainder, base = 1;
	char binary = 0;
 
    printf("Enter a decimal integer \n");
    scanf("%d", &num);
    while (num > 0)
    {
        remainder = num % 16;
        binary = binary + remainder * base;
        num = num / 16;
        base = base * 10;
    }
    printf("Its octal equivalent is = %x\n", binary);
	return 0;
}
