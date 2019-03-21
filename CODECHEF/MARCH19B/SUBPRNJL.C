https://www.codechef.com/MARCH19B/problems/SUBPRNJL/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:12/03/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define mod 1000000007
int cmp(const void * a,const void * b)
{
    return (*(int*)a - *(int*)b);
}
int main()
{
    long long t=1;
    scanf("%lld",&t);
    while(t--)
    {
        if(t>5 || t<0)
            break;
        long long n,k,i,j;
        scanf("%lld%lld",&n,&k);
        if(n>2000 || n<0)
            break;
        long long arr[n];
        for(i=0;i<n;i++)
            scanf("%lld",&arr[i]);
        long long l=-1,r=-1,ans=0;
        l++,r++;
        while(n!=l)
        {
            long long flag=n;
            for(i=1;i>0;i++)
            {
                if(n>2000)
                {
                    ans+=2000;
                }
                else
                    ans=ans;
                if(r==n)
                    break;
                else if(r<l)
                    break;
                
                else
                {
                    long long x=r-l+1,y;
                    long long sub[x],count=0;
                    int occurences[2001]={0};
                    for(j=l;j<=r;j++)
                    {
                        sub[count++]=arr[j];
                        occurences[arr[j]]++;
                        flag--;
                    }
                    
                    for(j=0;j<x-1;j++)
                    {
                        for(long long k=j+1;k<x;k++)
                        {
                            if(sub[j]>sub[k])
                            {
                                long long temp=sub[j];
                                sub[j]=sub[k];
                                sub[k]=temp;
                            }
                        }
                    }
                    if(k%count!=0)
                        y=k/count +1;
                    else
                         y=k/count;
                         
                    if(k%y!=0)
                        y=k/y +1;
                    else
                        y=k/y;
                        
                    long long b=sub[y-1];
                    long long a=occurences[b];
                    if(l%2!=0)
                        r--;
                    else
                        r++;
                    if(occurences[a]<=0)
                        ans=ans;
                    else
                        ans++;
                        
                    
                }
            }
            l++;
            if(r!=n)
            {
                r=r+2;
            }
            else
                r--;
        }
        if(ans<=0)
        ans=0;
        else
        ans=ans;
        printf("%lld\n",ans);
    }
    return 0;
}
