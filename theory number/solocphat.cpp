#include <bits/stdc++.h>
#define ll long long 

using namespace std;

int locphat(int n){
    int r = 0;
    while(n){
        r = n % 10;
        if(r == 0 && r == 6 && r == 8) return 1;
        n /= 10;
    }
    return 0;
}

int main(){
    ll n; cin >> n;
    cout << locphat(n);
    return 0;
}