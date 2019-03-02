https://www.codechef.com/ENJA2019/problems/CTEXT/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:28/01/2019
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define mod 1000000007


int main()
{
    long long t;
    scanf("%lld\n",&t);
    while(t--)
    {
        long long n;
        scanf("%lld\n",&n);
        char str[n+10];
        gets(str);
        int l=strlen(str);
        for(long long i=0;i<l;i++)
        {
            if(str[i]>='0'  && str[i]<='4')
            str[i]=str[i]+5;
            else if(str[i]>='5'  && str[i]<='9')
            str[i]=str[i]-5;
            else if(str[i]>='a'  && str[i]<='m' )
            str[i]=str[i]+13;
            else if(str[i]>='A'  && str[i]<='M' )
            str[i]=str[i]+13;
            else if(str[i]>='n'  && str[i]<='z' )
            str[i]=str[i]-13;
            else if(str[i]>='N'  && str[i]<='Z' )
            str[i]=str[i]-13;
            else
            {}
        }
        puts(str);
    }
    return 0;
}
