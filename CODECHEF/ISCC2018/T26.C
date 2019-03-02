https://www.codechef.com/ISCC2018/problems/T26/

#include<stdio.h>
long long t,i,l,r,arr[1000004],final[1000004],ans[1000004],q,n1,x,n;
int main()
{
    scanf("%lld",&x);
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld %lld",&l,&r);
        arr[l]++;
        arr[r+1]--;
    }
    for(i=1;i<=x;i++)
    {
        arr[i]=arr[i-1]+arr[i];
    }
   for(i=1;i<=x;i++)
   {
       ans[arr[i]]++;
   }
   for(i=x;i>=1;i--)
   {
       final[i]=final[i+1]+ans[i];
   }
   scanf("%lld",&q);
   while(q--)
   {
       scanf("%lld",&n1);
       printf("%lld\n",final[n1]);
   }
}
