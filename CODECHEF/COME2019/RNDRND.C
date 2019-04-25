https://www.codechef.com/COME2019/problems/RNDRND/

// SOURCE FOR MAX SUM:https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/
/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:14/04/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    long long t=1;
    //scanf("%lld",&t);
    while(t--)
    {
        long long n,m;
        scanf("%lld%lld",&n,&m);
        char arr[n];
        int x;
        memset(arr,'0',sizeof(arr));
        for(int i=0;i<m;i++)
        {
            scanf("%d",&x);
            arr[x-1]='1';
        }
        char copy[n];
        int c=0,a=0,min=n*2;
        strcpy(copy,arr);
        x=0;
        for(int i=0;i<n;i++)
        {
            x++;
            a=0;
            c=0;
            for(int j=0;c<m;)
            {
                //printf("%d ",j);
                if(copy[j]=='1')
                {
                    c++;
                    copy[j]='0';
                }
               // printf("C=%d ",c);
                j=(j+x)%n;
                a++;
                
                if(a==n)
                    break;
            }
            //printf("\n");
            if(a<min)
                min=a;
            strcpy(copy,arr);
        }
        //if(arr[0]=='1')
           // min--;
        printf("%d",min);
    }
    return 0;
}
