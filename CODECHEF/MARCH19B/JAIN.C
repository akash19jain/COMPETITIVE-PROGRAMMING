https://www.codechef.com/MARCH19B/problems/JAIN/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:02/03/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long n,c=0,ans=0,z=0,z1=0;
        scanf("%lld\n",&n);
        char str[n+1][1005];
        int vow[n+1][7];
        memset(vow, 0, sizeof(vow[0][0]) * n * 7);
        int val[32];
        memset(val, 0, sizeof(val[0]) *32 );
        for(long long i=0;i<n;i++)
        {
            vow[i][0]=0;vow[i][1]=0;vow[i][2]=0;vow[i][3]=0;vow[i][4]=0;vow[i][5]=0;
            c=0;
            scanf("%s", str[i]);
            int l=strlen(str[i]),c1=0;
            for(long long j=0;j<l&&c1!=0x1F;j++)
            {
                if(str[i][j]=='a' && vow[i][0]==0)
                {
                    vow[i][0]=1;
                    c++;
                    c1|=(1<<0);
                }
                else if(str[i][j]=='e' && vow[i][1]==0)
                {
                    vow[i][1]=1;
                    c++;
                    c1|=(1<<1);
                }
                else if(str[i][j]=='i' && vow[i][2]==0)
                {
                    vow[i][2]=1;
                    c++;
                    c1|=(1<<2);
                }
                else if(str[i][j]=='o' && vow[i][3]==0)
                {
                    vow[i][3]=1;
                    c++;
                    c1|=(1<<3);
                }
                else if(str[i][j]=='u' && vow[i][4]==0)
                {
                    vow[i][4]=1;
                    c++;
                    c1|=(1<<4);
                }
                if(c==5)
                {
                    z++;
                    break;
                }
            }
            vow[i][5]=c;
            val[c1]++;
            //printf("%lld\n",c);
        }
        for(long long i=0;i<32;i++)
        {
            for(long long j=i;j<32;j++)
            {
                if((i|j)==0x1F)
                {
                    if(i==31)
                        ans+=(val[i]*(val[i]-1)/2);
                    else
                    {
                        long b=val[i]+val[j];
                        ans+=(val[i]*val[j]);
                    }
                }
            }
        }
        printf("%lld\n",ans);
    }
    return 0;
}
