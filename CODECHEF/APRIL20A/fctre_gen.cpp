#include <bits/stdc++.h>
using namespace std;

int rand(int a, int b)
{
    return a + rand() % (b - a + 1);
}

int main()
{
	#ifndef ONLINE_JUDGE 
        freopen("F:\\COMPETITIVE-PROGRAMMING\\inp.txt", "r", stdin); 
        freopen("F:\\COMPETITIVE-PROGRAMMING\\out.txt", "w", stdout);
    #endif 
    srand(time(0));
    int t=2;
    int n=100;
    printf("%d\n",t);
    while(t--)
    {
        printf("%d\n",n);
        for(int i=2;i<=n;i++)
        {
            printf("%d %d\n",rand(1,i-1),i);
        }
        
        for(int i=1;i<=n;i++)
        {
            printf("%d ",rand(1,(int)1e6));
        }
        
        printf("\n");
        int q=n*(n+1)/2;
        printf("%d\n",q);
        
        for(int i=1;i<=n;i++)
        {
            for(int j=i;j<=n;j++)
            {
                printf("%d %d\n",i,j);
            }
        }
    }
}