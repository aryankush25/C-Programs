#include <stdio.h>
int main()
{
    int num, i=0, remainder, base = 1, y, binary = 0, bit;
    printf("Enter a decimal integer \n");
    scanf("%d", &num);
    while (num > 0)
    {
        remainder = num % 2;
        binary = binary + remainder * base;
        num = num / 2;
        base = base * 10;
    }
    printf("Its binary equivalent is = %d\n", binary);
    
    printf("Enter the nth bit \n");
    scanf("%d", &bit);
    while (i < bit)
    {
    	y = binary % 10;
    	binary = binary/10;
    	i++;
	}
	printf("Its %dth bit equivalent is = %d\n",bit, y);
	return 0;
}
