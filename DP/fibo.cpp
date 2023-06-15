#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll f[1000001];

int main(){
    int t; cin >> t;
    int mod = 1e9 + 7;
    f[0] = 0;
    f[1] = 1;
    for(int i = 2; i <= 1e6; i++){
        f[i] = f[i - 1] + f[i - 2];
        f[i] %= mod;
    }
    while(t--){
        int n; cin >>n;
        cout << f[n] << endl;
    }
    return 0;
}