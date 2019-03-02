https://www.codechef.com/NOV18B/problems/PRDRG/

#include <stdio.h>
#include<math.h>

int main()
{
   int t;
   scanf("%d",&t);
   int arr[27];
   int y[27];
   arr[1]=1;
   arr[2]=1;
   y[1]=2;
   y[2]=4;
   for(int i=3;i<27;i++)
   {
       arr[i]=2*arr[i-2]+arr[i-1];
       y[i]=pow(2,i);
   }
   while(t--)
   {
       int n;
       scanf("%d",&n);
       printf("%d %d ",arr[n],y[n]);
       
   }

    return 0;
}
