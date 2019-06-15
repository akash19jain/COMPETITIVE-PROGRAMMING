/* Given a number N. Find a number K such that product of digits of K must be equal to N.
Note : K must be as small as possible.

Input: First line of input contains number of testcases T. For each testcase, there will be a single line containing N.

Output: For each testcase, output single integer. If K is not possible, print "-1" (without quotes).

Constraints:
1 <= T <= 100
1 <= N <= 1015

Example:
Input:
2
12
5

Output:
26
5

Explanation:
Testcase 1: 26 is the smallest number, and product of 2 and 6 is 12.
Testcase 2: 5 is the smallest number which is itself equal to 5.*/

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

int main()
{
    long long t=1;
    scanf("%lld",&t);
    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        long long ans=0;
        if(n<=9)
            ans=n;
        else
        {
            int arr[100],a=0;
            for (int i=9; i>=2 && n > 1; i--) 
            { 
                while (n % i == 0) 
                { 
                    arr[a++]=i; 
                    n = n / i; 
                } 
            }
            if (n != 1) 
            {
                ans=-1;
            } 
            else
            {
                long long int k = 0; 
                while (a>0) 
                { 
                    k = k*10 + arr[a-1]; 
                    a--; 
                } 
                ans=k;
            }
        }
        
        printf("%lld\n",ans);
    }
    return 0;
}
