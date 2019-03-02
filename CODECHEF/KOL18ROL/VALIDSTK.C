https://www.codechef.com/KOL18ROL/problems/VALIDSTK/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE;18/12/2018    
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long n,sum=0;
        scanf("%lld",&n);
        int arr[n],flag=0;
        for(long long i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]==1)
            sum++;
            else
            sum--;
            //printf("%lld ",sum);
            if(sum<0)
            {
                flag=1;
            }
            
        }
        if(flag==1)
        printf("Invalid\n");
        else
        printf("Valid\n");
        
    }
    
    
    return 0;
}
