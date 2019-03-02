https://www.codechef.com/JAN19B/problems/DIFNEIGH/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:10/01/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        
        if(n==1 && m==1)
        {
            printf("1\n1\n");
        }
        else if(n==1 || m==1)
        {
            if(n==2)
            {
                printf("1\n1\n1\n");
            }
            else if(m==2)
            {
                printf("1\n1 1\n");
            }
            else
            {
                printf("2\n");
                if(n>2)
                {
                    for(int i=0;i<n;i++)
                    {
                        if(i%4==0 || i%4==3)
                        printf("1\n");
                        else
                        printf("2\n");
                    }
                }
                if(m>2)
                {
                    for(int i=0;i<m;i++)
                    {
                        if(i%4==0 || i%4==3)
                        printf("1 ");
                        else
                        printf("2 ");
                    }
                    printf("\n");
                }
            }
        }
        else if(n==2 && m==2)
        {
            printf("2\n1 2\n1 2\n");
        }
        else if(n==2 || m==2)
        {
            printf("3\n");
            int x=1;
            if(n>2)
            {
                for(int i=0;i<n;i++)
                {
                    printf("%d %d\n",x,x);
                    x++;
                    if(x==4)
                    x=1;
                }
            }
            if(m>2)
            {
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<m;j++)
                    {
                        printf("%d ",x);
                        x++;
                        if(x==4)
                        x=1;
                    }
                    x=1;
                    printf("\n");
                }
            }
        }
        else
        {
            printf("4\n");
            int x=1,y=3;
            for(int i=0;i<n;i++)
            {
                x=1,y=3;
                for(int j=0;j<m;j++)
                {
                    if(i%4==0 || i%4==1)
                    {
                        printf("%d ",x);
                        x++;
                        if(x==5)
                        x=1;
                    }
                    else
                    {
                       printf("%d ",y);
                        y++;
                        if(y==5)
                        y=1; 
                    }
                }
                printf("\n");
            }
        }
    }
}
