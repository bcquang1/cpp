#include <bits/stdc++.h>
#define ll long long

using namespace std;

// Cho 2 số nguyên không âm a và b. Hãy tính a^b%(10^9+7). Kiến thức bạn cần sử dụng là Binary Exponentiation.

int mod = 1e9 + 7;

ll powMod(ll a, ll b){
    if(b == 0) return 1;
    ll tmp = powMod(a, b/2);
    if(b % 2 == 1) return ((tmp % mod) * (tmp % mod) % mod) * (a % mod) % mod;
    else return (tmp % mod) * (tmp % mod) % mod;
}

int main(){
    ll a, b; cin >> a >> b;
    cout << powMod(a ,b);
    return 0;
}