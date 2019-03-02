https://www.codechef.com/LTIME64B/problems/CHEFRES/

#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long n,m;
        scanf("%lld%lld",&n,&m);
        long long time[n][2];
        long long q[m];
        long long ans[m];
        long long ma=0,min=100000000000;
        for(long long i=0;i<n;i++)
        {
            scanf("%lld%lld",&time[i][0],&time[i][1]);
            if(time[i][1]>ma)
            ma=time[i][1];
            if(time[i][0]<min)
            min=time[i][0];
        }
        
        long long max=1000000,dif=0,flag=0;
        for(long long j=0;j<m;j++)
        {
            flag=0,max=10000000000;
            scanf("%lld",&q[j]);
            for(long long i=0;i<n;i++)
            {
                if(q[j]>ma)
                {
                    ans[j]=-1;
                    flag=1;
                    break;
                }
                if(q[j]<min)
                {
                    ans[j]=min-q[j];
                    flag=1;
                    break;
                }
                if(q[j]>=time[i][0] && q[j]<time[i][1])
                {
                    ans[j]=0;
                    flag=1;
                    break;
                }
                dif=time[i][0]-q[j];
                if((dif>0) && (dif<max))
                max=dif;
            }
            if(flag==0)
            {
                if(max==10000000000)
                ans[j]=-1;
                else
                ans[j]=max;
            }
            
        }
            for(long long i=0;i<m;i++)
            {
                printf("%lld\n",ans[i]);
            }
        
    }
}
