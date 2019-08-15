/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:30/01/2019
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define mod 1000000007

int main()
{
    long long n,t;
    scanf("%lld%lld",&n,&t);
    char arr[n];
    scanf("%s", arr);
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]=='B' && arr[j+1]=='G')
            {
                arr[j]='G';
                arr[j+1]='B';
                j++;
            }
        }
    }
    printf("%s",arr);
    return 0;
}