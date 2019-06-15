/*Below is a function given to you. The task is to find the value of function for given number X.
Function : f(X) = f(X+1) + X; f(0) = 1.

Input:
First line of input contains number of testcases T. For each testcase there will be a single line containing a number N.

Output:
For each testcase, print the value of function for given N.

Constraints:
1 <= T <= 100
1 <= N <= 800

Example:
Input:
2
3
4

Output:
-2
-5*/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:15/06/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
long long ans[810];
void solve()
{
    long long a=1,c=0;
    ans[c++]=a;
    for(long long i=1;i<805;i++)
    {
        a=ans[c-1]-i+1;
        ans[c++]=a;
    }
}
int main()
{
    long long t=1;
    scanf("%lld",&t);
    solve();
    while(t--)
    {
        int n;
        scanf("%d",&n);
        printf("%lld\n",ans[n]);
    }
    return 0;
}
