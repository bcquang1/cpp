// các chữ số ở vị trí chẵn là số chẵn, các chữ số ở vị trí lẻ là số lẻ

#include <bits/stdc++.h>
#define ll long long

using namespace std;

int check(ll n){
    if(n < 0) n *= -1;
    string s = to_string(n);
    for(int i = 0; i < s.size(); i++){
        if((i + 1) % 2 != (s[i] - '0') % 2){
            return 0;
        }
    }
    return 1;
}

int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        if(check(n)) cout << "YES";
        else cout << "NO";
    }
    return 0;
}