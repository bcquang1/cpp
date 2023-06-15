#include <bits/stdc++.h>
#define ll long long

using namespace std;

// tich cac so nguyen to

int p[1000001];

void sang(){
    for(int i = 0; i <= 1e7; i++){
        p[i] = 1;
    }
    p[0] = p[1] = 0;
    for(int i = 2; i <= sqrt(1e7); i++){
        if(p[i]){
            for(int j = i * i; j <= 1e7; j += i){
                p[j] = 0;
            }
        }
    }
}

int F[1000001];

int main(){
    sang();
    F[2] = 2;
    int mod = 1e9 + 7;
    for(int i = 3; i <= 1e6; i++){
        if(p[i]) {
            F[i] = F[i - 1] * i;
            F[i] %= mod;
        } 
        else {
            F[i] = F[i - 1];
        }
    }
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << F[n] << endl;
    }
    return 0;
}