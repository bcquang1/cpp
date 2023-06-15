#include <bits/stdc++.h>
#define ll long long 

using namespace std;

int dx(int a[], int n){
    int l = 0, r = n - 1;
    while(l < r){
        if(a[l] != a[r]) return 0;
        ++l;
        --r;
    }
    return 1;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    if(dx(a, n)) cout << "YES";
    else cout << "NO";
}