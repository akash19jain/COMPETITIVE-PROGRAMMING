https://www.codechef.com/PELT2019/problems/XORNEY/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:10/01/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
unsigned long long ans(unsigned long long a) 
{
     unsigned long long res[] = {a,1,a+1,0};
     return res[a%4];
}
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        unsigned long long a,b,ans1;
        scanf("%llu%llu",&a,&b);
        ans1=ans(b)^ans(a-1);
        if(ans1%2==0)
        printf("Even\n");
        else
        printf("Odd\n");
    }
}
