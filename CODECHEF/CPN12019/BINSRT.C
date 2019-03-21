https://www.codechef.com/CPN12019/problems/BINSRT/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:26/02/2019 
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
    scanf("%lld\n",&t);
    while(t--)
    {
        long long m,a,b,c,z=0,i;
        scanf("%lld",&m);
        long long x=3+(2*(m-1))+1;
        long long arr[x];
        scanf("%lld%lld%lld",&a,&b,&c);
        if(a!=-1)
        arr[z++]=a;
        if(b!=-1)
        arr[z++]=b;
        if(c!=-1)
        arr[z++]=c;
        for(i=0;i<m-1;i++)
        {
            scanf("%lld%lld%lld",&a,&b,&c);
            if(b!=-1)
            arr[z++]=b;
            if(c!=-1)
            arr[z++]=c;
        }
        qsort(arr,z,sizeof(arr[0]),cmp);
        
        for(i=0;i<z;i++)
        {
            if(arr[i]!=0)
            printf("%lld ",arr[i]);
        }
        printf("\n");
    }
    return 0;
}
