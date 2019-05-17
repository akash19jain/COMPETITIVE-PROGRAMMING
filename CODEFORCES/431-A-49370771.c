/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:02/02/2019
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define mod 1000000007

int main()
{
    int a[5];
    for(int i=1;i<=4;i++)
        scanf("%d",&a[i]);
    char str[100005];
    scanf("%s", str);
    long long ans=0,l=strlen(str);
    for(int i=0;i<l;i++)
    {
        ans+=a[str[i]-'0'];
    }
    
    printf("%d",ans);
    return 0;
}