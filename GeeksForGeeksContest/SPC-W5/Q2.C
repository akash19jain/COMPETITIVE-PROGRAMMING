/*You are a legendary Alchemist known for transmuting any number N to 1. In this transmutation process, you do  2 operations:

If a number is odd, you either add 1 to it or subtract 1 from it.
If a number is even, you divide the number by 2.
Now, you have received a special request from Your Highness himself to transmute N to 1; however, he wants you to do it in the minimum number of steps to save time.

Can you maintain your status-quo as the legendary Alchemist?

Input:
The first line of input contains T, the number of testcases. T testcases follow. Each testcase contains one line of input containing number N.

Output:
For each testcase, in a new line, print the minimum number of steps.

Constraints:
1 <= T <= 100
1 <= N <= 10000000

Example:
Input:
4
1
2
3
4
Output:
0
1
2
2

Explanation:
Testcase1: 1 can be converted into 1 in 0 steps.
Testcase2: 2 can be converted into 1 in 1 step: 2-1

*   USERNAME:akash19jain    
*   DATE:13/07/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define MOD 1000000007
int cmp(const void * a,const void * b);
long long min(long long a,long long b)
{
    if(a<b)
        return a;
    return b;
}
long long calculate(long long n)
{
    if(n==1)
        return 0;
    else if(n%2==0)
        return 1+calculate(n/2);
    else
        return 1+min(calculate(n-1),calculate(n+1));
}
int main()
{
    
    long long t=1,i=0;
    scanf("%lld",&t);
    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        long long ans=calculate(n);
        printf("%lld\n",ans);
        
    }
    return 0;
}


//qsort(arr,n,sizeof(arr[0]),cmp);
int cmp(const void * a,const void * b)
{
    return (*(int*)a - *(int*)b);
}
