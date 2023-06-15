#include <bits/stdc++.h>
#define ll long long

using namespace std;

int fibo(ll n){
    if(n == 1 || n == 0) return 1;
    ll f0 = 0, f1 = 1;
    for(int i = 3; i <= 93; i++){
        ll fn = f0 + f1;
        if(fn == n) return 1;
        f0 = f1;
        f1 = fn;
    }
    return 0;
}

int main(){
    ll n; cin >> n;
    if(fibo(n)) cout << "YES";
    else cout << "NO";
    return 0;
}
