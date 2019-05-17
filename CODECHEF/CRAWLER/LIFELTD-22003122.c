/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE;18/12/2018    
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        char arr[4][4];
        for(int i=0;i<3;i++)
        {
            scanf("%s", arr[i]);
        }
        int flag=0;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                if(arr[i][j]=='l' && arr[i+1][j]=='l' && arr[i+1][j+1]=='l')
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
        printf("yes\n");
        else
        printf("no\n");
    }

    return 0;
}