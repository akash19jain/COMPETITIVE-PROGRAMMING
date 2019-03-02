https://www.codechef.com/JULY18B/problems/NSA/

#include <bits/stdc++.h>
using namespace std;
#define m 1000000008

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        long long int min= 1000000000001;
        string str, str1;
        cin >> str;
        str1 = str;
        int count = 0;
        int len=str.length();
        
        for (int i = 0; i <len-1; ++i)
        {
            for (int l = i + 1; l <len; ++l) 
            {
                if (str[i] < str[l]) 
                ++count;
            }
        }
        
        
        if(count==0)
        cout<<"0"<<endl;
        
        else
        {
            for (int i = 0; i <len; ++i)
            {
                for (int j = 97; j <= 122; ++j)
                {
                    count= 0;
                    str=str1;
                    str[i] = char(j);
                 
                    for (int k = 0; k <len-1; ++k)
                    {
                        for (int l = k + 1; l <len; ++l) 
                        {
                            if (str[k] < str[l]) 
                            ++count;
                        }
                    }
                    count= count+ abs(int(str1[i]) - int(str[i]));
               
                    if (count< min) 
                    min= count;
                }
            }
            cout << min << endl;
        }
    }
    return 0;
}
