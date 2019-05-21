/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:21/05/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define MOD 1000000007

int main()
{
    long long t=1;
    //scanf("%lld",&t);
    while(t--)
    {
        char arr[1000007];
        scanf("%s", arr);
        int l=strlen(arr),c=0;
        for(int i=0;i<l;i++)
        {
            if(arr[i]=='9')
                c++;
        }
        if(c==l)
            printf("%d\n",l+1);
        else
            printf("%d\n",l);
    }
    return 0;
}
