#include <bits/stdc++.h>
#define ll long long

using namespace std;


void init1(ll n){
    if(n < 10){
        cout << n << " ";
        return;
    }
    else init1(n/10);
    cout << n % 10 << " ";
}

void init2(ll n){
    if(n < 10){
        cout << n << " ";
        return;
    }
    else {
        cout << n % 10 << " ";
        init2(n / 10);
    }
}

int main(){
    ll n; cin >> n; 
    init1(n);
    cout << endl;
    init2(n);
    return 0;
}