https://www.codechef.com/CYSE2018/problems/CYSEP03/

#include<stdio.h>
int main()
{
    long long n,m,q;
    scanf("%lld%lld%lld",&n,&m,&q);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    while(q--)
    {
        int flag=0;
        long long x,y;
        scanf("%lld%lld",&x,&y);
        if(m<=60)
        {
        	flag=1;
        }
        for(long long i=x-1;i<y;i++)
        {
            if(arr[i]>=m)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        printf("Sad\n");
        else
        printf("Happy\n");
    }
}
