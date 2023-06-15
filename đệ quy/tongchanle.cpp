#include <bits/stdc++.h>
#define ll long long

using namespace std;

int sum_c(ll n){
    if(n < 10){
        if(n % 2 == 0) return n % 10;
        else return 0;
    }
    else{
        if(n % 10 % 2 == 0) return n % 10 + sum_c(n / 10);
        else return sum_c(n / 10);
    }
}

int sum_l(ll n){
    if(n < 10){
        if(n % 2 == 1) return n % 10;
        else return 0;
    }
    else {
        if(n % 10 % 2 == 1) return n % 10 + sum_l(n /10);
        else return sum_l(n / 10);
    }
}

int main(){
    ll n; cin >> n;
    cout << sum_c(n) << endl << sum_l(n);
    return 0;
}