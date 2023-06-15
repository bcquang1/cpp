#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Cho số nguyên dương N. Bạn được thực hiện 3 thao tác sau đây: 1. Lấy N chia cho 2 nếu N chia hết cho 2. 2. Lấy N chia hết cho 3 nếu N chia hết cho 3. 3. Giảm N đi 1 đơn vị. Hãy đếm số thao tác ít nhất để biến đổi N về 1.
int dem(ll n){
    if(n == 1) return 0;
    else {
        if(n % 2 == 0) return min(1 + dem(n / 2), 1+ dem(n - 1));
        else if(n % 3 == 0) return min(1 + dem(n / 3), 1 + dem(n - 1));
        else return 1 + dem(n - 1);
    }
}

int main(){
    ll n; cin >> n;
    cout << dem(n);
    return 0;
}