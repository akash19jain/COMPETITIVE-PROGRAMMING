/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:21/05/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define MOD 1000000007

int main()
{
    long long t=1;
    //scanf("%lld",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n],p=-1,max=-1,c=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]>max)
            {
                max=arr[i];
                p=i;
                c=0;
            }
            if(arr[i]==max)
            {
                c++;
            }
        }
        if(c>1)
            c=3;
        for(int i=0;i<n;i++)
        {
            if(c==1 && arr[i]==max)
            {
                c=-1;
                continue;
            }
            if(c>1 && arr[i]==max)
            {
                c--;
            }
            printf("%d ",arr[i]);
        }
        
    }
    return 0;
}
