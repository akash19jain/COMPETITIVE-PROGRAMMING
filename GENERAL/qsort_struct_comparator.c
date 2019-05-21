//QUICK SORT USING COMPARATOR HAVING STRUCTURE TO SORT OTHER ARRAYS ON BASIS OF ONE OF THE ARRAY
// HERE I NEEDED TO SORT ARRAY D IN DESCENDING ORDER AND CORRESPONDINGLY ALSO CHANGE THE POSITION OF ARRAY A AND B

//https://www.codechef.com/problems/TADELIVE

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:21/05/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct
{
    int a,d,b;
}arr;
arr list[100005];
int cmp(const void *a, const void *b)
{
    arr *ia=(arr *)a;
    arr *ib=(arr *)b;
    return(ib->d - ia->d);
}

int main()
{
    long long t=1;
    //scanf("%lld",&t);
    while(t--)
    {
        long long n,x,y;
        scanf("%lld%lld%lld",&n,&x,&y);
        for(long long i=0;i<n;i++)
        {
            scanf("%d",&list[i].a);
        }
        for(long long i=0;i<n;i++)
        {
            scanf("%d",&list[i].b);
            list[i].d=list[i].a-list[i].b;
            if(list[i].d<0)
                list[i].d*=-1;
        }
        qsort(list,n,sizeof(arr),cmp);
        /*for(int i=0;i<n;i++)
        {
            printf("%d ",list[i].d);
        }
        printf("\n");
        for(int i=0;i<n;i++)
        {
            printf("%d ",list[i].a);
        }
        printf("\n");
        for(int i=0;i<n;i++)
        {
            printf("%d ",list[i].b);
        }*/
        //printf("\n");
        long long a1=0,b1=0,sum=0;
        for(long long i=0;i<n;i++)
        {
            if(list[i].a>list[i].b)
            {
                if(a1<x)
                {
                    a1++;
                    sum+=list[i].a;
                }
                else
                {
                    b1++;
                    sum+=list[i].b;
                }
            }
            else
            {
                if(b1<y)
                {
                    b1++;
                    sum+=list[i].b;
                }
                else
                {
                    a1++;
                    sum+=list[i].a;
                }
            }
        }
        printf("%lld\n",sum);
        
    }
    return 0;
}
