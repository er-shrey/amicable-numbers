#include "stdio.h"
#include "math.h"

int printDivisors(int n)
{
    int sum = 0;
    for (int i=2; i<=sqrt(n)+1; i++)
    {
        if (n%i==0)
        {
            if (n/i == i){
                sum+=i;
            }
            else{
                sum+=i;
                sum+= (n/i);
            }
        }
    }
    return(sum+1);
}
int main()
{
    int number, amicable;
    for(number = 2;number<100000;number++){
      amicable = printDivisors(number);
      if(number == printDivisors(amicable) && number!=amicable){
        printf("\n Amicable: %d == %d\n", number, amicable);
      }
    }
    return 0;
}