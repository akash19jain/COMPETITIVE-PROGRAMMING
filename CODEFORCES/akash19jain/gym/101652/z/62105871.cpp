#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int p=s.length();
    int c=0,f=0,i;
    for(i=p-1;i>=0;i--)
    {
        if(s[i]=='9')
        {
            s[i]='1';
        }
        else
        {
            s[i]++;
            break;
        }
    }
    if(i<0)
    {
        cout<<"1"<<s<<"\n";
    }
    else
        cout<<s<<"\n";
    return 0;
}