#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll cs_max(ll n){
    if(n < 10) return n;
    else return max(n%10, cs_max(n/10));
}

ll cs_min(ll n){
    if(n < 10) return n;
    else return min(n%10, cs_min(n/10));
}

int main(){
    ll n; cin >> n;
    cout << cs_max(n) << " " << cs_min(n) << endl;
    return 0;
}