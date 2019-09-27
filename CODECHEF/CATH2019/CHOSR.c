//https://www.hackerearth.com/practice/data-structures/advanced-data-structures/fenwick-binary-indexed-trees/practice-problems/algorithm/energy-bars-2daea794/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back

struct bars {
    int ei;
    int ef;
};

bool cmp(bars A, bars B) {
    if(A.ei < B.ei) return true;
    else if(A.ei == B.ei and A.ef < B.ef) return true;
    else return false;
}

int index(int *arr, int low, int high, int val) {
    while(high - low > 1) {
        int mid = low + (high - low)/2;
        if(arr[mid] >= val) {
            high = mid;
        }
        else low = mid;
    }
    return high;
}

int LIS(int *arr, int n) {
    int aux[n] = {};
    int len = 1;
    
    aux[0] = arr[0];
    for(int i = 1; i<n; i++) {
        if(arr[i] < aux[0]) {
            aux[0] = arr[i];
        }
        else if(arr[i] > aux[len - 1]) {
            aux[len ++] = arr[i];
        }
        else {
            aux[index(aux, -1, len - 1, arr[i])] = arr[i];
        }
    }
    return len;
}
int main() {
    int n;
    cin >> n;
    bars b[n];
    for(int i = 0; i<n; i++) {
        cin >> b[i].ei >> b[i].ef; 
    }
    sort(b, b+n, cmp);
    
    int arr[n] = {};
    for(int i = 0; i<n; i++) arr[i] = b[i].ef; // solve LIS in arr.
    
    cout<<LIS(arr, n);
    return 0;
}