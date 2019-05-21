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
int check(char str[])
{
    int ans[15]={0};
    if(str[1]==str[4] && str[1]==str[7] && str[1]==str[10] && str[1]==str[13])
    {
        for(int i=0;i<13;i+=3)
        {
            if(str[i]=='A')
            {
                ans[0]=1;
                ans[13]=1;
            }
            if(str[i]=='2')
            {
                ans[1]=1;
            }
            if(str[i]=='3')
            {
                ans[2]=1;
            }
            if(str[i]=='4')
            {
                ans[3]=1;
            }
            if(str[i]=='5')
            {
                ans[4]=1;
            }
            if(str[i]=='6')
            {
                ans[5]=1;
            }
            if(str[i]=='7')
            {
                ans[6]=1;
            }
            if(str[i]=='8')
            {
                ans[7]=1;
            }
            if(str[i]=='9')
            {
                ans[8]=1;
            }
            if(str[i]=='T')
            {
                ans[9]=1;
            }
            if(str[i]=='J')
            {
                ans[10]=1;
            }
            if(str[i]=='Q')
            {
                ans[11]=1;
            }
            if(str[i]=='K')
            {
                ans[12]=1;
            }
        }
        int c=0;
        for(int i=0;i<14;i++)
        {
            if(ans[i]==1)
                c++;
            if(c==5)
            {
                break;
            }
            if(ans[i]==0)
                c=0;
        }
        if(c==5)
            return 1;
    }
    return 0;
}
int main()
{
    long long t=1;
    //scanf("%lld",&t);
    while(t--)
    {
        char str[20];
        gets(str);
        
        int c=check(str);
        if(c==0)
            printf("NO\n");
        else
            printf("YES\n");
        //printf("%s\n",str);
    }
    return 0;
}
