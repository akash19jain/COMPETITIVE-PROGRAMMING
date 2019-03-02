https://www.codechef.com/NOV18B/problems/BINSTR/

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define MAX 1000005
int main()
{
    long long n,q,i,l=0,r=0,x=0;
    scanf("%lld%lld",&n,&q);
    //long long arr[n];
    long long *arr=(long long*)calloc(n,sizeof(long long));
    long long val,ans=0,j=0,inde=0,inde1=0;
    //char val1[1000005];
    char *val1=(char*)calloc(MAX,sizeof(char));
    for(i=0;i<n;++i)
    {
        //scanf("%lld",&val);
        scanf("%s", val1);
        char find='1';
        const char *ptr = strchr(val1, find);
        inde = ptr - val1;
        const char *ptr1 = strrchr(val1, find);
        inde1 = ptr1 - val1;

        //printf("in= %lld in1 %lld ",inde,inde1);
        ans=0,j=0;
        
        long long len=strlen(val1);
        long long len1=len-inde1-1;
        long long base=pow(2,len1);
        for(j=inde1;j>=inde;--j)
        {
            if(val1[j]=='1')
                ans+=base;
            base=base*2;
        }
        /*while(val!=0)
        {
             ans=ans+pow(2,j)*(val%10);
             j++;
             val=val/10;
        }*/
        arr[i]=ans;
        //printf("%lld ",arr[i]);
    }
    
    j=0,ans=0;
    long long max=-100,current=0,index,flag=0;
    //char x1[1000005];
    char *x1=(char*)calloc(MAX,sizeof(char));
    while(q--)
    {
        max=-100;
        scanf("%lld%lld",&l,&r);
        scanf("%s", x1);
        index=l;
        j=0,ans=0;
        
        long long len=strlen(x1);
        char find='1';

        const char *ptr = strchr(x1, find);
        inde = ptr - x1;
        const char *ptr1 = strrchr(x1, find);
        inde1 = ptr1 - x1;
        long long len1=len-inde1-1;
        long long base=pow(2,len1);
        for(j=inde1;j>=inde;--j)
        {
            if(x1[j]=='1')
                ans+=base;
            base=base*2;
        }
        //printf("%lld ",ans);
        for(i=l-1;i<r;++i)
        {
            
            current=arr[i]^ans;
            if(current>max)
            {
                max=current;
                index=i+1;
            }
            //printf("%lld ",current);
        }
        //index++;
        printf("%lld\n",index);
    }
    return 0;
}
