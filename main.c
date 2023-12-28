#include <stdio.h>
#include <stdlib.h>

int main()
{
   int base;
   int power;
   int result=1;
   printf("Enter the base:");
   scanf("%i",&base);
   printf("Enter the power:");
   scanf("%i",&power);

   if(power>=0)
   {
       for(int x=1;x<=power;x++)
       {
           result*=base;
       }
   }   printf("%i^%i=%i",base,power,result);
    return 0;
}
