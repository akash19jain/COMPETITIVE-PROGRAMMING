https://www.codechef.com/COOK98B/problems/OETW/

#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        int arr[n];
        int arr1[(2*n)+1];
        for(long long i=1;i<=2*n;i++)
        arr1[i]=0;
        int x=0,y=0;
        for(long long i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
            if(arr[i]==2)
            x++;
            if(arr[i]==1)
            y++;
        }
        long long k=(2*n);
        //int count = 0;
        if(y!=0)
        printf("%lld\n",k-y);
        if(y==0)
        printf("%lld\n",n);
    }
    return 0;
}
