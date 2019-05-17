#include <bits/stdc++.h>
using namespace std;
const int MAX = 26;
 
bool targetstring(string str1, string str2)
{
    int l1 = str1.length();
    int l2 = str2.length();
 
    // if length is not same print no
    if (l1 != l2)
        return false;
 
    int map[MAX] = { 0 };
 
    // Count frequencies of character in
    // first string.
    for (int i = 0; i < l1; i++)
        map[str1[i] - 'a']++;
 
    // iterate through the second string 
    // decrement counts of characters in
    // second string
    for (int i = 0; i < l2; i++) {
        map[str2[i] - 'a']--;
 
        // Since lengths are same, some
        // value would definitely become
        // negative if result is false.
        if (map[str2[i] - 'a'] < 0)
            return false;
    }
 
    return true;
}
 
// driver function
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1;
        string str2;
        cin>>str1;
        cin>>str2;
        if (targetstring(str1, str2))
            cout << "Arjun\n";
        else
            cout << "Amit\n";
    }
    return 0;
}