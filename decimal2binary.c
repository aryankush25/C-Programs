#include <stdio.h>
 
int main()
{
    int num, remainder, base = 1, binary = 0;
 
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
	return 0;
}
