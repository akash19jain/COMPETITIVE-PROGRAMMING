/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:12/03/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    int n,i,j,k,l;
    scanf("%d\n",&n);
    char str[n][105];
    int len[n],max=0;
    
    for(i=0;i<n;i++)
    {
        scanf("%s", str[i]);
        len[i]=strlen(str[i]);
        if(len[i]>max)
            max=len[i];
    }
    int a[max][n];
    memset(a, -1, sizeof a);
    for(i=0;i<n;i++)
    {
        for(j=0;j<len[i];j++)
        {
            a[j][i]=(int)str[i][j];
        }
    }
    int ans[n][2],x=0,z=0;
    /*if(max>31)
    z=31;
    else
    z=max;*/
    for(i=0;i<max;i++)
    {
        x=0;
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=-1)
            {
                ans[x][0]=a[i][j];
                //printf("%d ",ans[x][0]);
                ans[x++][1]=j+1;
            }
        }
        if(i%2==0)
        {
            for(k=48;k<=57;k++)
            {
                for(l=0;l<x;l++)
                {
                    if(ans[l][0]==k)
                        printf("%d ",ans[l][1]);
                    
                }
            }
        }
        else
        {
            for(k=57;k>=48;k--)
            {
                for(l=0;l<x;l++)
                {
                    if(ans[l][0]==k)
                        printf("%d ",ans[l][1]);
                    
                }
            }
        }
            
    }
    return 0;
}
