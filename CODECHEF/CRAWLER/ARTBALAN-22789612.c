/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:03/02/2019
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define mod 1000000007
int cmp(const void * a,const void * b)
{
    return (*(int*)a - *(int*)b);
}
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        char str[1000005];
        int count[26]={0};
        scanf("%s", str);
        long long l=strlen(str);
        for(long long i=0;i<l;i++)
        {
            int x=str[i]-'A';
            count[x]++;
        }
       
        qsort(count,26,sizeof(count[0]),cmp);
        long long max=1000000007,i,coun,l1;
        for(i=0;i<26;i++)
        {
            if(l%(i+1)!=0)
                continue;
            l1=l/(i+1);
            coun=0;
            for(long long j=0;j<26-(i+1);j++)
                coun+=count[j];
            for(long long j=26-(i+1);j<26;j++)
                coun+=abs(count[j]-l1);
            coun>>=1;
            if(coun<max)
                max=coun;
        }
        printf("%lld\n",max);
    }
    return 0;
}