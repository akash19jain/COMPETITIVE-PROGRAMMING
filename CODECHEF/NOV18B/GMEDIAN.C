https://www.codechef.com/NOV18B/problems/GMEDIAN/

#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int size=(2*n)+1;
	    int arr[n];
	    int *count=(int*) calloc(size,sizeof(int));
	    int max=0;
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&arr[i]);
	        count[arr[i]]++;
	        if(count[arr[i]]>max)
	        max=count[arr[i]];
	    }
	    
	    long long ans=1,p=1,ans1=0;
	    int n1=n-1;
	    while(n1>=30)
	    {
	        //int r=n%30;
	        p=pow(2,30);
	        p=p%1000000007;
	        ans*=p;
	       // if(ans>1000000007)
	        ans=ans%1000000007;
	        n1=n1-30;
	    }
	    p=pow(2,n1);
	    p=p%1000000007;
	        ans*=p;
	       // if(ans>1000000007)
	        ans=ans%1000000007;
	    ans1=ans;
	    ans=1;
	    for(int i=0;i<size;i++)
	    {
	        if(count[i]>1)
	        {
	            int n2=count[i]-1;
        	    while(n2>=30)
        	    {
        	        //int r=n%30;
        	        p=pow(2,30);
        	        p=p%1000000007;
        	        ans*=p;
        	       // if(ans>1000000007)
        	        ans=ans%1000000007;
        	        n2=n2-30;
        	    }
        	    p=pow(2,n2);
	            p=p%1000000007;
	            ans*=p-1;
	            ans=ans%1000000007;
	            ans1+=ans;
	        }
	    }
	    printf("%lld\n",ans1);
	}
	return 0;
}

