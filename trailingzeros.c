#include<stdio.h>
 
int main()
{
      int num, temp, count = 0;
      printf("\nEnter a Number:\t");
      scanf("%d", &num);
      temp = num;
      while(num >= 0)
      {
            if(num%10 == 0)
            {
                  count++;
                  num = num / 10;
            }
            else
            { 
                  break;
            }
      }       
      printf("\nNumber of Trailing Zeros in %d = %d\n", temp, count);
      return 0;
}
