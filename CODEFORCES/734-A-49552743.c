/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:07/02/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define mod 1000000007

int main()
{
    long long n;
    scanf("%lld",&n);
    char str[n+1];
    scanf("%s", str);
    int d=0,a=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='A')
            a++;
        else
            d++;
        
    }
    if(a>d)
    printf("Anton");
    else if(a<d)
    printf("Danik");
    else
    printf("Friendship");
    return 0;
}