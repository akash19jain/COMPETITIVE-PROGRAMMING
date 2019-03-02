https://www.codechef.com/NOV18B/problems/HMAPPY1/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long n,q,k,i,one=0,zero=0,f=0,j=0,co=0,current=0,max=0,prev=0,current1=0,max1=0;
    scanf("%lld%lld%lld",&n,&q,&k);
    int arr[n];
    long long *ans=(long long *)calloc(q,sizeof(long long));
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==1)
        one++;
        else
        zero++;
        
        if(arr[i]==1)
        current1++;
                    
        if(current1>max1)
        {
            max1=current1;
        }
        
        if(arr[i]==0)
        current1=0;
        
    }
    char que[q];
    scanf("%s", que);
    
    for(i=0;i<q;i++)
    {
        if(que[i]=='?')
        {
            if(one==n)
            {
                printf("%lld\n",k);
                //continue;
            }
            else if(zero==n)
            {
                printf("%lld\n",0);
                //continue;
            }
            else if(ceil((double)one/(zero+1))>=k)
            {
                printf("%lld\n",k);
                //continue;
            }
            else if(max1>k)
            {
                printf("%lld\n",k);
                //continue;
            }
           
            else if(arr[f]==0)
            {
                printf("%lld\n",prev);
                
            }
            else
            {
                current=0,co=0,max=0;
                for(j=f;co<n;j++)
                {
                    co++;
                    if(arr[j]==1)
                    current++;
                    
                    if(current>max)
                    {
                        max=current;
                        if(max>=k)
                        {
                            max=k;
                            break;
                        }
                    }
                    
                    if(arr[j]==0)
                    current=0;
                    
                    if(j==n-1)
                    j=-1;
                }
                if(ans[f]==0)
                ans[f]=max;
                prev=max;
                printf("%lld\n",ans[f]);
            }
        }
        else
        {
            if(f==0)
            f=n-1;
            
            else
            f--;
            
        }
    }
    
}
