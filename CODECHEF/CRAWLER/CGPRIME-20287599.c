#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100000000

void prime(int n, int *primes)
{
    int i,j,count=0;

    primes[count++] = 2;
    if (count == n)
        return;
    for(i=3;i<=MAX;i+=2)
    {
        int isPrime=1;
        int jMax = sqrt(i);
        for(j=3;j<=jMax;j+=2)
        {
            if(i%j==0)
            {
                isPrime=0;
                break;
            }
        }
        if(isPrime)
        {
            primes[count++] = i;
            if(count==n)
                return;
        }
    }
}

int main()
{
   int n,i;

   scanf("%d",&n);
   int arr[n];
   int maxPrime = 0;

   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
       if (arr[i] > maxPrime)
           maxPrime = arr[i];
   }
   int primes[maxPrime];
   prime(maxPrime, primes);
   for (i=0;i<n;i++)
   {
       printf("%d\n", primes[arr[i]-1]);
   }
   return 0;
}