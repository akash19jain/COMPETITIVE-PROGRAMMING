/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:12/08/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define SC1(x)          scanf("%lld",&x)
#define SC2(x,y)        scanf("%lld%lld",&x,&y)
#define SC3(x,y,z)      scanf("%lld%lld%lld",&x,&y,&z)
#define SCS(x)          scanf("\n%s", x)
#define PF1(x)          printf("%lld\n",x)
#define PF2(x,y)        printf("%lld %lld\n",x,y)
#define PF3(x,y,z)      printf("%lld %lld %lld\n",x,y,z)
#define REP(i,n)        for(long long i=0;i<(n);i++)
#define FOR(i,a,b)      for(long long i=(a);i<=(b);i++)
#define FORD(i,a,b)     for(long long i=(a);i>=(b);i--)
#define WHILE(n)        while(n--)
#define MEM(a, b)       memset(a, (b), sizeof(a))
#define ITOC(c)         ((char)(((int)'0')+c))
#define MID(s,e)        (s+(e-s)/2)
#define SZ(a)            strlen(a)
#define MOD             1000000007
#define MAX             10000000005
#define MIN             -10000000005
#define PI              3.1415926535897932384626433832795
#define DEB(x)          printf("The value of \"%s\" is: %d\n",#x,x)
#define CASES           ll t;SC1(t);while(t--)
#define ABS(a)          ((a>0)?a:-(a))

const int INF = 1<<29;
typedef long long ll;
typedef unsigned long long ull;
#define FILEIO(name) \  freopen(name".in", "r", stdin); \   freopen(name".out", "w", stdout);
int cmp(const void * a,const void * b);
long long maxv(long long a,long long b);
long long minv(long long a,long long b);
long long gcd(long long u,long long v);


int main()
{
    CASES
    {
        ll n;
        SC1(n);
        double k[n];
        REP(i,n)
            scanf("%lf",&k[i]);
        double c[n];
        REP(i,n)
            scanf("%lf",&c[i]);
    
        double kc[n];
        double sum=0;
        REP(i,n)
        {
            kc[i]=(double)k[i]*c[i];
            //printf("P=%lf ",kc[i]);
            /*REP(j,i)
            {
                sum+=kc[i];
            }*/
            sum+=kc[i];
        }
        //printf("%lf\n",sum);
        double isum=0,zsum=0;
        REP(i,n)
        {
            isum+=(1/k[i]);
            /*REP(j,i)
            {
                isum+=(1/kc[i]);
            }*/

            zsum+=(1/kc[i]);
            //zsum+=(kc[i-1]);
            if(zsum>0)
                zsum=zsum-1;
        }
        double ck[n],max=MIN;
        REP(i,n)
        {
            double z=k[i]/c[i];
            ck[i]=z;
            
            if(ck[i]>z)
                max=ck[i];
        }
        double ans=0;
        REP(i,n)
        {
            double a=sum/isum;
            double b=k[i]*k[i];
            double c1=a/b;
            /*if(c1>=0)
            {
                sum=sum+(k[i]/c[i]);
            }
            else
            {
                break;
            }*/
            
            if(c1<0)
            {
                ans=-1;
                break;
            }
            double d=sqrt(c1);
            //DEB(d);
            ans+=d;
        }
        
        printf("%.10lf ",ans);

        if(ans!=-1)
        {
            if(max==0)
            {
                REP(i,n)
                {
                    double a=sum/isum;
                    double b=a/ck[i];
                    double c1=b++;
                    printf("%.10lf ",c1);
                }
            }
            else
            {
                REP(i,n)
                {
                    double a=sum/isum;
                    double b=k[i]*k[i];
                    double c1=a/b;
                    c1-=c[i];
                    printf("%.10lf ",c1);
                }
            }
        }
        printf("\n");
    }
    
}
 
//qsort(arr,n,sizeof(arr[0]),cmp);
int cmp (const void * a, const void * b)
{
    if( *(ll*)a - *(ll*)b < 0 ) return -1;
    if( *(ll*)a - *(ll*)b > 0 ) return 1;
        return 0;
}
long long maxv(long long a,long long b)
{
    if(a>b) return a;
        return b;
}
long long minv(long long a,long long b)
{
    if(a<b) return a;
        return b;
}
long long gcd(long long u,long long v)
{
    if (v == 0) return u; 
       return gcd(v, u%v);
}