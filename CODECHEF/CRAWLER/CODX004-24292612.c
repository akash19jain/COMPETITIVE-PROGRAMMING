/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:17/05/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    long long t=1;
    //scanf("%lld\n",&t);
    while(t--)
    {
        int ans;
        char str[7];  
        scanf("%s", str);
        int s1=str[0]+str[1]+str[2];
        int s2=str[3]+str[4]+str[5];
        
        if(s1-s2==0)
            ans=0;
        else if(fabs(s1-s2)<=9)
            ans=1;
        else if(fabs(s1-s2)<=18)
            ans=2;
        else
            ans=3;
            
        printf("%d\n",ans);
    }
    return 0;
}