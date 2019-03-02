https://www.codechef.com/COOK100B/problems/BEAUTGAR/

/**
 *    author:  AKASH JAIN
 *    created: 18.11.2018
**/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        char str[100001];
        scanf("%s", str);
        long long  n=1;
        long long c=0,r=0,g=0,even=0,odd=0;
        if(str[0]=='G')
        g++;
        else
        r++;
        for(int i=1;str[i]!='\0';i++)
        {
            if(str[i]==str[i-1])
            c++;
            if(str[i]=='G')
            g++;
            else
            r++;
            
            n++;
        }
        if(str[0]==str[n-1])
        c++;
        
        if(n%2==0 && g==r)
        even=1;
        if(n%2==1 && (g==r-1 || g==r+1))
        odd=1;
        
        //printf("%lld ",c);
        if(c==0)
        printf("yes\n");
        
        else if(c==2 && g!=n && r!=n && (even==1 || odd==1))
        printf("yes\n");
        
        else
        printf("no\n");
    }
    
   
    return 0;
}
