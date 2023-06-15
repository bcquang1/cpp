#include <bits/stdc++.h>
#define ll long long

using namespace std;

// Cho 2 số nguyên L, R, hãy đếm xem trong đoạn từ L tới R có bao nhiêu số nguyên tố. Hướng dẫn :
// Bước 1 : Sàng số nguyên tố
// Bước 2 : Gọi F[i] là số lượng các số nguyên tố từ 0 tới i, xây dựng mảng F[i] sau khi sàng
// Bước 3 : Khi đếm số lượng số nguyên tố từ L tới R chỉ cần lấy F[R] - F[L - 1]

int p[10000001];

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

int F[10000001];

int main(){
    sang();
    F[0] = 0; F[1] = 0;
    for(int i = 2; i <= 1e6; i++){
        if(p[i]) F[i] = F[i - 1] + 1;
        else F[i] = F[i - 1];
    }
    int t; cin >> t;
    while(t--){
        int l, r;
        cin >> l >> r;
        if(l == 0) cout << F[r] << endl;
        else cout << F[r] - F[l - 1] << endl;
    }
    return 0;
}