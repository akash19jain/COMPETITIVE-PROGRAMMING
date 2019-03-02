https://www.codechef.com/COOK100B/problems/TRUEDARE/

/**
 *    author:  AKASH JAIN
 *    created: 18.11.2018
**/
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
        int a,b,c,d,i,j,flag=0;
        scanf("%d",&a);
        int a1[a];
        for(i=0;i<a;i++)
        scanf("%d",&a1[i]);
        
        scanf("%d",&b);
        int b1[b];
        for(i=0;i<b;i++)
        scanf("%d",&b1[i]);
        
        scanf("%d",&c);
        int c1[c];
        for(i=0;i<c;i++)
        scanf("%d",&c1[i]);
        
        scanf("%d",&d);
        int d1[d];
        for(i=0;i<d;i++)
        scanf("%d",&d1[i]);
        
        for(i=0;i<c;i++)
        {
            flag=0;
            for(j=0;j<a;j++)
            {
                if(a1[j]==c1[i])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                printf("no\n");
                break;
                //continue;
            }
            
        }
        if(flag==0)
        continue;
        for(i=0;i<d;i++)
        {
            flag=0;
            for(j=0;j<b;j++)
            {
                if(b1[j]==d1[i])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                printf("no\n");
                break;
            }
        }
        if(flag==0)
        continue;
       
        printf("yes\n");
    }
    
   
    return 0;
}
