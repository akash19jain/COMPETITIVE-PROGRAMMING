#include <bits/stdc++.h>
using namespace std;
 
int n;
int main(){
    cin >> n;
    int a[n], b[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
        b[a[i]-1] = i+1;
    }
    for (int i=0; i<n; i++)
        cout << b[i] << " ";
}