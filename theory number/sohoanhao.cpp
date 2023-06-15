#include <bits/stdc++.h>
#define ll long long

using namespace std;

int nt(ll n){
    for(int i = 2; i<= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int hh(ll n){
    for(int p = 2; p <= 32; p++){
        if(nt(p)){
            ll tmp =(ll)(pow(2 ,p) - 1);
            if(nt(tmp)){
                ll hh = (ll)(pow(2, p) - 1) * (ll)(pow(2, p-1));
                if(hh == n) return 1;
            }
        }
    }
    return 0;
}

int main(){
    ll n; cin >> n;
    if(hh(n)) cout << "YES";
    else cout << "NO";
    return 0;
}
