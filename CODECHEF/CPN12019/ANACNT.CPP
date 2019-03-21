https://www.codechef.com/CPN12019/problems/ANACNT/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long T=1;
    cin>>T;
    while(T--)
    {
            long long n;
            cin>>n;
            long long C[n],D[n];
            for(long long i=0;i<n;i++)
            {
                cin>>C[i]>>D[i];
            }
            long long ans=2;
            sort(C,C+n);
            sort(D,D+n);
            long long c=0,d=0;
            long long x=0;
            for(;;)
            {
                    if(C[c]<D[d] && c!=n)
                    {
                        c++;
                        x++;
                    }
                    else if(C[c]>D[d] && d!=n)
                    {
                        d++;
                        x--;
                    }
                    else if(C[c]==D[d])
                    {
                        if(c!=n)
                            c++;
                        if(d!=n)
                            d++;
                    }
                    if(c==n || d==n)
                        break;
                    if(c!=0 && C[c]==C[c-1])
                    continue;
                    if(x==0)
                    {
                        ans++;
                    }
                    
            }
            cout<<ans<<"\n";
    }
    return 0;
}
