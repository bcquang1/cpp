#include <bits/stdc++.h>
#define ll long long

using namespace std;

int f[100];

int fibo(int n){
    if(f[n] != 0) return f[n];
    if(n == 1) {
        f[n] = 0;
        return f[n];
    }
    else if(n == 2) {
        f[n] = 1;
        return f[n];
    }
    else {
        f[n] = fibo(n - 1) + fibo(n - 2);
        return f[n];
    }
}

int main(){
    int n; cin >> n;
    cout << fibo(n);
    return 0;
}