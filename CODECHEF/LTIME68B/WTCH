https://www.codechef.com/LTIME68B/problems/WTCH/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:26/01/2019 
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
        long long n,i,c=0;
        scanf("%lld",&n);
        char arr[n+1];
        scanf("%s", arr);
        if(n==1)
        {
            if(arr[0]=='0')
            printf("1\n");
            else
            printf("0\n");
            continue;
        }
        long long l=n;
        if(arr[0]=='0' && arr[1]=='0')
        {
            c++;
            arr[0]='1';
        }
        for(i=2;i<l-2;i++)
        {
            if(arr[i]=='0' && arr[i-1]=='0' && arr[i+1]=='0')
            {
                c++;
                arr[i]='1';
            }
        }
        if(arr[l-1]=='0' && arr[l-2]=='0')
        {
            c++;
            arr[l-2]='1';
        }
        printf("%lld\n",c);
    }
    return 0;
}
