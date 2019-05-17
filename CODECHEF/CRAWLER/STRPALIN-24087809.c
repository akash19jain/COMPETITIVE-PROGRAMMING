/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:26/04/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    long long t=1;
    scanf("%lld\n",&t);
    while(t--)
    {
        char str1[1005],str2[1005];
        scanf("%s", str1);
        scanf("%s", str2);
        int l1=strlen(str1);
        int l2=strlen(str2),f=0;
        for(int i=0;i<l1;i++)
        {
            for(int j=0;j<l2;j++)
            {
                if(str1[i]==str2[j])
                {
                    f=1;
                    break;
                }
            }
        }
        if(f==1)
            printf("Yes\n");
        else    
            printf("No\n");
    }
    return 0;
}