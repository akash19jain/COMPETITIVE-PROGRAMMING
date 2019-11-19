#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long sum=(n*(n-1))/2;
    //if(sum%2==1)
    {
        long long D=1+4*sum;
        D=sqrt(D);
        long long p=1+D,q=1-D;
        long long ans=p/2;
        ans=n-ans;
        cout<<ans<<"\n";
    }
    return 0;
}