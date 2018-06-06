#include <stdio.h>
int main()
{
    int num, y, remainder, base = 1, binary = 0, count=0;
    printf("Enter a decimal integer \n");
    scanf("%d", &num);
    y=num;
    while (num > 0)
    {
        remainder = num % 2;
        binary = binary + remainder * base;
        num = num / 2;
        base = base * 10;
    }
    printf("Its binary equivalent is = %ld\n", binary);
    while(binary >= 0)
      {
            if(binary%10 == 0)
            {
                  count++;
                  binary = binary / 10;
            }
            else
            { 
                  break;
            }
      }       
    printf("\nNumber of Trailing Zeros in %d = %d\n", y, count);
	return 0;
}
