https://www.codechef.com/CGSC2018/problems/CGSURYA/

#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        char string[n+1];
        scanf("%s", string);
        
        long long arr[n+1];
        for(long long i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
            if(string[i]=='L')
            arr[i]*=-1;
        }
        
        long long max_so_far = 0, max_ending_here = 0; 
        for (long long i = 0; i < n; i++) 
       { 
           max_ending_here = max_ending_here + arr[i]; 
           if (max_ending_here < 0) 
               max_ending_here = 0; 
      
           else if (max_so_far < max_ending_here) 
               max_so_far = max_ending_here; 
       } 
        printf("%lld\n",max_so_far);
    }
}
