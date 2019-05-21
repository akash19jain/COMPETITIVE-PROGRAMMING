/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:21/05/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define MOD 1000000007
int find_val(int x)
{
	int mod = x%3;
	int val;
	if(mod==0 || mod==1 )		
	    val = (x/3)*2;		 	
	else 
	    val = 1 + (x/3)*2;
	    
	return val;
}
int main()
{
    long long t=1;
    //scanf("%lld",&t);
    while(t--)
    {
        int r,c;
        scanf("%d%d",&r,&c);
        
        int ans = 0;
	    int r1 = find_val(r);
	    int c1 = find_val(c);
	    
	    if(r*c==1)
	        ans = 0;
	    else if(r==1)	
	        ans = c1;
	    else if(c==1)	
	        ans = r1;
	    else 
	        ans = r1*c + (r-r1)*c1; 
        
        
        printf("%d\n",ans);
    }
    return 0;
}
