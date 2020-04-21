class Solution {
public:
    bool backspaceCompare(string S, string T) 
    {
        int n1=S.length(),n2=T.length();
        string a,b;
        for(int i=0;i<n1;i++)
        {
            if(S[i]=='#')
            {
                if(!a.empty())
                    a.pop_back();
            }
            else
            {
                a=a+S[i];
            }
        }
        for(int i=0;i<n2;i++)
        {
            if(T[i]=='#')
            {
                if(!b.empty())
                    b.pop_back();
            }
            else
            {
                b=b+T[i];
            }
        }
        cout<<a<<"\n"<<b<<"\n";
        if(a==b)
            return true;
        return false;
    }
};