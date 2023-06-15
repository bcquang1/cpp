#include <bits/stdc++.h>
#define ll long long

using namespace std;

int tso(int n, int k){
    int cnt = 1;
    for(int i = 2; i<= sqrt(n); i++){
        if(n % i == 0){
            while(n % i == 0){
                if(cnt == k) return i;
                n /= i;
                cnt++;
            }
        }
    }
    if(n != 1){
        if(cnt == k) return n;
    }
    return -1;
}

int main(){
    int n, k; cin >> n >> k;
    cout << tso(n ,k);
    return 0;
}