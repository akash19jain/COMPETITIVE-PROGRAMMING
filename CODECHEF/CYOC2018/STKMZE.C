https://www.codechef.com/CYOC2018/problems/STKMZE/

#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int sp,ep,n,i,j,flag=0,pos=0;
	    scanf("%d%d%d",&sp,&ep,&n);
	    int arr[n];
	    int cost[n];
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&arr[i]);
	        if(arr[i]==sp && pos==0)
	        pos=i;
	    }
	    
	    for(i=0;i<n-1;i++)
	    scanf("%d",&cost[i]);
	    
	    long long ans=0;
	    for(i=0;i<n-1;i++)
	    {
	        
	        flag=0;
	        for(j=0;j<i;j++)
	        {
	            if(arr[i]==arr[j])
	            {
	                flag=1;
	                break;
	            }
	        }
	        if(flag==0)
	        ans+=cost[i];
	        if(arr[i]==ep)
	        break;
	        
	    }
	    printf("%lld\n",ans);
	}
	return 0;
}

