#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    map<char,int>mp;
    cin>>s;
    int ans=1;
    for(int i=0;i<s.length();i++)
    {
        if(mp[s[i]])
        {
            if(i-mp[s[i]]%2==1)
            {
                int j=i-1,k=mp[s[i]]+1;
                int flag=1;
                for(;k<j;k++,j--)
                {
                    if(s[k]!=s[j])
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag)
                {
                    ans=0;
                    break;
                }
            }
            else
            {
                mp[s[i]]=i;
            }
        }
        else
        {
            mp[s[i]]=i;
        }
    }
    if(ans)
        cout<<"Odd.\n";
    else
        cout<<"Or not.\n";
    return 0;
}