#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
         
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%m==0)
            count++;
            
        }
        long int ans=pow(2,count)-1;
        
        printf("%ld\n",ans);
    }
    return 0;
}