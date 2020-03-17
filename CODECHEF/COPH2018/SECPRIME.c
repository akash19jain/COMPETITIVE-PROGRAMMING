
# include <stdio.h>
# include <math.h>
 
void primeFactors(long long n)
{
    long long arr[1000000];
    int k=0;
   
    while (n%2 == 0)
    {
        arr[k]=2;
        k++;
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        
        while (n%i == 0)
        {
            arr[k]=i;
            n = n/i;
            k++;
        }
    }
 
    if (n > 2)
    {
    arr[k]=n;
    k++;
    }
        int z=0;
        for(int i=k-1;i>0;i--)
        {
            if(arr[i-1]!=arr[i])
            {
                
                printf("%d\n",arr[i-1]);
                z=1;
                break;
            }
        }
        if(z==0 )
        printf("-1\n");
        
}
 int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
    
        long long n;
        scanf("%lld",&n);
        primeFactors(n);
     
    }
 
    return 0;
}
