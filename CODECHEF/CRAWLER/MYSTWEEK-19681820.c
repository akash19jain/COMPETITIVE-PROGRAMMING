#include <stdio.h>

int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,x;
	    scanf("%d%d",&n,&x);
	    int a[n];
	    int sum=0;
	    int z=0;
        for(int i=0;i<n;i++)
        {
	        scanf("%d",&a[i]);
	        sum+=a[i];
	        if(a[i]>0)
	        z=i+1;
        }
	    
	    int c=x%sum;
	    int r=x/sum;
	    for(int i=0;i<n;i++)
	    {
	        if(c==0 && r>=1)
	        {
	            printf("%d\n",z);
	            break;
	        }
	        c=c-a[i];
	        if(c<=0)
	        {
	            printf("%d\n",i+1);
	            break;
	        }
	    }
	    
	}
}