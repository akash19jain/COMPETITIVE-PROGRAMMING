https://www.codechef.com/COOK105B/problems/HUNGALGO/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:21/04/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
int cmp(const void * a,const void * b)
{
    return (*(int*)a - *(int*)b);
}
int main()
{
    long long t=1;
    scanf("%lld",&t);
    while(t--)
    {
        long long n;
        scanf("%lld\n",&n);
        char arr[n][1005];
        int count[7]={0};
        for(long long i=0;i<n;i++)
        {
            scanf("%s", arr[i]);
        }
        for(long long i=0;i<n;i++)
        {
            int l=strlen(arr[i]);
            for(int j=0;j<l;j++)
            {
                if(arr[i][j]=='c')
                    count[0]++;
                else if(arr[i][j]=='e')
                    count[1]++;
                else if(arr[i][j]=='o')
                    count[2]++;
                else if(arr[i][j]=='d')
                    count[3]++;
                else if(arr[i][j]=='h')
                    count[4]++;
                else if(arr[i][j]=='f')
                    count[5]++;
            }
        }
        long long ans=0,min=1000000000;
        //c=2,o=1,d=1,e=2,h=1,f=1
        count[0]=count[0]/2;
        count[1]=count[1]/2;
        for(int i=0;i<6;i++)
        {
            if(count[i]<min)
                min=count[i];
            //printf("C=%d\n",count[i]);
        }
        ans=min;
        printf("%lld\n",ans);
    }
    return 0;
}
