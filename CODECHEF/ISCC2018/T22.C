https://www.codechef.com/ISCC2018/problems/T22/

#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int arr[n];
	    
	    for(int i=0;i<n;i++)
	    scanf("%d",&arr[i]);
	    
	    int s=10000,b=0,p=1;
	    for(int i=0;i<n-1;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            b=arr[i]*arr[j];
	            p=1;
	            if(b<s && b!=1)
	            {
	                for(int k=2;k<=b/2;k++)
    	            {
    	                if(b%k==0)
    	                {
    	                    p++;
    	                    break;
    	                }
    	                
    	            }
    	            if(p==1)
    	            s=b;
	            
    	        }
    	    }
    	}
    	if(s==10000)
    	printf("-1\n");
    	else
    	printf("%d\n",s);
	}
	return 0;
}

