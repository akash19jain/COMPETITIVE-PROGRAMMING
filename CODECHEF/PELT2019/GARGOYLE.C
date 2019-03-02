https://www.codechef.com/PELT2019/problems/GARGOYLE/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:10/01/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    long long n;
    scanf("%lld",&n);
    int z=2*n+1;
    char str[n+1][z];
    scanf("\n");
    for(int i=0;i<n;i++)
    {
        gets(str[i]);
    }
    //char str1[]={'T',' ','T',' ','T'};
    //char str2[]={'F','F','F','F','F'};
    int d=0,count=0,flag=0;
    for(int i=0;i<n;i++)
    {
        d=0,flag=0;
        for(int j=0;j<n;j++)
        {
            if(str[i][j*2]=='T')
            {
                if(strcmp(str[i],str[j])!=0)
                {
                    flag=1;
                    break;
                }
                else
                d++;
            }
        }
        if(flag==0)
        {
            count+=d;
            break;
        }
    }
    printf("%d\n",count);
    
}
