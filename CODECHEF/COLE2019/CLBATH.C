https://www.codechef.com/COLE2019/problems/CLBATH/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:26/02/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    long long t=1;
    scanf("%lld",&t);
    while(t--)
    {
        float v1,t1,v2,t2,v3,t3,f=0,fl=0;
        scanf("%f%f%f%f%f%f",&v1,&t1,&v2,&t2,&v3,&t3);
        if(t3==t1 && v3!=v1)
        {
            f=-1;
        }
        if(t3==t2 && v3!=v2)
        {
            f=-1;
        }
        if((v1+v2)>=v3 && f==0)
        f=1;
        if((t3<=t2 && t3>=t1) && f==1)
        f=2;
        
        if(t3>t2 || t3<t1)
        {
            printf("NO\n");
            continue;
        }
        fl=1;
        float r1,r2,t;
        r1=t2-t3;
        r2=t3-t1;
        t=r1+r2;
        float tr,tr1,tr2;
        if(v3<=t && v1>=r1 && v2>=r2)
        {
            printf("YES\n");
            continue;
        }
        
        else
        {
            if(v3<=t)
            {
                tr=(float)t/v3;
                tr1=r1/tr;
                tr2=r2/tr;
                if(tr1<=v1 && tr2<=v2)
                {
                    printf("YES\n");
                    continue;
                }
                else
                {
                    printf("NO\n");
                    continue;
                }
            }
            else
            {
                tr=(float)v3/t;
                tr1=r1*tr;
                tr2=r2*tr;
                if(tr1<=v1 && tr2<=v2)
                {
                    printf("YES\n");
                    continue;
                }
                else
                {
                    printf("NO\n");
                    continue;
                }
            }
    }
    return 0;
}
