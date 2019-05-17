#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d%d",&n,&k);
        int arr[n];
        for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
        int steps=0,dif=0;
        dif=arr[0]-0;
        if(dif>k)
        {
            dif--;
            steps+=dif/k;
        }
        
        for(int i=1;i<n;i++)
        {
           
            dif=arr[i]-arr[i-1];
             
            if(dif>k)
            {
                dif--;
                steps+=dif/k;
            }
        }
        printf("%d\n",steps);
    }
}