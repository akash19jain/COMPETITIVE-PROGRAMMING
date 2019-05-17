#include <stdio.h>

int main(void) 
{
	long long t;
	scanf("%lld",&t);
	while(t--)
	{
	    long long n;
	    scanf("%lld",&n);
	    char str[n+1];
	    scanf("%s", str);
	    long long flag=0,i;
	    for(i=1;str[i]!='\0';i++)
	    {
	        if((str[i-1]=='A' || str[i-1]=='E' || str[i-1]=='I' || str[i-1]=='O' || str[i-1]=='U') && (str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'))
	        {
	            flag=1;
	            break;
	        }
	        
	    }
	    //printf("%d\n",i);
	    if(flag==0 && n!=1)
	    {
	        if((str[0]=='A' || str[0]=='E' || str[0]=='I' || str[0]=='O' || str[0]=='U') && (str[i-1]=='A' || str[i-1]=='E' || str[i-1]=='I' || str[i-1]=='O' || str[i-1]=='U'))
	        {
	            flag=1;
	            //break;
	        }
	    }
	    
	    if(flag==1)
	    printf("Yes\n");
	    else
	    printf("No\n");
	}
	return 0;
}