#include <stdio.h>

int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    char a[n];

	    scanf("%s", a);
	    int count=0;
	    for(int i=1;i<n;)
	    {
	        
	       if(a[i]=='R' && a[i-1]=='B')
	       {
	                count++;
	                i=i+2;
	       }
	       else if(a[i]=='B'&&a[i-1]=='R')
	       {
	                count++;
	                i=i+2;
	       }
	       else
	       i++;
	        
	    }
	    printf("%d\n",count);
	}
}