//Sometimes problems will ask you to update an interval from l to r, instead of a single element.

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

void constructSTUtil(long long arr[], long long ss, long long se, long long si) 
{ 
    
    // If there is one element in array, store it in 
    // current node of segment tree and return 
    if (ss == se) 
    { 
        t[si] = arr[ss]; 
        return; 
    } 
  
    // If there are more than one elements, then recur 
    // for left and right subtrees and store the sum 
    // of values in this node 
    long long mid = (ss + se)/2; 
    constructSTUtil(arr, ss, mid, si*2+1); 
    constructSTUtil(arr, mid+1, se, si*2+2); 
  
    t[si] = t[si*2 + 1] + t[si*2 + 2]; 
} 
void updateRangeUtil(long long si, long long ss, long long se, long long us, 
                     long long ue, long long diff) 
{ 
    // If lazy value is non-zero for current node of segment 
    // tree, then there are some pending updates. So we need 
    // to make sure that the pending updates are done before 
    // making new updates. Because this value may be used by 
    // parent after recursive calls (See last line of this 
    // function) 
    if (lazy[si] != 0) 
    { 
        // Make pending updates using value stored in lazy 
        // nodes 
        t[si] += (se-ss+1)*lazy[si]; 
  
        // checking if it is not leaf node because if 
        // it is leaf node then we cannot go further 
        if (ss != se) 
        { 
            // We can postpone updating children we don't 
            // need their new values now. 
            // Since we are not yet updating children of si, 
            // we need to set lazy flags for the children 
            lazy[si*2 + 1]   += lazy[si]; 
            lazy[si*2 + 2]   += lazy[si]; 
        } 
  
        // Set the lazy value for current node as 0 as it 
        // has been updated 
        lazy[si] = 0; 
    } 
if (ss>se || ss>ue || se<us) 
		return ; 
  
    // Current segment is fully in range 
    if (ss>=us && se<=ue) 
    { 
        // Add the difference to current node 
        t[si] += (se-ss+1)*diff; 
  
        // same logic for checking leaf node or not 
        if (ss != se) 
        { 
            // This is where we store values in lazy nodes, 
            // rather than updating the segment tree itelf 
            // Since we don't need these updated values now 
            // we postpone updates by storing values in lazy[] 
            lazy[si*2 + 1]   += diff; 
            lazy[si*2 + 2]   += diff; 
        } 
        return; 
    } 
  
    // If not completely in rang, but overlaps, recur for 
    // children, 
    long long mid = (ss+se)/2; 
    updateRangeUtil(si*2+1, ss, mid, us, ue, diff); 
    updateRangeUtil(si*2+2, mid+1, se, us, ue, diff); 
  
    // And use the result of children calls to update this 
    // node 
    t[si] = t[si*2+1] + t[si*2+2]; 
} 
long long getSumUtil(long long ss, long long se, long long qs, long long qe, long long si) 
{ 
    // If lazy flag is set for current node of segment tree, 
    // then there are some pending updates. So we need to 
    // make sure that the pending updates are done before 
    // processing the sub sum query 
    if (lazy[si] != 0) 
    { 
        // Make pending updates to this node. Note that this 
        // node represents sum of elements in arr[ss..se] and 
        // all these elements must be increased by lazy[si] 
        t[si] += (se-ss+1)*lazy[si]; 
  
        // checking if it is not leaf node because if 
        // it is leaf node then we cannot go further 
        if (ss != se) 
        { 
            // Since we are not yet updating children os si, 
            // we need to set lazy values for the children 
            lazy[si*2+1] += lazy[si]; 
            lazy[si*2+2] += lazy[si]; 
        } 
  
        // unset the lazy value for current node as it has 
        // been updated 
        lazy[si] = 0; 
    } 
  
    // At this point we are sure that pending lazy updates 
    // are done for current node. So we can return value  
    // (same as it was for query in our previous post) 
  if (ss>se || ss>qe || se<qs) 
		return 0;
    // If this segment lies in range 
    if (ss>=qs && se<=qe) 
        return t[si]; 
  
    // If a part of this segment overlaps with the given 
    // range 
    long long mid = (ss + se)/2; 
    return getSumUtil(ss, mid, qs, qe, 2*si+1) + 
           getSumUtil(mid+1, se, qs, qe, 2*si+2); 
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

        constructSTUtil(arr,0,n-1,0);

        while(q--)
        {
            long long x,l,r;
            scanf("%lld%lld%lld",&x,&l,&r);
            if(x==1)
            {
                l--;
                r--;
                long long ans=getSumUtil(0,n-1,l,r,0);
                printf("%lld\n",ans);
            }
            if(x==0)
            {

                l--;
                r--;
                long long a;
                scanf("%lld",&a);
                //for(long long i=l;i<=r;i++)
                //{
                    updateRangeUtil(0,0,n-1,l,r,a);
                //}
            }
        }
        
    }
    return 0;
}
