https://www.codechef.com/CPN12019/problems/SLDDEV/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    double k;
    cin>>n>>k;
    double a[n];
    double m=0;
    for(long i=0;i<n;i++)
    {
        cin>>a[i];
    }
    double X;
    for(long i=0;i<n-k+1;i++)
    {
        m=0;
        for(long j=i;j<i+k;j++)
            m+=a[j];
        m/=k;
        //cout<<m<<" ";
        double z=0;
        for(long j=i;j<i+k;j++)
        {
            z=z+(m-a[j])*(m-a[j]);
        }
        z/=k;
        //cout<<z<<" ";
        X=sqrt(z);
        cout<<fixed;
        cout<<X<<" ";
    }
    cout<<"\n";
    return 0;
}
