#include <bits/stdc++.h>
#define ll long long

using namespace std;

int check(ll n){
    if(n < 10){
        if(n % 2 == 0) return 1;
        else return 0;
    }
    else {
        if(n % 10 % 2 == 0) return check(n / 10);
        else return 0;
    }
}

int main(){
    ll n; cin >> n;
    if(check(n)) cout << "YES";
    else cout << "NO";
    return 0;
}

