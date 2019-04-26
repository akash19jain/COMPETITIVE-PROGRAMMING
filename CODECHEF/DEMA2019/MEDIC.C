https://www.codechef.com/DEMA2019/problems/MEDIC/

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
        int y,m,d,ans=0;
        scanf("%d:%d:%d",&y,&m,&d);
        int l=0;
        if(d%2==0)
        {
            if(m==2)
            {
                if(y%4==0)
                {
                    l=1;
                    if(y%100==0)
                    {
                        l=0;
                    }
                    if(y%400==0)
                    {
                        l=1;
                    }
                }
                if(l==1)
                {
                    ans=(29-d)/2;
                    ans++;
                    //ans+=15;
                }
                else
                {
                    ans=(28-d)/2;
                    ans++;
                    ans+=15;
                }
            }
            else if(m==1 ||m==3||m==5 || m==7 || m==8||m==10||m==12)
            {
                ans=(31-d)/2;
                ans++;
                //ans+=15;
            }
            else
            {
                ans=(30-d)/2;
                ans++;
                ans+=15;
            }
        }
        else
        {
            if(m==2)
            {
                if(y%4==0)
                {
                    l=1;
                    if(y%100==0)
                    {
                        l=0;
                    }
                    if(y%400==0)
                    {
                        l=1;
                    }
                }
                if(l==1)
                {
                    ans=(29-d)/2;
                    ans++;
                    //ans+=16;
                }
                else
                {
                    ans=(28-d)/2;
                    ans++;
                    ans+=16;
                }
            }
            else if(m==1 ||m==3||m==5 || m==7 || m==8||m==10||m==12)
            {
                ans=(31-d)/2;
                ans++;
                //ans+=16;
            }
            else
            {
                ans=(30-d)/2;
                ans++;
                ans+=16;
            }
        }
        printf("%lld\n",ans);
    }
    return 0;
}
