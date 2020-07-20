// CPP program to count number of numbers from 
// 1 to n are of type x^y where x>0 and y>1 
#include <bits/stdc++.h> 
using namespace std; 
  
// For our convenience 
#define ll long long 
  
// Function that keeps all the odd power 
// numbers upto n 
void powerNumbers(ll n) 
{ 
    // v is going to store all power numbers 
    vector<ll> v; 
    v.push_back(1); 
  
    // Traverse through all base numbers and 
    // compute all their powers smaller than 
    // or equal to n. 
    for (ll i = 2; i * i <= n; i++) { 
        ll j = i * i; 
        v.push_back(j); 
        while (j * i <= n) { 
            v.push_back(j * i); 
            j = j * i; 
        } 
    } 
  
    // Remove all duplicates 
    sort(v.begin(), v.end()); 
    v.erase(unique(v.begin(), v.end()), v.end()); 
    cout<<v.size()<<"\n";
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<",";
} 
  
int main() 
{ 
	#ifndef ONLINE_JUDGE 
        freopen("F:\\COMPETITIVE-PROGRAMMING\\inp.txt", "r", stdin); 
        freopen("F:\\COMPETITIVE-PROGRAMMING\\out.txt", "w", stdout);
    #endif 
    powerNumbers(1000000000000); 
    return 0; 
} 