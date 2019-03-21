https://www.codechef.com/CPN12019/problems/CMD/

#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long n,q;
        cin>>n>>q;
        long long a[n];
        for(long i=0;i<n;i++)
            cin>>a[i];
        long ans[q];
        for(long i=0;i<q;i++)
            ans[i]=-1;
        long x=0;
        long m=q,f=-1;
        while(q--)
        {
            f=-1;
            long long id,k;
            cin>>id>>k;
            a[id-1]=0;
            for(long i=0;i<n;i++)
            {
                if(a[i]>k)
                {
                    f=i+1;
                    break;
                }
            }
            ans[x++]=f;

        }
        for(long i=0;i<m;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";

    }
    return 0;
}
