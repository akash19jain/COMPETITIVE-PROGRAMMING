https://www.codechef.com/NOV18B/problems/CHHAPPY/

#include<stdio.h>
int main()
{
    long long m=1000000;
    long long *arr=(long long *)calloc((m+1),sizeof(long long));
    long long *arr1=(long long *)calloc(m,sizeof(long long));
    long long n,i,j,flag=0,p=0,p1=0;
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        p=0,flag=0;
        scanf("%lld",&n);
        long long *count=(long long *)calloc((n+1),sizeof(long long));
        long long *count1=(long long *)calloc((n+1),sizeof(long long));
        for(i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
            count1[arr[i]]++;
            if(count1[arr[i]]>1)
            p1=1;
        }
        if(p1==0 || count1[arr[0]]==n)
        {
            printf("Poor Chef\n");
            continue;
        }
        for(i=0;i<n;i++)
        {
            long long x=arr[i]-1;
            arr1[i]=arr[x];
            count[arr1[i]]++;
            if(count[arr1[i]]>1)
            p=1;
        }
        
        for(i=0;i<n-1;i++)
        {
            if(p==0)
            {
                flag=0;
                break;
            }
            if(count[arr1[i]]<=1)
                continue;
            
            
            for(j=i+1;j<n;j++)
            {
                
                if((arr1[i]==arr1[j]) && (arr[i] !=arr[j]))
                {
                    flag=1;
                    break;
                }
                
            }
            if(flag==1)
            break;
        }
        if(flag==1)
        printf("Truly Happy\n");
        else
         printf("Poor Chef\n");
        
    }
}
