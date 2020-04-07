#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define f1(n) for(int i=0;i<n;i++)
#define f2(n) for(int i=n-1;i>=0;i--)
#define fast ios::sync_with_stdio(false);
using namespace std;
const int inf = 1e9 + 5, N = 2e5 + 5, d1[] = { 0,0,1,-1 }, d2[] = { 1,-1,0,0 };

void dj(string& st)
{
    for(char& c:st)
    {
        if(c=='1') c='0';
        else if(c=='0') c='1';
    }
}

signed main() {
    fast
    int t,b;
    cin>>t>>b;
    while(t--){
        int i,x,r=-1,c=-1;
        char l,final;
        string st(b,'?');
        for(i=1,x=0;x<b/2;i+=2)
        {
            if(i>10 && i%10==1)
            {
                if(c!=-1)
                {
                    cout << c+1 << endl;
                    cin >> l;
                    if(st[c]!=l) dj(st);
                }
                else {cout << "1\n";cin>>l;}
                if(r!=-1)
                {
                    cout << r+1 << endl;
                    cin >> l;
                    if(st[r]!=l)reverse(st.begin(),st.end());
                }
                else
                {
                    cout << "1\n";
                    cin>>l;
                }
            }
            else
            {
                cout << x+1 << endl;
                cin >> st[x];
                cout << b-x << endl;
                cin >> st[b-1-x];
                if(st[x]==st[b-1-x]) c=x;
                else if(st[x]!=st[b-1-x]) r=x;
                ++x;
            }
        }
        cout << st << endl;
        cin>>final;
        if(final=='N')return 0;
    }
}
