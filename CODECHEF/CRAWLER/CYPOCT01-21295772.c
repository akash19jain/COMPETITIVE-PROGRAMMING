#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long long a,d,m,n,p;
	    scanf("%lld%lld",&a,&d);
	    scanf("%lld%lld%lld",&m,&n,&p);
	    long long max=0,cost=d;
	    /*if(d>a)
	    {
	        printf("Impossible\n");
	        continue;
	    }*/
	    max=abs(m)+abs(n);
	    cost+=(max*p)*2;
	    //printf("%lld\n",cost);
	    if(cost>a)
	    printf("Impossible\n");
	    else
	    printf("Possible\n");
	    
	    
	    
	}
	return 0;
}