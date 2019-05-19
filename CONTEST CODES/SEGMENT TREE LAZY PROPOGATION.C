/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:18/05/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAXN 100005
long long t[4*MAXN];
long long lazy[4*MAXN];

void build(long long arr[], long long ss, long long se, long long si) 
{ 
    if (ss == se) 
    { 
        t[si] = arr[ss]; 
        return; 
    } 
  
    long long mid = (ss + se)/2; 
    build(arr, ss, mid, si*2+1); 
    build(arr, mid+1, se, si*2+2); 
  
    t[si] = t[si*2 + 1] + t[si*2 + 2]; 
    
} 
void updateRange(long long si, long long ss, long long se, long long us, 
                     long long ue, long long diff) 
{ 
    if (lazy[si] != 0) 
    { 
        t[si] += (se-ss+1)*lazy[si]; 

        if (ss != se) 
        { 
            lazy[si*2 + 1]   += lazy[si]; 
            lazy[si*2 + 2]   += lazy[si]; 
        } 
        lazy[si] = 0; 
    } 
    if (ss>se || ss>ue || se<us) 
    		return ; 

    if (ss>=us && se<=ue) 
    { 
        t[si] += (se-ss+1)*diff; 
 
        if (ss != se) 
        { 
            lazy[si*2 + 1]   += diff; 
            lazy[si*2 + 2]   += diff; 
        } 
        return; 
    } 
  
    long long mid = (ss+se)/2; 
    updateRange(si*2+1, ss, mid, us, ue, diff); 
    updateRange(si*2+2, mid+1, se, us, ue, diff); 
 
    t[si] = t[si*2+1] + t[si*2+2]; 
} 
long long Sum(long long ss, long long se, long long qs, long long qe, long long si) 
{ 

    if (lazy[si] != 0) 
    { 
        t[si] += (se-ss+1)*lazy[si]; 

        if (ss != se) 
        { 
            lazy[si*2+1] += lazy[si]; 
            lazy[si*2+2] += lazy[si]; 
        } 
  
        lazy[si] = 0; 
    } 
  
    if (ss>se || ss>qe || se<qs) 
    	return 0;
    
    if (ss>=qs && se<=qe) 
        return t[si]; 
 
    long long mid = (ss + se)/2; 
    return Sum(ss, mid, qs, qe, 2*si+1) + 
           Sum(mid+1, se, qs, qe, 2*si+2); 
} 

int main()
{
   // printf("RUNNING\n");
    long long te=1;
    scanf("%lld\n",&te);
    while(te--)
    {
        memset(lazy,0,sizeof(lazy));
        memset(t,0,sizeof(t));
        long long n,q;
        scanf("%lld%lld",&n,&q);
        long long arr[n];
        memset(arr,0,sizeof(arr));

        build(arr,0,n-1,0);

        while(q--)
        {
            long long x,l,r;
            scanf("%lld%lld%lld",&x,&l,&r);
            if(x==1)
            {
                l--;
                r--;
                long long ans=Sum(0,n-1,l,r,0);
                printf("%lld\n",ans);
            }
            if(x==0)
            {
                l--;
                r--;
                long long a;
                scanf("%lld",&a);
                updateRange(0,0,n-1,l,r,a);
            }
        }
        
    }
    return 0;
}
