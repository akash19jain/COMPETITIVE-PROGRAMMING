/*Given a string S of digits(0-9), your task is to find the maximum value that can be obtained from the string by putting either '*' or '+' operators in between the digits while traversing from left to right of the string and picking up a single digit at a time.

Input:
The first line of input contains T denoting the number of testcases. T testcases follow. Each testcase contans one line of input denoting the string.

Output:
For each testcase, print the maximum value obtained.

Constraints:
1 <= T <= 100
1 <= |S|< = 20
0 <= Digits <= 9

Example:
Input:
2
01230
891
Output:
9
73

Explanation:
Testcase1: we have 01230. We traverse from left and pick zero. Now we encounter 1. We see if 0*1 gives maximum or 0+1. Now we have ans as 1. Now we traverse further. We encounter 2. Now 1*2 gives max or 1+2. Now we have ans 3. Now we traverse further. We encounter 3. We see if 3*3 gives max or 3+3. The ans is now 9. Now we traverse fiurther. We encounter 0, we see  if 9+0 gives max or 9*0. The ans is now 9. We've traversed whole string so we stop.

*  AUTHOR:AKASH JAIN
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
        char str[25];
        scanf("\n%s", str);
        long long ans=0;
        for(int i=0;i<strlen(str);i++)
        {
            int x=(int)str[i]-'0';
            if(ans*x>ans+x)
                ans*=x;
            else
                ans+=x;
        }
        printf("%lld\n",ans);
    }
    return 0;
}


//qsort(arr,n,sizeof(arr[0]),cmp);
int cmp(const void * a,const void * b)
{
    return (*(int*)a - *(int*)b);
}
