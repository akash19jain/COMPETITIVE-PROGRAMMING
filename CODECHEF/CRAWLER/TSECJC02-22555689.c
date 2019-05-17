/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:20/01/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define mod 1000000007
bool prime[5000001]; 
void SieveOfEratosthenes(int n) 
{ 
    
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
}
int main()
{
    long long t;
    scanf("%lld",&t);
    SieveOfEratosthenes(5000000); 
    while(t--)
    {
        long long f1,f2,ans=0;
        long long arr[20];
        
        scanf("%lld%lld",&f1,&f2);
        arr[0]=f1;
        arr[1]=f2;
        if(prime[arr[0]])
            ans++;
        if(prime[arr[1]])
            ans++;
        for(int i=2;i<20;i++)
        {
            arr[i]=arr[i-1]+arr[i-2];
            if(prime[arr[i]])
            ans++;
        }
        
        printf("%d\n",ans);
    }
}