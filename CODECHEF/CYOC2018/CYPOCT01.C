https://www.codechef.com/CYOC2018/problems/CYPOCT01/

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

