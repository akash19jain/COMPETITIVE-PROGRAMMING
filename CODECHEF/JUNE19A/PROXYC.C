https://www.codechef.com/JUNE19A/problems/PROXYC/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:07/06/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>
#define MOD 1000000007

int main()
{
    long long t=1;
    scanf("%lld",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char str[n+5];
        scanf("\n%s", str);
        int p=0,pr=0;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='P')
                p++;
        }
        for(int i=2;i<n-2;i++)
        {
            if(str[i]=='A' && (str[i-1]=='P' || str[i-2]=='P')&&(str[i+1]=='P' || str[i+2]=='P'))
                pr++;
        }
        int min=(0.75*n);
        if(min<(0.75*n))
            min++;
        
        //printf("MIN=%d pRE=%d prox=%d\n",min,p,pr); 
        if(p>=min)
            printf("0\n");
        else if(min>(p+pr))
            printf("-1\n");
        else
            printf("%d\n",(min-p));
        
    }
    return 0;
}
