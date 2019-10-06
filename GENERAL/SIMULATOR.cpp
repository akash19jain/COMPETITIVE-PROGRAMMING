/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:05/10/2019 
*///SIMULATOR THAT FIND THE PERMUTATION OF INTEGERS THAT OCCURS THE MAXIMUM & MINIMUM NO OF TIMES
//https://www.codechef.com/problems/BSHUFFLE
//PATTERN CAN BE FOUND AFTER WRITING A SIMILAR SIMULATOR
//https://discuss.codechef.com/t/bshuffle-editorial/19994

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

 
int main() {
    // your code goes here
    #ifdef JUDGE
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    srand(time(NULL));
    auto seed = chrono::high_resolution_clock::now().time_since_epoch().count();
    std::mt19937 mt(seed);//random number generator.
    int n;
    cin>>n;
    int times=2000000;//We repeat it 2*10^6 times.
    map<vector<int>,int> mp;//map to count frequency of vector.
    vector<int>arr(n);
    int i,j;
    while(times--)
    {
        for(i=0;i<n;i++)
            arr[i]=i+1;//As shown in editorial.
        for(i=0;i<n;i++)
        {
            j=mt()%n;
            swap(arr[i],arr[j]);
        }
        mp[arr]++;
    }
    vector<int> maxi,mini;
    int maxans=0000000,minans=10000000;
    for(auto i:mp)//Find max and min permutations.
    {
        if(i.second>maxans)
        {
            maxans=i.second;
            maxi=i.first;
        }
        if(i.second<minans)
        {
            minans=i.second;
            mini=i.first;
        }
    }
    for(int i:maxi)cout<<i<<" ";cout<<endl;//print the permutations.
    for(int i:mini)cout<<i<<" ";cout<<endl;
    return 0;
}