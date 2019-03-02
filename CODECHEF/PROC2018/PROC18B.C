https://www.codechef.com/PROC2018/problems/PROC18B/

#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        long long arr[n];
        for(int i=0;i<n;i++)
        scanf("%lld",&arr[i]);
        
        for(long i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]<arr[j])
                {
                    long long temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        double sum=arr[0];
        for(int i=1;i<n;i++)
        {
            sum=(sum+arr[i])/2;
        }
        printf("%.8lf\n",sum);
    }
}
