https://www.codechef.com/PCJ2018/problems/PCJ18A/

#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x;
        scanf("%d%d",&n,&x);
        int arr[n];
        for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>=x)
            {
                c=1;
                break;
            }
        }
        if(c==1)
        printf("YES\n");
        else
        printf("NO\n");
        
    }
}
