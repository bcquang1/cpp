// Đếm chữ số 0 liên tiếp tính từ cuối của N!

#include <bits/stdc++.h>
#define ll long long
using namespace std;



int main(){
    ll n; cin >> n;
    ll res = 0;
    for(ll k = 5; k <= n; k *= 5){
            res +=n/k;
            res %= 1000000007;
    }
    cout << res;
    return 0;
}